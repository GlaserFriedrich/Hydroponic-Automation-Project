#include <SD.h>
#include <SPI.h>
File datalog;
int pinCS = 53;

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);

#include <RBD_Timer.h>
RBD::Timer timer16h;
RBD::Timer timer8h;
RBD::Timer timer5min;
RBD::Timer timer2h;
RBD::Timer timer15min;

#include "DHT.h"
#define DHTPIN 40 
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 12
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);

const int LEDpin = 10;
const int fan_control_pin = 3;
const int LDRpin = A0;

float watertemp;
int LDRvalue;
float humidity;
float airtemp;
bool LEDan;
bool fanhigh;


void setup() {

  Serial.begin(9600);

  lcd.init();
  lcd.backlight();
  lcd.print("Startup....");
  delay(1000);
  lcd.clear();

  pinMode(pinCS, OUTPUT);
  if (SD.begin()) {
      Serial.println("SD card is ready to use.");
      lcd.print("SD card is ready to use.");
      delay(1000);
      lcd.clear();
    } 

    else {
      Serial.println("SD card initialization failed");
      lcd.print("SD card initialization failed");
      delay(1000);
      lcd.clear();
      return;
    }
  datalog = SD.open("datalog.txt", FILE_WRITE);
  if (datalog) {
    Serial.println("Datalog file created");
  }
  else {
    Serial.println("Error creating datalog file");
  }
  datalog.close();
  dht.begin();

  timer16h.setTimeout(57600000);
  timer8h.setTimeout(28800000);
  timer5min.setTimeout(300000);
  timer2h.setTimeout(7200000);
  timer15min.setTimeout(900000);

  pinMode(LEDpin,OUTPUT);
  //digitalWrite(LEDpin,HIGH);
  //LEDan = true;

  TCCR3B = TCCR3B & B11111000 | B00000101; 
  pinMode(fan_control_pin, OUTPUT);
  //analogWrite(fan_control_pin,200);
  
  lcd.print(".Startup complete.");
  delay(1000);
  lcd.clear();

  timer16h.restart();
 
  timer2h.restart();
}


void loop() {

  if (timer16h.onExpired()) {
    
    timer8h.restart();
    digitalWrite(LEDpin,LOW);
    LEDan = false;
    Serial.println(".LED lights OFF.");
    //LED ausschalten

  }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (timer8h.onExpired()) {
    
    timer16h.restart();
    digitalWrite(LEDpin,HIGH);
    LEDan = true;
    Serial.println(".LED lights ON.");
    //LEDanschalten

  }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (timer5min.onExpired()) {
    
    timer5min.restart();

    lcd.clear();
    lcd.setCursor(0,0);

    if (timer16h.isActive()) {
    
    lcd.print("Day Cycle: ");
    lcd.print(timer16h.getPercentValue());
    lcd.print("%");

    }

    if (timer8h.isActive()) {
    
    lcd.print("Night Cycle: ");
    lcd.print(timer8h.getPercentValue());
    lcd.print("%");

    }
    lcd.setCursor(0,1);

    Watertemp_Check();      //Watertemp

    Airtemp_Check();        //Airtemp

    Humidity_Check();       //Humidity

    if (LEDan == true) {    //LEDAN?

      LED_Check();

    }
    
    Datalog();

  }
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (timer15min.onExpired()) {
    
    timer2h.restart();
    analogWrite(fan_control_pin,20);
    Serial.println(".Fan LOW.");
    fanhigh = false;
    //Ventilator an

  }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if (timer2h.onExpired()) {
    
    timer15min.restart();
    analogWrite(fan_control_pin,100);
    Serial.println(".Fan HIGH.");
    fanhigh = true;
    //Ventilatoraus

  }

}


void LED_Check () {

  LDRvalue = analogRead(LDRpin);

  if (LDRvalue >= 500) {

    Serial.println(".LED lights are working.");

  }
  else if (LDRvalue < 500) {

    Serial.println(".WARNING! LED lights might be defective.");

  }

}


void Watertemp_Check () {

  sensors.requestTemperatures(); 
  watertemp = sensors.getTempCByIndex(0);
  Serial.print(".Water temperature in °C: ");
  Serial.print(watertemp);
  Serial.println(".");
  lcd.print("WT ");
  int w = round(watertemp);
  lcd.print(w);

}


void Airtemp_Check () {

  airtemp = dht.readTemperature();
  if (isnan(airtemp)) {

      Serial.println(F(".Failed to read from DHT sensor!."));
      return;

  }
  Serial.print(".Air Temperature in °C: ");
  Serial.print(airtemp);
  Serial.println(".");
  lcd.print(" AT ");
  int a = round(airtemp);
  lcd.print(a);

}


void Humidity_Check () {

  humidity = dht.readHumidity();
  if (isnan(humidity)) {

      Serial.println(F(".Failed to read from DHT sensor!."));
      return;

  }
  Serial.print(".Humidity in %: ");
  Serial.print(humidity);
  Serial.println(".");
  lcd.print(" H ");
  int h = round(humidity);
  lcd.print(h);

}

void Datalog () {
    
    Serial.println("Writing to Datalog...");
    datalog= SD.open("datalog.txt",FILE_WRITE);
    datalog.print("Watertemp: ");
    datalog.print(watertemp);
    datalog.print(" Airtemp: ");
    datalog.print(airtemp);
    datalog.print(" Humidity: ");
    datalog.print(humidity);
    datalog.print("% FAN: ");
    datalog.print(fanhigh);
    
    if (timer16h.isActive()) {
    
    datalog.print(" Day Cycle: ");
    datalog.print(timer16h.getPercentValue());
    datalog.print("%");

    }

    if (timer8h.isActive()) {
    
    datalog.print(" Night Cycle: ");
    datalog.print(timer8h.getPercentValue());
    datalog.print("%");

    }

    if ((LEDan == true) && (LDRvalue >= 500))  {    //LEDAN?

      datalog.println(" LEDs OK");

    }

}