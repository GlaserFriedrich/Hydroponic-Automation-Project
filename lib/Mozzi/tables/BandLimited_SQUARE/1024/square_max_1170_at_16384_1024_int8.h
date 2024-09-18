#ifndef SQUARE_MAX_1170_AT_16384_1024INT8_H_
#define SQUARE_MAX_1170_AT_16384_1024INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"


#define SQUARE_MAX_1170_AT_16384_1024_NUM_CELLS 1024
#define SQUARE_MAX_1170_AT_16384_1024_SAMPLERATE 1024

CONSTTABLE_STORAGE(int8_t) SQUARE_MAX_1170_AT_16384_1024_DATA [] = 
{
0, 3, 6, 10, 13, 16, 20, 23, 26, 29, 33, 36, 39, 42, 45, 48, 52, 55, 58, 60, 63, 66, 69, 72, 74, 77, 80, 82, 84, 87, 89, 91, 94, 
96, 98, 100, 102, 104, 105, 107, 109, 110, 112, 113, 115, 116, 117, 118, 119, 120, 121, 122, 123, 123, 124, 125, 125, 126, 126, 126, 127, 127, 127, 127, 127, 
127, 127, 127, 127, 126, 126, 126, 125, 125, 125, 124, 124, 123, 123, 122, 121, 121, 120, 119, 119, 118, 117, 116, 116, 115, 114, 113, 113, 112, 111, 110, 110, 
109, 108, 107, 107, 106, 105, 105, 104, 103, 103, 102, 101, 101, 100, 100, 99, 99, 98, 98, 98, 97, 97, 97, 96, 96, 96, 96, 96, 96, 96, 96, 96, 
96, 96, 96, 96, 96, 96, 96, 96, 97, 97, 97, 97, 98, 98, 98, 99, 99, 100, 100, 101, 101, 101, 102, 102, 103, 103, 104, 104, 105, 105, 106, 106, 
107, 107, 108, 108, 109, 109, 110, 110, 111, 111, 112, 112, 112, 113, 113, 113, 114, 114, 114, 115, 115, 115, 115, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
116, 116, 116, 116, 116, 116, 116, 116, 115, 115, 115, 115, 114, 114, 114, 114, 113, 113, 113, 112, 112, 112, 111, 111, 110, 110, 109, 109, 109, 108, 108, 107, 
107, 107, 106, 106, 105, 105, 104, 104, 104, 103, 103, 103, 102, 102, 102, 101, 101, 101, 100, 100, 100, 100, 100, 99, 99, 99, 99, 99, 99, 99, 99, 99, 
99, 99, 99, 99, 99, 99, 99, 99, 100, 100, 100, 100, 100, 101, 101, 101, 102, 102, 102, 103, 103, 103, 104, 104, 104, 105, 105, 106, 106, 107, 107, 107, 
108, 108, 109, 109, 109, 110, 110, 111, 111, 112, 112, 112, 113, 113, 113, 114, 114, 114, 114, 115, 115, 115, 115, 116, 116, 116, 116, 116, 116, 116, 116, 116, 
116, 116, 116, 116, 116, 116, 116, 116, 115, 115, 115, 115, 114, 114, 114, 113, 113, 113, 112, 112, 112, 111, 111, 110, 110, 109, 109, 108, 108, 107, 107, 106, 
106, 105, 105, 104, 104, 103, 103, 102, 102, 101, 101, 101, 100, 100, 99, 99, 98, 98, 98, 97, 97, 97, 97, 96, 96, 96, 96, 96, 96, 96, 96, 96, 
96, 96, 96, 96, 96, 96, 96, 96, 97, 97, 97, 98, 98, 98, 99, 99, 100, 100, 101, 101, 102, 103, 103, 104, 105, 105, 106, 107, 107, 108, 109, 110, 
110, 111, 112, 113, 113, 114, 115, 116, 116, 117, 118, 119, 119, 120, 121, 121, 122, 123, 123, 124, 124, 125, 125, 125, 126, 126, 126, 127, 127, 127, 127, 127, 
127, 127, 127, 127, 126, 126, 126, 125, 125, 124, 123, 123, 122, 121, 120, 119, 118, 117, 116, 115, 113, 112, 110, 109, 107, 105, 104, 102, 100, 98, 96, 94, 
91, 89, 87, 84, 82, 80, 77, 74, 72, 69, 66, 63, 60, 58, 55, 52, 48, 45, 42, 39, 36, 33, 29, 26, 23, 20, 16, 13, 10, 6, 3, 0, 
-3, -6, -10, -13, -16, -20, -23, -26, -29, -33, -36, -39, -42, -45, -48, -52, -55, -58, -60, -63, -66, -69, -72, -74, -77, -80, -82, -84, -87, -89, -91, -94, 
-96, -98, -100, -102, -104, -105, -107, -109, -110, -112, -113, -115, -116, -117, -118, -119, -120, -121, -122, -123, -123, -124, -125, -125, -126, -126, -126, -127, -127, -127, -127, -127, 
-127, -127, -127, -127, -126, -126, -126, -125, -125, -125, -124, -124, -123, -123, -122, -121, -121, -120, -119, -119, -118, -117, -116, -116, -115, -114, -113, -113, -112, -111, -110, -110, 
-109, -108, -107, -107, -106, -105, -105, -104, -103, -103, -102, -101, -101, -100, -100, -99, -99, -98, -98, -98, -97, -97, -97, -96, -96, -96, -96, -96, -96, -96, -96, -96, 
-96, -96, -96, -96, -96, -96, -96, -96, -97, -97, -97, -97, -98, -98, -98, -99, -99, -100, -100, -101, -101, -101, -102, -102, -103, -103, -104, -104, -105, -105, -106, -106, 
-107, -107, -108, -108, -109, -109, -110, -110, -111, -111, -112, -112, -112, -113, -113, -113, -114, -114, -114, -115, -115, -115, -115, -116, -116, -116, -116, -116, -116, -116, -116, -116, 
-116, -116, -116, -116, -116, -116, -116, -116, -115, -115, -115, -115, -114, -114, -114, -114, -113, -113, -113, -112, -112, -112, -111, -111, -110, -110, -109, -109, -109, -108, -108, -107, 
-107, -107, -106, -106, -105, -105, -104, -104, -104, -103, -103, -103, -102, -102, -102, -101, -101, -101, -100, -100, -100, -100, -100, -99, -99, -99, -99, -99, -99, -99, -99, -99, 
-99, -99, -99, -99, -99, -99, -99, -99, -100, -100, -100, -100, -100, -101, -101, -101, -102, -102, -102, -103, -103, -103, -104, -104, -104, -105, -105, -106, -106, -107, -107, -107, 
-108, -108, -109, -109, -109, -110, -110, -111, -111, -112, -112, -112, -113, -113, -113, -114, -114, -114, -114, -115, -115, -115, -115, -116, -116, -116, -116, -116, -116, -116, -116, -116, 
-116, -116, -116, -116, -116, -116, -116, -116, -115, -115, -115, -115, -114, -114, -114, -113, -113, -113, -112, -112, -112, -111, -111, -110, -110, -109, -109, -108, -108, -107, -107, -106, 
-106, -105, -105, -104, -104, -103, -103, -102, -102, -101, -101, -101, -100, -100, -99, -99, -98, -98, -98, -97, -97, -97, -97, -96, -96, -96, -96, -96, -96, -96, -96, -96, 
-96, -96, -96, -96, -96, -96, -96, -96, -97, -97, -97, -98, -98, -98, -99, -99, -100, -100, -101, -101, -102, -103, -103, -104, -105, -105, -106, -107, -107, -108, -109, -110, 
-110, -111, -112, -113, -113, -114, -115, -116, -116, -117, -118, -119, -119, -120, -121, -121, -122, -123, -123, -124, -124, -125, -125, -125, -126, -126, -126, -127, -127, -127, -127, -127, 
-127, -127, -127, -127, -126, -126, -126, -125, -125, -124, -123, -123, -122, -121, -120, -119, -118, -117, -116, -115, -113, -112, -110, -109, -107, -105, -104, -102, -100, -98, -96, -94, 
-91, -89, -87, -84, -82, -80, -77, -74, -72, -69, -66, -63, -60, -58, -55, -52, -48, -45, -42, -39, -36, -33, -29, -26, -23, -20, -16, -13, -10, -6, -3, 
 };

#endif