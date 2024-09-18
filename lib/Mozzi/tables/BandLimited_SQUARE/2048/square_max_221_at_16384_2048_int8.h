#ifndef SQUARE_MAX_221_AT_16384_2048INT8_H_
#define SQUARE_MAX_221_AT_16384_2048INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_221_AT_16384_2048_NUM_CELLS 2048
#define SQUARE_MAX_221_AT_16384_2048_SAMPLERATE 2048

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_221_AT_16384_2048_DATA [] = 
{
0, 8, 16, 23, 31, 39, 46, 54, 61, 67, 74, 80, 86, 91, 96, 101, 106, 109, 113, 116, 119, 121, 123, 124, 126, 126, 127, 127, 127, 126, 126, 125, 124, 
122, 121, 119, 118, 116, 114, 113, 111, 109, 108, 106, 105, 103, 102, 101, 100, 99, 98, 98, 97, 97, 97, 97, 97, 98, 98, 99, 100, 100, 101, 102, 103, 
104, 105, 106, 107, 108, 109, 110, 111, 112, 112, 113, 114, 114, 114, 115, 115, 115, 115, 115, 114, 114, 114, 113, 113, 112, 111, 111, 110, 109, 108, 108, 107, 
106, 106, 105, 104, 104, 103, 103, 103, 102, 102, 102, 102, 102, 102, 102, 103, 103, 103, 104, 104, 105, 105, 106, 107, 107, 108, 108, 109, 109, 110, 110, 111, 
111, 111, 112, 112, 112, 112, 112, 112, 112, 112, 112, 111, 111, 111, 110, 110, 109, 109, 108, 108, 107, 107, 107, 106, 106, 105, 105, 105, 104, 104, 104, 104, 
104, 104, 104, 104, 104, 104, 105, 105, 105, 105, 106, 106, 107, 107, 107, 108, 108, 109, 109, 109, 110, 110, 110, 110, 111, 111, 111, 111, 111, 111, 111, 111, 
111, 110, 110, 110, 110, 109, 109, 108, 108, 108, 107, 107, 107, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 
106, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 108, 108, 108, 
107, 107, 107, 107, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 
109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 
106, 105, 105, 105, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 
110, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 
106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 110, 110, 110, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 
108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 
109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 
106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 
109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 
106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 109, 108, 
108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 
108, 108, 109, 109, 109, 109, 109, 109, 109, 109, 110, 110, 110, 109, 109, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 107, 106, 106, 
106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 106, 107, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 109, 109, 110, 110, 
110, 110, 110, 110, 110, 109, 109, 109, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 106, 106, 106, 106, 105, 105, 105, 106, 106, 
106, 106, 106, 106, 106, 107, 107, 107, 107, 108, 108, 108, 108, 109, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 109, 
109, 108, 108, 108, 108, 107, 107, 107, 107, 106, 106, 106, 106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 107, 108, 
108, 108, 109, 109, 109, 109, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 110, 109, 109, 109, 108, 108, 108, 108, 107, 107, 107, 106, 106, 
106, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 105, 106, 106, 106, 106, 107, 107, 107, 108, 108, 108, 109, 109, 110, 110, 110, 110, 111, 111, 
111, 111, 111, 111, 111, 111, 111, 110, 110, 110, 110, 109, 109, 109, 108, 108, 107, 107, 107, 106, 106, 105, 105, 105, 105, 104, 104, 104, 104, 104, 104, 104, 
104, 104, 104, 105, 105, 105, 106, 106, 107, 107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 111, 112, 112, 112, 112, 112, 112, 112, 112, 112, 111, 111, 111, 
110, 110, 109, 109, 108, 108, 107, 107, 106, 105, 105, 104, 104, 103, 103, 103, 102, 102, 102, 102, 102, 102, 102, 103, 103, 103, 104, 104, 105, 106, 106, 107, 
108, 108, 109, 110, 111, 111, 112, 113, 113, 114, 114, 114, 115, 115, 115, 115, 115, 114, 114, 114, 113, 112, 112, 111, 110, 109, 108, 107, 106, 105, 104, 103, 
102, 101, 100, 100, 99, 98, 98, 97, 97, 97, 97, 97, 98, 98, 99, 100, 101, 102, 103, 105, 106, 108, 109, 111, 113, 114, 116, 118, 119, 121, 122, 124, 
125, 126, 126, 127, 127, 127, 126, 126, 124, 123, 121, 119, 116, 113, 109, 106, 101, 96, 91, 86, 80, 74, 67, 61, 54, 46, 39, 31, 23, 16, 8, 0, 
-8, -16, -23, -31, -39, -46, -54, -61, -67, -74, -80, -86, -91, -96, -101, -106, -109, -113, -116, -119, -121, -123, -124, -126, -126, -127, -127, -127, -126, -126, -125, -124, 
-122, -121, -119, -118, -116, -114, -113, -111, -109, -108, -106, -105, -103, -102, -101, -100, -99, -98, -98, -97, -97, -97, -97, -97, -98, -98, -99, -100, -100, -101, -102, -103, 
-104, -105, -106, -107, -108, -109, -110, -111, -112, -112, -113, -114, -114, -114, -115, -115, -115, -115, -115, -114, -114, -114, -113, -113, -112, -111, -111, -110, -109, -108, -108, -107, 
-106, -106, -105, -104, -104, -103, -103, -103, -102, -102, -102, -102, -102, -102, -102, -103, -103, -103, -104, -104, -105, -105, -106, -107, -107, -108, -108, -109, -109, -110, -110, -111, 
-111, -111, -112, -112, -112, -112, -112, -112, -112, -112, -112, -111, -111, -111, -110, -110, -109, -109, -108, -108, -107, -107, -107, -106, -106, -105, -105, -105, -104, -104, -104, -104, 
-104, -104, -104, -104, -104, -104, -105, -105, -105, -105, -106, -106, -107, -107, -107, -108, -108, -109, -109, -109, -110, -110, -110, -110, -111, -111, -111, -111, -111, -111, -111, -111, 
-111, -110, -110, -110, -110, -109, -109, -108, -108, -108, -107, -107, -107, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, 
-106, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -108, -108, -108, 
-107, -107, -107, -107, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, 
-109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, 
-106, -105, -105, -105, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, 
-110, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, 
-106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -110, -110, -110, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, 
-108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, 
-109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, 
-106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, 
-109, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, 
-106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -109, -108, 
-108, -108, -108, -107, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, 
-108, -108, -109, -109, -109, -109, -109, -109, -109, -109, -110, -110, -110, -109, -109, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -107, -106, -106, 
-106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -106, -107, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -109, -109, -110, -110, 
-110, -110, -110, -110, -110, -109, -109, -109, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -106, -106, -106, -106, -105, -105, -105, -106, -106, 
-106, -106, -106, -106, -106, -107, -107, -107, -107, -108, -108, -108, -108, -109, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -109, 
-109, -108, -108, -108, -108, -107, -107, -107, -107, -106, -106, -106, -106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -107, -107, -107, -107, -108, 
-108, -108, -109, -109, -109, -109, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -110, -109, -109, -109, -108, -108, -108, -108, -107, -107, -107, -106, -106, 
-106, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -105, -106, -106, -106, -106, -107, -107, -107, -108, -108, -108, -109, -109, -110, -110, -110, -110, -111, -111, 
-111, -111, -111, -111, -111, -111, -111, -110, -110, -110, -110, -109, -109, -109, -108, -108, -107, -107, -107, -106, -106, -105, -105, -105, -105, -104, -104, -104, -104, -104, -104, -104, 
-104, -104, -104, -105, -105, -105, -106, -106, -107, -107, -107, -108, -108, -109, -109, -110, -110, -111, -111, -111, -112, -112, -112, -112, -112, -112, -112, -112, -112, -111, -111, -111, 
-110, -110, -109, -109, -108, -108, -107, -107, -106, -105, -105, -104, -104, -103, -103, -103, -102, -102, -102, -102, -102, -102, -102, -103, -103, -103, -104, -104, -105, -106, -106, -107, 
-108, -108, -109, -110, -111, -111, -112, -113, -113, -114, -114, -114, -115, -115, -115, -115, -115, -114, -114, -114, -113, -112, -112, -111, -110, -109, -108, -107, -106, -105, -104, -103, 
-102, -101, -100, -100, -99, -98, -98, -97, -97, -97, -97, -97, -98, -98, -99, -100, -101, -102, -103, -105, -106, -108, -109, -111, -113, -114, -116, -118, -119, -121, -122, -124, 
-125, -126, -126, -127, -127, -127, -126, -126, -124, -123, -121, -119, -116, -113, -109, -106, -101, -96, -91, -86, -80, -74, -67, -61, -54, -46, -39, -31, -23, -16, -8, 
 };

#endif