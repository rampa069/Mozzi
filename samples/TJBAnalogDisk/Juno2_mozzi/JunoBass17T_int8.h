#ifndef JUNOBASS17T_H_
#define JUNOBASS17T_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include <avr/pgmspace.h>
 
/** Number of samples in array */
#define JUNOBASS17T_NUM_CELLS 7648

/** Samplerate of sample. */
#define JUNOBASS17T_SAMPLERATE 16384
 
/**
Sample converted from Amiga aminet archive sample disk TJBAnalogDisk.lha, 
http://aminet.net/package/mods/smpl/TJBAnalogDisk
Original sample author T.J.Baker.
Resampled from 16726Hz to Mozzi's 16384Hz audio rate,
using sox (http://sox.sourceforge.net/)
sox infile outfile vol 0.98 rate -v 16384
The vol adjustment was needed to avoid clipping.
Next, converted to raw signed 8 bit integers:
sox infile -e signed -b 8 outfile
Converted to Mozzi sample using Mozzi/python/char2mozzi.py
python char2mozzi.py infile outfile "SAMPLENAME" "SAMPLERATE"
*/
const char __attribute__((progmem)) JUNOBASS17T_DATA [] = {-1, -2, -1, -1, -2,
-2, -1, -1, -2, -3, -1, -1, -1, -1, 1, 2, 2, 1, -1, 0, 1, 2, 3, 2, 2, 2, 2, 2,
2, 0, 0, 4, 2, 2, 2, 3, 2, 2, 2, 3, 2, 3, 3, 2, 3, 3, 2, 2, 3, 2, 1, 2, 2, 2, 2,
4, 2, 0, -1, 2, 2, -1, 2, 3, 2, 0, 1, 0, -7, -4, 3, 10, 16, 22, 29, 33, 36, 36,
37, 32, 26, 23, 21, 17, 10, 5, 2, -5, -9, -11, -12, -12, -16, -17, -17, -19,
-19, -22, -23, -20, -17, -15, -11, -8, -5, -2, -3, -1, -4, -4, -7, -7, -11, -12,
-12, -15, -19, -21, -21, -21, -22, -21, -19, -20, -19, -17, -16, -14, -12, -13,
-11, -9, -9, -7, -3, 4, 8, 10, 14, 18, 23, 28, 33, 38, 38, 38, 41, 37, 35, 32,
26, 22, 20, 16, 11, 7, 3, 3, 0, -3, -7, -8, -9, -9, -9, -7, -5, -4, -4, -5, -4,
-4, -3, -3, -3, -5, -5, -6, -6, -6, -7, -9, -6, -7, -9, -8, -10, -8, -8, -7, -7,
-7, -6, -3, -3, -2, -2, -1, 1, 4, 3, 4, 6, 6, 10, 14, 17, 19, 19, 22, 22, 22,
22, 21, 22, 20, 20, 19, 19, 17, 16, 14, 13, 12, 10, 9, 10, 10, 8, 6, 5, 6, 5, 7,
6, 6, 6, 6, 7, 5, 5, 5, 7, 6, 5, 5, 6, 5, 5, 4, 4, 0, -2, -4, -10, -41, -81,
-96, -87, -75, -69, -62, -55, -48, -40, -32, -26, -18, -10, 0, 8, 16, 23, 29,
36, 39, 46, 50, 54, 60, 60, 63, 68, 67, 68, 58, 41, 35, 38, 43, 47, 48, 51, 53,
55, 55, 57, 60, 59, 63, 65, 66, 66, 66, 66, 64, 68, 89, 118, 125, 124, 124, 117,
108, 97, 86, 77, 66, 54, 42, 32, 23, 11, -2, -22, -49, -71, -79, -79, -80, -81,
-84, -86, -85, -87, -85, -78, -63, -41, -32, -33, -39, -45, -55, -56, -59, -60,
-66, -71, -71, -73, -75, -78, -77, -81, -84, -82, -83, -80, -82, -82, -79, -79,
-81, -78, -74, -74, -74, -72, -71, -69, -65, -63, -59, -57, -51, -36, -13, 6, 9,
6, 2, -4, -6, -7, -7, -10, -11, -13, -12, -14, -19, -18, -16, -19, -21, -17,
-18, -17, -17, -15, -13, -12, -14, -12, -11, -11, -11, -10, -7, -7, -3, -3, 0,
3, 5, 8, 10, 14, 14, 18, 20, 22, 24, 28, 29, 31, 36, 36, 38, 38, 37, 40, 41, 41,
41, 44, 45, 46, 45, 46, 49, 48, 45, 48, 46, 46, 47, 46, 47, 45, 45, 45, 45, 43,
42, 41, 41, 40, 41, 38, 39, 37, 35, 36, 36, 35, 33, 33, 31, 27, 26, 26, 23, 21,
20, 21, 19, 18, 17, 15, 15, 13, 10, 11, 10, 10, 9, 8, 6, 5, 5, 6, 6, 5, 4, 4, 5,
3, 2, 3, 2, -2, -1, -2, -7, -6, -9, -10, -22, -44, -73, -104, -122, -126, -125,
-126, -125, -122, -112, -100, -84, -70, -56, -40, -26, -13, -1, 11, 22, 29, 39,
48, 54, 61, 67, 74, 79, 82, 83, 85, 83, 79, 73, 68, 67, 65, 65, 66, 68, 68, 73,
79, 82, 83, 85, 90, 90, 91, 94, 98, 102, 110, 120, 124, 125, 124, 124, 125, 125,
125, 124, 124, 125, 124, 125, 107, 81, 54, 18, -23, -71, -114, -127, -125, -126,
-125, -126, -125, -126, -125, -126, -120, -97, -68, -42, -25, -19, -16, -22,
-29, -40, -52, -62, -75, -86, -98, -106, -116, -123, -125, -126, -125, -126,
-126, -125, -124, -125, -125, -126, -126, -126, -126, -125, -126, -126, -126,
-125, -126, -126, -126, -123, -115, -99, -87, -74, -66, -60, -56, -50, -48, -48,
-48, -49, -47, -48, -44, -43, -42, -39, -38, -35, -33, -31, -27, -27, -24, -22,
-17, -12, -8, -3, 0, 5, 9, 14, 20, 22, 28, 33, 36, 42, 48, 51, 53, 57, 62, 66,
68, 71, 74, 77, 82, 84, 86, 89, 90, 93, 94, 98, 98, 100, 101, 101, 101, 102,
104, 103, 104, 103, 103, 102, 100, 103, 103, 99, 98, 99, 98, 97, 96, 96, 92, 89,
87, 88, 85, 83, 82, 82, 82, 81, 77, 74, 73, 70, 70, 66, 67, 62, 58, 57, 56, 54,
51, 52, 51, 48, 45, 42, 41, 38, 37, 36, 33, 30, 26, 26, 23, 23, 20, 21, 18, 15,
12, 11, 10, 8, 7, 5, 4, 1, -1, -6, -12, -20, -28, -39, -45, -49, -55, -54, -53,
-49, -47, -42, -40, -38, -31, -28, -25, -22, -18, -17, -15, -11, -10, -8, -6,
-3, -2, 0, 2, 2, 2, -3, -6, -10, -11, -15, -19, -19, -17, -17, -15, -10, -10,
-6, -4, -2, -1, 2, 4, 3, 4, 10, 16, 25, 34, 41, 49, 49, 50, 46, 39, 35, 27, 20,
13, 6, 0, -7, -17, -25, -31, -41, -50, -57, -59, -65, -69, -70, -69, -68, -68,
-64, -60, -56, -51, -45, -42, -38, -38, -39, -38, -39, -42, -43, -45, -48, -52,
-54, -54, -56, -56, -57, -56, -57, -57, -56, -56, -54, -54, -52, -50, -49, -49,
-47, -44, -43, -41, -40, -37, -33, -29, -21, -13, -8, -5, 1, 4, 5, 4, 4, 4, 4,
1, -4, -2, -5, -5, -6, -7, -5, -6, -7, -6, -5, -5, -6, -6, -4, -5, -2, 1, 2, 1,
4, 5, 5, 5, 6, 9, 9, 11, 12, 15, 16, 17, 19, 19, 19, 20, 22, 22, 21, 22, 23, 22,
24, 24, 24, 26, 25, 25, 26, 26, 27, 26, 26, 29, 26, 26, 26, 26, 25, 25, 27, 25,
25, 23, 26, 25, 25, 23, 22, 21, 23, 21, 21, 21, 19, 20, 18, 20, 17, 13, 12, 15,
13, 11, 10, 11, 11, 9, 10, 8, 9, 8, 7, 7, 5, 6, 6, 6, 5, 5, 4, 4, 3, 3, -1, -3,
-2, -3, -2, -4, -1, -4, -3, -5, -5, -6, -7, -5, -8, -12, -22, -37, -61, -83,
-97, -106, -106, -110, -107, -102, -94, -83, -74, -56, -47, -35, -22, -11, 0,
11, 21, 31, 40, 46, 55, 59, 65, 71, 78, 81, 82, 84, 84, 82, 80, 74, 73, 71, 71,
70, 70, 71, 72, 73, 76, 79, 81, 82, 83, 84, 82, 84, 88, 94, 102, 113, 122, 125,
125, 125, 125, 124, 125, 124, 124, 118, 99, 79, 62, 38, 9, -19, -48, -73, -92,
-109, -117, -124, -125, -125, -120, -118, -107, -90, -70, -47, -25, -5, 6, 11,
9, 6, -5, -19, -32, -45, -58, -69, -82, -91, -98, -106, -113, -121, -122, -125,
-125, -126, -126, -125, -126, -126, -126, -125, -125, -126, -125, -125, -125,
-123, -113, -94, -77, -54, -40, -29, -25, -23, -22, -24, -28, -32, -39, -43,
-47, -53, -58, -60, -63, -66, -68, -71, -68, -66, -65, -65, -64, -60, -57, -55,
-52, -47, -45, -39, -35, -31, -25, -18, -14, -8, -2, 2, 8, 15, 21, 24, 31, 37,
42, 46, 50, 54, 60, 64, 68, 70, 75, 78, 81, 85, 87, 90, 92, 96, 98, 99, 100,
102, 104, 104, 105, 106, 107, 106, 106, 109, 106, 104, 104, 104, 102, 101, 101,
99, 99, 98, 97, 96, 94, 88, 86, 85, 84, 83, 80, 79, 76, 71, 70, 69, 67, 63, 61,
58, 56, 52, 51, 51, 45, 41, 39, 37, 35, 33, 28, 27, 23, 24, 19, 20, 19, 14, 12,
10, 9, 6, 5, 5, 6, 0, -2, -4, -6, -10, -13, -18, -25, -35, -42, -46, -55, -56,
-57, -54, -52, -49, -45, -40, -38, -34, -30, -27, -25, -22, -20, -17, -14, -11,
-10, -8, -5, -1, -1, 3, 5, 4, 4, 1, -4, -7, -10, -9, -10, -10, -10, -9, -7, -6,
-4, -2, -2, 0, 2, 3, 4, 4, 10, 14, 23, 31, 41, 47, 51, 52, 49, 47, 39, 34, 25,
20, 14, 5, 0, -8, -18, -25, -33, -40, -45, -51, -54, -56, -58, -58, -59, -57,
-58, -56, -51, -45, -42, -38, -31, -29, -28, -30, -31, -34, -37, -39, -40, -42,
-44, -47, -48, -47, -49, -49, -48, -49, -49, -50, -49, -48, -49, -48, -47, -46,
-44, -45, -42, -41, -40, -38, -34, -28, -26, -17, -11, -7, -5, -4, -2, -2, -5,
-6, -7, -7, -10, -11, -9, -11, -11, -11, -10, -12, -11, -10, -9, -10, -9, -9,
-9, -7, -7, -5, -4, -1, -2, 1, 4, 5, 4, 5, 8, 8, 9, 11, 13, 15, 14, 16, 20, 20,
20, 21, 22, 23, 23, 22, 25, 26, 24, 26, 25, 27, 26, 27, 29, 29, 28, 27, 29, 29,
28, 29, 28, 28, 27, 25, 26, 26, 25, 24, 23, 23, 23, 20, 22, 20, 22, 20, 20, 21,
19, 19, 18, 19, 17, 15, 15, 16, 13, 13, 14, 13, 12, 10, 10, 11, 8, 8, 9, 8, 7,
6, 4, 4, 4, 5, 4, 3, 3, 2, 2, 3, 0, -1, -1, -2, -4, -4, -4, -3, -7, -8, -11,
-18, -36, -58, -79, -102, -119, -122, -123, -121, -115, -109, -97, -86, -74,
-60, -44, -32, -20, -6, 6, 17, 26, 39, 47, 56, 61, 69, 80, 82, 86, 91, 96, 96,
96, 95, 90, 85, 83, 82, 81, 78, 79, 82, 83, 83, 84, 88, 93, 94, 95, 100, 99,
103, 109, 117, 124, 125, 124, 125, 125, 125, 124, 124, 124, 124, 124, 124, 107,
81, 54, 24, -10, -43, -71, -95, -111, -123, -125, -125, -126, -125, -126, -124,
-117, -105, -90, -71, -53, -41, -31, -24, -25, -31, -40, -48, -60, -72, -84,
-96, -105, -116, -123, -125, -125, -125, -125, -125, -126, -126, -125, -126,
-125, -125, -126, -126, -126, -125, -125, -126, -126, -125, -122, -106, -92,
-81, -72, -64, -56, -50, -50, -48, -48, -49, -50, -49, -50, -51, -52, -50, -50,
-49, -49, -46, -43, -42, -41, -36, -33, -33, -29, -25, -23, -19, -12, -9, -8,
-2, 3, 7, 12, 16, 20, 25, 29, 35, 38, 42, 47, 50, 53, 57, 61, 67, 67, 71, 75,
77, 79, 82, 83, 84, 87, 89, 94, 92, 93, 95, 96, 97, 97, 97, 98, 97, 96, 96, 97,
94, 93, 92, 90, 88, 88, 87, 86, 85, 83, 82, 83, 81, 77, 76, 74, 72, 72, 70, 67,
66, 66, 65, 61, 59, 58, 56, 55, 52, 51, 51, 48, 44, 42, 39, 37, 35, 36, 32, 28,
26, 24, 24, 21, 19, 19, 17, 11, 12, 10, 8, 7, 5, 4, 4, 2, -3, -5, -8, -11, -20,
-25, -32, -41, -44, -45, -47, -49, -47, -42, -40, -38, -33, -30, -26, -24, -20,
-18, -14, -12, -11, -8, -8, -6, -4, 0, 3, 4, 4, 4, 4, 3, -2, -6, -6, -11, -12,
-11, -10, -11, -9, -7, -6, -4, -5, 2, 3, 2, 3, 5, 9, 16, 23, 31, 38, 41, 44, 43,
41, 37, 36, 31, 22, 15, 7, 3, -5, -14, -23, -28, -35, -42, -46, -50, -53, -55,
-54, -55, -55, -54, -55, -51, -48, -45, -40, -36, -33, -30, -28, -27, -26, -27,
-29, -29, -34, -38, -37, -39, -40, -42, -42, -43, -42, -43, -44, -42, -42, -43,
-41, -41, -42, -40, -39, -38, -38, -38, -33, -30, -26, -22, -18, -10, -8, -6,
-3, 1, 3, -2, -4, -4, -5, -8, -10, -11, -10, -10, -12, -11, -12, -12, -12, -11,
-12, -11, -10, -10, -9, -10, -8, -8, -7, -5, -4, -2, 0, 2, 2, 5, 4, 6, 7, 9, 9,
11, 13, 15, 15, 17, 17, 18, 20, 20, 20, 21, 20, 21, 23, 24, 23, 22, 23, 24, 23,
24, 24, 24, 25, 23, 25, 24, 25, 25, 25, 25, 22, 22, 24, 24, 22, 24, 23, 23, 22,
21, 22, 21, 21, 21, 20, 19, 20, 20, 19, 19, 17, 15, 16, 16, 15, 13, 13, 13, 12,
10, 11, 10, 9, 9, 8, 7, 6, 7, 6, 4, 5, 4, 3, 4, 3, 2, 2, 0, -2, -2, 0, -4, -4,
-5, -7, -6, -9, -14, -27, -46, -68, -93, -115, -125, -125, -126, -126, -125,
-124, -112, -97, -84, -67, -51, -32, -20, -7, 9, 24, 34, 44, 58, 67, 77, 82, 91,
98, 102, 108, 109, 111, 111, 104, 101, 100, 98, 96, 90, 90, 88, 88, 88, 90, 92,
91, 94, 99, 99, 99, 104, 111, 118, 124, 124, 124, 125, 124, 125, 124, 125, 125,
124, 124, 122, 108, 82, 55, 21, -10, -38, -68, -89, -107, -120, -124, -125,
-125, -126, -125, -125, -123, -114, -102, -86, -74, -59, -47, -42, -39, -40,
-43, -51, -60, -70, -80, -93, -101, -112, -120, -124, -126, -125, -126, -125,
-126, -126, -125, -126, -125, -126, -126, -125, -126, -125, -125, -125, -126,
-124, -113, -101, -90, -77, -69, -64, -60, -56, -51, -51, -52, -51, -51, -53,
-55, -56, -54, -56, -55, -52, -51, -50, -46, -44, -41, -40, -36, -31, -28, -26,
-22, -14, -11, -8, -3, 4, 7, 12, 18, 20, 25, 31, 35, 38, 43, 47, 49, 54, 58, 62,
65, 69, 73, 74, 78, 83, 84, 83, 86, 89, 92, 94, 93, 96, 99, 98, 96, 98, 99, 97,
98, 99, 98, 98, 98, 97, 97, 97, 96, 96, 94, 89, 88, 87, 87, 86, 83, 83, 81, 77,
75, 75, 73, 70, 69, 67, 66, 62, 59, 56, 55, 53, 51, 52, 50, 44, 42, 41, 37, 34,
36, 32, 28, 27, 25, 23, 21, 18, 19, 17, 13, 10, 9, 9, 7, 5, 3, 5, 4, 1, -5, -4,
-5, -10, -10, -18, -25, -31, -37, -41, -44, -47, -48, -45, -44, -42, -40, -36,
-34, -30, -27, -23, -22, -19, -15, -13, -11, -10, -8, -6, -5, -4, -1, 2, 2, 4,
3, 3, -1, -5, -7, -7, -11, -10, -11, -10, -9, -9, -9, -5, -4, -2, 1, 3, 5, 6,
13, 19, 23, 30, 36, 39, 40, 40, 39, 37, 31, 26, 21, 17, 8, 0, -7, -13, -21, -28,
-33, -40, -42, -46, -47, -48, -50, -50, -52, -48, -48, -49, -46, -42, -40, -35,
-33, -29, -27, -27, -26, -26, -28, -31, -33, -34, -37, -39, -40, -40, -42, -42,
-42, -43, -43, -44, -42, -42, -42, -42, -42, -41, -41, -40, -38, -36, -34, -29,
-25, -20, -15, -11, -10, -7, -6, -7, -5, -6, -7, -10, -9, -10, -11, -10, -11,
-11, -11, -11, -12, -10, -11, -10, -8, -7, -8, -7, -4, -4, -5, -1, -1, 0, 1, 3,
4, 6, 5, 6, 7, 10, 10, 11, 13, 14, 15, 18, 19, 20, 19, 20, 21, 21, 22, 23, 23,
24, 24, 24, 24, 24, 24, 24, 25, 24, 24, 25, 25, 24, 25, 23, 24, 25, 23, 22, 23,
22, 22, 21, 22, 22, 20, 20, 20, 20, 19, 20, 19, 18, 14, 14, 15, 14, 14, 12, 14,
13, 11, 10, 11, 10, 11, 9, 9, 9, 10, 8, 7, 8, 5, 4, 6, 5, 5, 5, 4, 3, 3, 4, 5,
2, 2, 3, 2, 3, 0, -2, -3, -4, -7, -7, -13, -26, -41, -62, -81, -101, -115, -120,
-120, -116, -110, -103, -92, -84, -67, -53, -39, -27, -15, 0, 11, 22, 30, 43,
52, 59, 66, 74, 82, 84, 89, 92, 96, 98, 99, 98, 95, 89, 86, 83, 81, 77, 75, 76,
74, 76, 77, 80, 81, 82, 84, 86, 89, 94, 103, 115, 123, 124, 125, 125, 124, 125,
125, 124, 125, 124, 124, 112, 86, 59, 30, 3, -26, -51, -74, -89, -102, -113,
-116, -118, -118, -118, -116, -111, -107, -99, -89, -75, -64, -51, -41, -33,
-29, -31, -34, -41, -47, -58, -68, -77, -87, -97, -105, -112, -120, -124, -126,
-126, -126, -125, -126, -125, -126, -125, -125, -126, -125, -126, -125, -125,
-120, -109, -96, -82, -71, -60, -57, -49, -48, -46, -44, -46, -51, -54, -55,
-55, -58, -59, -59, -60, -60, -59, -59, -59, -57, -55, -50, -48, -45, -42, -39,
-33, -29, -27, -21, -13, -10, -5, 0, 5, 7, 12, 17, 22, 27, 32, 36, 41, 45, 47,
52, 56, 61, 61, 66, 71, 74, 76, 78, 82, 84, 84, 85, 88, 89, 91, 93, 94, 96, 97,
97, 98, 98, 98, 97, 99, 98, 97, 97, 96, 95, 97, 94, 89, 89, 87, 86, 83, 82, 82,
81, 80, 75, 71, 72, 70, 68, 67, 64, 65, 57, 56, 56, 54, 52, 52, 50, 45, 41, 40,
40, 35, 35, 31, 30, 26, 23, 22, 22, 20, 18, 15, 11, 10, 7, 8, 7, 4, 5, 3, 3, -1,
-5, -5, -9, -9, -15, -23, -26, -32, -37, -40, -42, -43, -44, -43, -42, -39, -36,
-33, -29, -28, -26, -24, -21, -17, -14, -13, -9, -9, -7, -6, -4, -3, -2, 1, 2,
5, -1, -3, -3, -6, -7, -9, -11, -11, -10, -11, -10, -8, -7, -5, -4, -3, -1, 3,
7, 11, 17, 22, 28, 33, 36, 36, 37, 37, 33, 31, 25, 21, 15, 8, 4, -6, -14, -17,
-25, -30, -37, -40, -41, -42, -44, -44, -44, -45, -44, -45, -43, -42, -42, -38,
-34, -31, -30, -27, -27, -27, -25, -25, -27, -28, -29, -30, -34, -35, -35, -39,
-38, -38, -38, -40, -39, -41, -40, -39, -40, -39, -39, -38, -36, -33, -33, -29,
-26, -23, -18, -15, -11, -9, -8, -7, -6, -6, -8, -8, -9, -11, -10, -10, -11,
-11, -12, -12, -11, -11, -12, -11, -11, -11, -10, -10, -7, -7, -7, -3, -2, -4,
-3, 1, 3, 3, 3, 6, 7, 7, 6, 9, 12, 10, 12, 13, 14, 16, 18, 20, 20, 19, 20, 21,
22, 21, 22, 23, 23, 22, 24, 24, 24, 22, 24, 23, 23, 22, 22, 22, 23, 23, 23, 22,
22, 22, 20, 21, 20, 19, 20, 19, 20, 19, 18, 20, 16, 15, 14, 15, 14, 13, 14, 13,
12, 11, 10, 10, 11, 9, 8, 8, 8, 8, 6, 6, 5, 6, 6, 5, 4, 4, 4, 4, 4, 2, 2, 3, 0,
-2, -1, -1, -3, -3, -3, -4, -2, -5, -5, -5, -6, -10, -18, -28, -46, -65, -78,
-95, -106, -106, -108, -106, -100, -93, -85, -73, -60, -49, -36, -23, -11, 3,
11, 24, 32, 42, 50, 58, 64, 71, 78, 82, 84, 85, 89, 91, 90, 87, 86, 82, 81, 73,
71, 71, 67, 67, 68, 70, 70, 71, 75, 78, 81, 83, 87, 95, 99, 112, 123, 125, 124,
124, 124, 124, 124, 125, 125, 125, 115, 93, 67, 39, 11, -14, -35, -54, -71, -84,
-92, -98, -102, -100, -101, -99, -94, -92, -86, -75, -67, -59, -47, -37, -28,
-24, -22, -24, -25, -33, -40, -48, -61, -70, -79, -89, -99, -107, -114, -121,
-124, -125, -125, -125, -125, -125, -125, -126, -126, -126, -125, -126, -122,
-113, -101, -89, -76, -68, -61, -54, -51, -49, -45, -46, -49, -53, -54, -58,
-59, -62, -66, -67, -69, -68, -67, -65, -65, -63, -58, -55, -53, -50, -46, -42,
-39, -34, -28, -26, -21, -16, -11, -7, -3, 4, 9, 16, 18, 22, 31, 34, 37, 42, 49,
52, 54, 59, 63, 67, 70, 73, 77, 80, 81, 83, 86, 87, 88, 90, 95, 93, 95, 97, 98,
97, 97, 96, 95, 96, 95, 92, 92, 90, 89, 89, 86, 86, 83, 83, 84, 82, 80, 78, 75,
74, 72, 71, 69, 66, 67, 66, 62, 58, 55, 55, 52, 53, 51, 50, 47, 43, 41, 40, 37,
37, 34, 31, 28, 24, 24, 22, 21, 19, 16, 15, 13, 11, 10, 8, 8, 5, 5, 3, 4, 2, -3,
-5, -7, -8, -10, -12, -19, -24, -27, -31, -36, -39, -41, -42, -41, -43, -40,
-37, -34, -32, -30, -27, -24, -23, -19, -16, -13, -13, -11, -8, -9, -6, -6, -4,
-1, 0, 2, 3, 1, -4, -4, -6, -6, -8, -12, -11, -11, -11, -10, -10, -8, -8, -7,
-5, -1, -2, 4, 7, 14, 19, 22, 27, 32, 34, 34, 33, 32, 25, 22, 19, 11, 5, -3, -8,
-14, -22, -26, -30, -33, -38, -41, -41, -42, -41, -42, -42, -42, -43, -40, -40,
-36, -36, -33, -28, -27, -24, -23, -22, -22, -23, -25, -25, -26, -27, -28, -29,
-32, -37, -34, -34, -36, -38, -37, -35, -36, -35, -35, -35, -33, -35, -32, -29,
-26, -25, -22, -17, -12, -11, -9, -6, -6, -7, -6, -6, -8, -10, -9, -10, -11,
-12, -12, -12, -12, -12, -10, -10, -11, -9, -10, -8, -8, -7, -6, -6, -3, -3, -2,
1, 3, 3, 4, 3, 5, 6, 7, 8, 10, 9, 11, 14, 12, 15, 13, 16, 18, 18, 18, 21, 20,
19, 22, 22, 21, 22, 22, 21, 22, 22, 23, 23, 23, 21, 22, 23, 21, 21, 23, 23, 21,
22, 21, 22, 20, 20, 20, 20, 20, 20, 18, 20, 19, 18, 17, 18, 14, 13, 15, 12, 14,
12, 13, 10, 10, 9, 9, 10, 8, 9, 7, 8, 7, 6, 6, 5, 6, 5, 4, 5, 4, 3, 3, 3, 2, 3,
2, 3, -1, -2, 1, -2, -2, -5, -4, -3, -4, -6, -9, -16, -27, -39, -55, -67, -85,
-93, -99, -102, -101, -95, -88, -81, -73, -63, -49, -37, -26, -15, -2, 9, 17,
28, 37, 46, 52, 58, 64, 69, 74, 79, 82, 83, 82, 84, 83, 82, 80, 76, 74, 70, 68,
67, 66, 65, 65, 65, 66, 68, 67, 72, 77, 81, 86, 92, 104, 118, 125, 124, 124,
124, 125, 125, 124, 124, 125, 118, 98, 72, 47, 22, -1, -24, -44, -57, -72, -81,
-87, -90, -93, -93, -95, -91, -90, -88, -81, -75, -66, -58, -49, -39, -31, -28,
-25, -25, -25, -32, -40, -45, -55, -65, -76, -85, -93, -101, -107, -115, -120,
-124, -126, -126, -125, -125, -126, -125, -126, -125, -126, -120, -110, -99,
-91, -78, -70, -62, -56, -53, -49, -50, -53, -52, -53, -57, -59, -64, -67, -68,
-71, -70, -69, -71, -70, -67, -65, -64, -59, -57, -53, -49, -45, -40, -37, -32,
-27, -21, -16, -11, -6, 1, 6, 9, 15, 22, 24, 30, 35, 40, 43, 49, 53, 56, 61, 64,
66, 70, 72, 75, 79, 82, 81, 84, 84, 86, 88, 87, 89, 91, 93, 89, 93, 93, 92, 93,
90, 92, 92, 90, 90, 89, 88, 88, 85, 83, 83, 82, 80, 79, 76, 74, 73, 70, 68, 67,
67, 66, 62, 58, 57, 56, 54, 53, 51, 51, 46, 44, 42, 41, 39, 35, 35, 32, 28, 25,
25, 23, 22, 20, 19, 18, 13, 11, 10, 8, 6, 6, 5, 4, 4, 1, -2, -3, -3, -6, -7,
-11, -13, -18, -23, -25, -31, -34, -36, -38, -40, -40, -39, -36, -35, -34, -30,
-27, -24, -23, -20, -18, -15, -13, -11, -10, -9, -9, -6, -3, -1, -2, 0, 4, 3, 3,
1, 1, -3, -6, -7, -9, -8, -11, -10, -10, -9, -8, -9, -8, -6, -5, -2, 4, 6, 12,
19, 21, 24, 27, 31, 30, 29, 25, 24, 21, 16, 9, 6, 2, -8, -12, -19, -23, -27,
-30, -33, -35, -36, -39, -39, -39, -38, -41, -38, -38, -38, -36, -33, -28, -27,
-25, -24, -21, -21, -22, -21, -19, -21, -23, -24, -25, -26, -26, -28, -29, -30,
-32, -33, -35, -34, -34, -33, -32, -33, -34, -31, -31, -30, -27, -25, -21, -17,
-17, -12, -9, -9, -10, -9, -8, -10, -10, -10, -9, -11, -10, -12, -12, -12, -12,
-12, -11, -12, -11, -11, -9, -10, -9, -8, -6, -6, -7, -4, -3, -2, 0, 3, 4, 4, 5,
6, 6, 7, 8, 10, 10, 11, 12, 14, 15, 15, 18, 19, 18, 20, 19, 18, 20, 19, 20, 21,
22, 20, 20, 21, 20, 21, 22, 21, 22, 20, 22, 20, 20, 20, 19, 20, 20, 20, 18, 19,
18, 18, 17, 18, 16, 16, 14, 15, 15, 14, 16, 14, 17, 14, 15, 15, 12, 10, 10, 13,
11, 9, 9, 10, 9, 7, 7, 8, 6, 5, 6, 5, 5, 6, 4, 5, 4, 3, 3, 4, 4, 2, 0, 3, 2, 3,
2, 2, 1, -3, -4, -3, -8, -12, -20, -32, -46, -62, -74, -85, -92, -96, -97, -94,
-86, -80, -70, -63, -54, -40, -31, -18, -8, 3, 16, 24, 34, 41, 50, 54, 59, 66,
72, 77, 80, 84, 83, 85, 86, 83, 81, 80, 75, 70, 69, 67, 64, 62, 61, 59, 60, 59,
62, 65, 65, 67, 74, 81, 91, 107, 119, 125, 124, 125, 124, 124, 125, 125, 124,
113, 89, 66, 48, 23, 4, -16, -35, -49, -60, -69, -76, -81, -83, -82, -80, -80,
-80, -79, -75, -69, -64, -58, -47, -40, -35, -28, -26, -25, -26, -27, -32, -38,
-44, -52, -61, -70, -80, -88, -91, -101, -109, -112, -115, -119, -119, -122,
-121, -123, -123, -121, -114, -107, -102, -91, -81, -73, -68, -60, -55, -54,
-51, -52, -50, -53, -55, -56, -59, -59, -62, -67, -68, -68, -69, -69, -67, -65,
-61, -61, -56, -54, -50, -44, -42, -38, -33, -28, -24, -20, -15, -10, -5, 1, 5,
9, 18, 20, 23, 27, 32, 37, 38, 42, 48, 52, 54, 57, 63, 65, 66, 69, 72, 72, 74,
78, 80, 82, 81, 83, 82, 84, 85, 84, 86, 84, 85, 84, 85, 84, 84, 83, 82, 82, 82,
81, 82, 77, 74, 75, 74, 73, 71, 68, 69, 67, 65, 64, 64, 60, 57, 56, 54, 52, 52,
51, 50, 48, 43, 41, 40, 37, 35, 35, 34, 31, 26, 26, 24, 23, 21, 20, 16, 14, 13,
12, 11, 9, 8, 6, 5, 3, 4, 3, -1, -4, -4, -5, -8, -9, -12, -14, -19, -25, -25,
-28, -31, -35, -37, -37, -37, -37, -35, -32, -30, -27, -27, -24, -22, -18, -17,
-15, -12, -12, -11, -8, -6, -6, -4, -2, -2, -2, 0, 2, 3, 0, -2, -2, -4, -7, -7,
-8, -8, -9, -10, -10, -8, -8, -6, -5, -3, 3, 5, 8, 14, 16, 20, 25, 25, 24, 26,
26, 25, 22, 20, 17, 7, 4, -1, -8, -10, -17, -21, -24, -28, -28, -30, -29, -31,
-35, -35, -35, -35, -34, -35, -32, -29, -28, -28, -23, -23, -23, -20, -18, -19,
-19, -19, -19, -21, -24, -23, -24, -26, -26, -28, -27, -28, -30, -29, -30, -32,
-32, -32, -29, -30, -29, -27, -27, -23, -21, -19, -14, -13, -12, -11, -11, -9,
-9, -11, -10, -9, -11, -11, -12, -12, -11, -11, -11, -12, -11, -11, -10, -10,
-9, -9, -5, -7, -7, -2, -1, -1, -1, 3, 5, 5, 5, 6, 7, 6, 8, 11, 12, 13, 13, 14,
15, 15, 15, 17, 19, 19, 19, 20, 20, 19, 20, 21, 20, 20, 21, 20, 22, 20, 21, 21,
21, 22, 20, 21, 20, 21, 19, 20, 20, 19, 19, 18, 18, 18, 15, 17, 17, 14, 15, 14,
15, 15, 12, 13, 12, 11, 12, 12, 11, 10, 10, 10, 10, 8, 7, 8, 7, 6, 6, 7, 6, 6,
6, 5, 6, 5, 3, 4, 3, 4, 3, 2, 3, 1, 3, 2, 2, -1, -4, -2, -3, -3, -3, -3, -4, -5,
-7, -11, -19, -26, -38, -50, -62, -76, -84, -91, -94, -97, -93, -88, -81, -72,
-63, -50, -40, -29, -18, -4, 6, 17, 27, 36, 46, 51, 57, 65, 70, 75, 80, 82, 84,
86, 86, 88, 86, 81, 80, 74, 71, 68, 65, 64, 59, 57, 58, 59, 57, 56, 58, 62, 64,
71, 81, 93, 107, 121, 125, 124, 125, 125, 124, 124, 125, 121, 109, 88, 68, 46,
22, 2, -18, -31, -46, -57, -66, -73, -76, -79, -80, -83, -82, -81, -79, -78,
-75, -69, -60, -57, -49, -42, -38, -34, -31, -29, -32, -38, -39, -46, -55, -60,
-69, -77, -85, -94, -98, -105, -107, -115, -117, -119, -121, -122, -121, -121,
-118, -110, -104, -94, -88, -80, -72, -66, -61, -58, -56, -53, -53, -56, -56,
-58, -60, -62, -65, -68, -69, -70, -68, -67, -67, -65, -64, -59, -58, -55, -51,
-46, -44, -39, -33, -30, -27, -23, -15, -11, -8, -3, 3, 7, 11, 17, 23, 27, 30,
33, 39, 42, 47, 48, 53, 56, 58, 63, 65, 68, 70, 70, 74, 77, 78, 79, 80, 80, 82,
83, 84, 85, 84, 83, 84, 84, 84, 84, 84, 82, 82, 83, 82, 82, 80, 77, 76, 74, 72,
71, 70, 68, 67, 66, 66, 65, 63, 59, 59, 56, 53, 54, 51, 51, 49, 45, 45, 41, 42,
40, 37, 37, 34, 34, 32, 28, 24, 26, 24, 21, 19, 19, 18, 14, 12, 11, 10, 8, 6, 6,
6, 4, 5, 3, 0, -3, -5, -6, -9, -11, -13, -17, -21, -24, -28, -28, -29, -34, -35,
-33, -33, -32, -30, -28, -26, -27, -23, -21, -20, -17, -17, -12, -11, -11, -9,
-7, -5, -5, -6, -3, -1, -3, -2, -1, -1, -4, -6, -6, -6, -9, -10, -10, -10, -11,
-11, -9, -9, -9, -7, -4, -2, 2, 6, 11, 16, 19, 21, 21, 22, 23, 21, 20, 20, 14,
8, 5, 2, -6, -10, -12, -18, -23, -24, -26, -26, -28, -30, -30, -32, -32, -34,
-33, -31, -33, -30, -27, -28, -26, -25, -24, -21, -19, -17, -16, -17, -18, -18,
-18, -18, -19, -20, -20, -24, -25, -25, -26, -25, -26, -27, -27, -26, -28, -27,
-25, -27, -26, -23, -20, -18, -17, -15, -12, -11, -10, -10, -11, -10, -10, -10,
-11, -11, -12, -12, -12, -12, -12, -12, -12, -12, -12, -13, -10, -10, -11, -10,
-9, -7, -7, -7, -6, -5, -4, -1, 1, 3, 5, 5, 6, 6, 6, 8, 10, 9, 9, 12, 13, 12,
15, 15, 17, 19, 18, 19, 19, 20, 20, 20, 20, 20, 20, 22, 21, 20, 20, 21, 20, 20,
22, 19, 20, 20, 19, 20, 20, 20, 19, 19, 19, 18, 17, 19, 19, 15, 14, 15, 13, 14,
13, 13, 14, 11, 10, 10, 12, 8, 9, 10, 10, 9, 8, 9, 8, 8, 8, 6, 6, 5, 5, 6, 5, 4,
5, 5, 3, 4, 4, 3, 3, 4, 3, 3, 3, 2, 1, 0, -2, -3, -4, -3, -5, -6, -12, -18, -26,
-36, -49, -59, -69, -78, -85, -88, -88, -89, -84, -78, -70, -62, -52, -40, -29,
-21, -8, 1, 11, 23, 32, 42, 50, 55, 63, 69, 72, 78, 81, 85, 83, 84, 83, 83, 80,
75, 72, 68, 67, 63, 58, 57, 57, 55, 57, 58, 57, 60, 66, 74, 82, 90, 102, 117,
124, 124, 124, 125, 125, 125, 124, 124, 115, 96, 78, 59, 36, 16, 2, -17, -34,
-42, -52, -58, -66, -70, -72, -73, -74, -75, -75, -74, -73, -70, -65, -59, -55,
-48, -44, -41, -36, -35, -34, -35, -39, -41, -48, -53, -60, -69, -75, -81, -89,
-95, -100, -105, -108, -113, -117, -118, -119, -119, -115, -108, -104, -97, -89,
-82, -75, -72, -66, -63, -59, -60, -58, -57, -58, -62, -66, -65, -66, -69, -68,
-70, -70, -69, -68, -65, -65, -63, -59, -56, -54, -47, -43, -39, -36, -28, -25,
-19, -16, -10, -6, -2, 4, 7, 14, 19, 20, 24, 28, 34, 36, 38, 44, 48, 51, 53, 55,
59, 61, 65, 69, 69, 69, 71, 76, 79, 78, 77, 79, 82, 81, 81, 82, 84, 83, 83, 82,
82, 81, 82, 82, 82, 79, 77, 77, 74, 73, 71, 72, 69, 69, 67, 66, 66, 64, 59, 58,
58, 54, 54, 52, 52, 49, 46, 45, 42, 40, 39, 38, 36, 34, 34, 33, 27, 23, 24, 22,
22, 21, 20, 19, 17, 12, 10, 13, 10, 7, 7, 5, 4, 4, 2, 3, 0, -4, -4, -5, -5, -7,
-10, -12, -15, -20, -21, -23, -26, -29, -30, -28, -30, -33, -32, -28, -27, -27,
-26, -23, -22, -18, -16, -13, -10, -11, -9, -7, -6, -6, -3, -2, -2, 0, 1, 5, 4,
0, -1, -2, -4, -5, -5, -7, -8, -7, -8, -7, -9, -10, -9, -6, -6, -3, 2, 5, 5, 10,
15, 18, 19, 20, 20, 21, 20, 20, 17, 11, 7, 5, 0, -7, -10, -14, -16, -19, -22,
-23, -25, -25, -27, -28, -30, -28, -28, -30, -28, -28, -27, -26, -27, -24, -22,
-22, -17, -17, -16, -13, -13, -13, -13, -15, -17, -17, -19, -20, -21, -21, -23,
-23, -23, -24, -26, -26, -26, -26, -25, -25, -24, -21, -18, -18, -14, -11, -11,
-11, -9, -8, -7, -10, -10, -10, -10, -11, -10, -11, -11, -12, -11, -10, -11,
-12, -12, -10, -11, -11, -10, -9, -8, -8, -5, -4, -5, -4, -3, 0, 2, 2, 3, 5, 6,
6, 6, 9, 9, 9, 11, 10, 10, 12, 14, 14, 15, 14, 18, 18, 19, 19, 18, 21, 18, 20,
19, 20, 19, 18, 20, 20, 19, 19, 19, 18, 20, 19, 18, 17, 19, 18, 18, 18, 14, 15,
15, 15, 12, 13, 15, 12, 10, 12, 11, 10, 11, 12, 11, 10, 10, 9, 9, 7, 7, 6, 7, 6,
6, 6, 7, 7, 5, 5, 6, 5, 5, 5, 5, 6, 4, 4, 4, 4, 4, 3, 4, 4, 2, 2, 2, 2, 0, -2,
-1, -1, -4, -5, -8, -13, -20, -26, -36, -48, -56, -65, -72, -77, -81, -83, -81,
-77, -73, -65, -56, -45, -38, -28, -16, -8, 2, 15, 22, 30, 38, 47, 53, 59, 66,
68, 71, 73, 78, 80, 81, 80, 76, 74, 70, 67, 60, 57, 57, 54, 51, 50, 52, 51, 49,
50, 53, 52, 60, 71, 79, 91, 102, 115, 123, 125, 125, 125, 125, 125, 119, 106,
90, 73, 56, 39, 21, 6, -11, -23, -32, -43, -49, -54, -58, -61, -64, -65, -65,
-68, -69, -65, -64, -61, -57, -53, -50, -45, -42, -37, -34, -35, -34, -35, -38,
-41, -46, -54, -57, -67, -72, -80, -87, -90, -94, -100, -104, -105, -106, -106,
-107, -104, -99, -94, -87, -80, -76, -69, -64, -61, -58, -56, -57, -57, -58,
-59, -59, -61, -65, -67, -68, -70, -70, -70, -71, -71, -70, -66, -63, -62, -57,
-54, -51, -47, -41, -36, -32, -27, -23, -18, -13, -10, -3, 2, 5, 10, 17, 21, 22,
27, 31, 35, 39, 41, 47, 50, 52, 55, 60, 64, 66, 66, 67, 71, 71, 73, 75, 77, 78,
80, 81, 83, 82, 81, 81, 82, 83, 82, 82, 80, 79, 78, 76, 77, 75, 74, 73, 71, 71,
69, 70, 68, 66, 65, 65, 62, 57, 57, 56, 54, 51, 51, 51, 50, 46, 42, 41, 40, 39,
36, 36, 36, 34, 29, 27, 27, 23, 23, 22, 22, 18, 19, 16, 14, 11, 8, 10, 7, 8, 6,
6, 4, 2, -1, -1, -3, -3, -5, -7, -7, -11, -12, -16, -19, -22, -26, -26, -28,
-29, -30, -29, -29, -29, -30, -28, -25, -25, -25, -21, -18, -19, -15, -12, -11,
-10, -9, -6, -6, -7, -3, -2, -2, -2, -2, 1, 2, -2, -1, -2, -4, -6, -7, -8, -8,
-9, -10, -9, -8, -9, -9, -6, -2, -1, 2, 6, 9, 12, 14, 17, 19, 19, 19, 18, 18,
12, 10, 8, 5, 1, -6, -8, -11, -13, -17, -19, -23, -24, -24, -26, -26, -28, -28,
-26, -27, -26, -28, -27, -27, -27, -25, -22, -20, -18, -18, -16, -15, -14, -14,
-13, -14, -17, -17, -16, -18, -20, -22, -22, -22, -26, -26, -25, -26, -27, -26,
-26, -24, -24, -21, -18, -17, -18, -16, -11, -12, -11, -10, -10, -11, -10, -11,
-10, -12, -12, -11, -11, -11, -12, -11, -11, -11, -12, -10, -10, -9, -9, -9, -7,
-6, -5, -3, -1, -2, -1, 2, 4, 4, 5, 5, 5, 5, 7, 9, 11, 11, 11, 14, 13, 13, 15,
14, 14, 15, 16, 19, 18, 18, 20, 20, 20, 20, 19, 20, 19, 20, 19, 20, 20, 20, 18,
19, 20, 18, 19, 18, 20, 17, 15, 17, 14, 13, 15, 15, 15, 13, 13, 13, 12, 10, 10,
12, 9, 11, 9, 9, 9, 8, 7, 8, 8, 7, 5, 6, 5, 4, 5, 7, 5, 5, 4, 5, 4, 3, 4, 5, 4,
3, 3, 3, 4, 2, 2, 3, 2, 4, 2, 3, 3, 1, -2, -3, -2, -6, -9, -13, -22, -29, -37,
-47, -53, -60, -67, -69, -71, -71, -72, -65, -59, -53, -45, -37, -30, -22, -11,
-2, 6, 16, 23, 32, 41, 48, 53, 56, 64, 66, 69, 71, 70, 73, 72, 72, 69, 67, 64,
60, 56, 54, 51, 50, 47, 45, 45, 45, 46, 48, 53, 59, 66, 75, 85, 97, 109, 117,
124, 125, 125, 124, 122, 115, 103, 87, 73, 58, 41, 24, 11, -5, -17, -24, -34,
-41, -47, -52, -55, -56, -58, -59, -60, -61, -61, -60, -58, -55, -52, -48, -44,
-41, -38, -38, -34, -34, -36, -37, -41, -42, -48, -55, -58, -65, -72, -78, -84,
-89, -93, -97, -99, -100, -101, -100, -98, -93, -90, -85, -79, -75, -72, -67,
-64, -60, -58, -60, -58, -59, -60, -59, -60, -60, -61, -61, -64, -64, -64, -66,
-62, -58, -57, -54, -52, -47, -46, -42, -40, -35, -31, -27, -21, -17, -13, -9,
-4, 0, 3, 8, 13, 16, 19, 21, 28, 32, 32, 38, 40, 43, 46, 49, 50, 54, 54, 57, 61,
62, 62, 64, 67, 66, 67, 68, 69, 69, 70, 69, 70, 71, 70, 70, 70, 71, 69, 67, 69,
68, 67, 67, 67, 66, 65, 65, 64, 60, 58, 55, 55, 55, 53, 52, 51, 50, 49, 46, 45,
45, 41, 41, 39, 39, 37, 36, 36, 34, 33, 31, 28, 27, 24, 23, 22, 21, 19, 20, 18,
16, 12, 13, 11, 8, 8, 7, 8, 5, 4, 4, 4, 2, -1, -1, -2, -6, -6, -8, -9, -10, -13,
-17, -19, -21, -23, -24, -24, -26, -26, -26, -25, -24, -23, -22, -20, -17, -18,
-16, -13, -11, -12, -10, -9, -8, -6, -5, -3, -4, -5, -2, -1, -1, -2, -2, -2, -4,
-5, -4, -5, -7, -8, -7, -8, -10, -9, -8, -7, -6, -4, -1, 2, 6, 7, 10, 13, 14,
16, 18, 18, 15, 14, 12, 9, 8, 4, 3, 0, -6, -8, -10, -11, -13, -16, -18, -17,
-20, -20, -20, -22, -23, -21, -20, -22, -22, -21, -17, -17, -16, -16, -13, -12,
-10, -11, -9, -10, -11, -10, -11, -12, -12, -11, -15, -17, -18, -19, -19, -20,
-20, -22, -20, -20, -20, -19, -17, -16, -16, -13, -12, -11, -12, -10, -11, -11,
-10, -11, -11, -11, -12, -12, -11, -12, -12, -14, -13, -13, -13, -13, -13, -13,
-11, -12, -10, -10, -10, -10, -9, -8, -8, -6, -5, -5, -3, -3, -1, 3, 3, 3, 4, 4,
4, 6, 6, 6, 7, 6, 9, 10, 10, 10, 11, 12, 11, 13, 13, 13, 13, 15, 15, 14, 14, 16,
17, 14, 14, 16, 14, 14, 15, 14, 15, 15, 15, 15, 15, 15, 15, 14, 14, 14, 13, 15,
13, 11, 12, 11, 12, 10, 9, 10, 10, 9, 8, 9, 9, 8, 8, 9, 8, 7, 7, 7, 8, 7, 6, 6,
6, 5, 5, 5, 6, 4, 5, 5, 4, 4, 3, 2, 3, 3, 0, 1, 3, 1, -4, -2, -1, -2, -3, -6,
-7, -12, -19, -23, -32, -40, -47, -54, -58, -63, -69, -67, -64, -64, -61, -55,
-48, -42, -34, -25, -16, -7, 2, 11, 19, 25, 32, 40, 47, 51, 55, 59, 64, 66, 68,
69, 69, 69, 69, 69, 67, 60, 56, 52, 52, 47, 45, 44, 42, 41, 42, 45, 47, 51, 62,
69, 76, 86, 98, 108, 114, 120, 122, 122, 118, 112, 102, 93, 79, 66, 51, 35, 22,
9, -2, -12, -21, -29, -36, -40, -42, -45, -50, -52, -53, -54, -55, -56, -53,
-55, -50, -48, -43, -41, -39, -35, -36, -33, -34, -34, -36, -39, -43, -46, -52,
-57, -61, -71, -75, -80, -85, -88, -90, -93, -94, -92, -90, -87, -85, -78, -77,
-73, -69, -65, -64, -61, -59, -58, -59, -59, -59, -60, -61, -65, -67, -65, -66,
-68, -67, -67, -68, -64, -61, -58, -58, -54, -49, -45, -43, -40, -36, -30, -27,
-24, -18, -12, -9, -6, 1, 5, 10, 13, 17, 22, 23, 30, 34, 35, 38, 41, 47, 49, 50,
51, 54, 57, 57, 60, 61, 67, 68, 66, 69, 69, 71, 69, 71, 71, 71, 71, 70, 71, 70,
70, 70, 70, 69, 68, 69, 69, 68, 66, 67, 65, 63, 59, 59, 59, 57, 56, 55, 52, 51,
52, 50, 46, 45, 44, 42, 42, 40, 37, 36, 37, 32, 32, 29, 27, 26, 22, 23, 23, 20,
19, 20, 16, 14, 12, 10, 10, 8, 7, 5, 4, 3, 0, -1, -4, -4, -4, -5, -6, -7, -7,
-8, -9, -10, -11, -11, -11, -12, -13, -14, -13, -15, -18, -19, -20, -19, -19,
-17, -18, -18, -16, -17, -16, -14, -13, -13, -12, -12, -12, -11, -10, -9, -10,
-10, -9, -8, -8, -4, -7, -9, -6, -6, -6, -8, -7, -6, -7, -8, -8, -7, -7, -8, -8,
-7, -9, -7, -6, -4, -3, -4, -2, -1, -1, -1, 0, 3, 2, 1, 2, 2, -1, -5, -2, -2,
-6, -7, -7, -7, -8, -9, -10, -10, -10, -12, -11, -10, -10, -12, -12, -12, -12,
-12, -12, -12, -11, -13, -11, -11, -11, -10, -11, -10, -11, -12, -11, -10, -12,
-11, -12, -10, -12, -13, -13, -11, -12, -13, -11, -12, -11, -12, -12, -11, -11,
-11, -11, -10, -12, -11, -10, -11, -12, -12, -10, -10, -9, -10, -9, -10, -10,
-8, -7, -7, -8, -7, -8, -7, -6, -7, -7, -6, -6, -5, -2, -4, -5, -3, 0, -2, -2,
-2, 2, 4, 3, 3, 4, 4, 5, 4, 5, 5, 5, 6, 7, 6, 6, 7, 8, 9, 8, 7, 9, 9, 9, 8, 9,
10, 8, 8, 9, 10, 9, 9, 12, 10, 9, 9, 10, 9, 8, 9, 10, 10, 9, 10, 10, 10, 9, 10,
11, 10, 9, 9, 9, 10, 10, 9, 10, 10, 8, 10, 9, 11, 9, 9, 10, 9, 9, 8, 9, 9, 8, 6,
8, 9, 7, 6, 8, 7, 6, 6, 6, 6, 6, 5, 6, 5, 5, 5, 5, 6, 4, 5, 4, 5, 4, 4, 6, 4, 3,
4, 5, 3, 2, 3, 2, 3, 0, -1, 1, 3, 0, -1, 0, 1, -2, 1, 3, 2, 2, 4, 4, 2, 3, 2, 3,
3, 3, 4, 5, 4, 4, 5, 5, 5, 3, 5, 5, 4, 4, 5, 5, 4, 5, 5, 5, 4, 4, 6, 4, 6, 4, 4,
5, 5, 5, 5, 5, 6, 5, 5, 6, 5, 5, 4, 5, 6, 5, 5, 5, 4, 3, 5, 4, 3, 3, 3, 4, 4, 3,
3, 3, 3, 1, 3, 2, 3, -1, -1, 3, 3, 2, 4, 1, -2, -2, 0, 2, 3, 0, -1, 1, 2, 3, 3,
2, -2, -1, -1, 0, -2, -3, -2, -3, -3, -3, -2, -3, -3, -3, -3, -3, -3, -3, -2,
-4, -4, -2, -2, -3, -1, -2, -2, -3, -4, -3, -4, -2, -6, -1, -2, -3, -4, -3, -3,
-3, -2, -2, -2, -3, -3, -3, 1, 0, -4, 1, 4, 3, 2, 2, 3, 4, 3, 3, 4, 4, 5, 4, 5,
4, 5, 4, 4, 4, 4, 5, 5, 7, 5, 5, 4, 5, 4, 6, 7, 6, 5, 6, 6, 6, 5, 6, 6, 4, 6, 6,
6, 6, 6, 5, 6, 5, 6, 6, 5, 7, 5, 6, 6, 5, 5, 6, 5, 5, 5, 4, 5, 6, 5, 5, 5, 5, 4,
6, 6, 6, 4, 4, 4, 4, 4, 3, 3, 2, 3, 3, 3, 4, 3, 3, 3, 3, 0, 0, 2, 0, 1, -1, 1,
0, -1, 0, 3, 2, 2, 3, 2, 0, -2, 1, 2, 2, 1, 0, -3, 1, 2, 2, 3, 2, 3, 2, 3, 3, 3,
2, 3, 3, 3, 3, 4, 3, 4, 4, 5, 5, 4, 5, 6, 4, 4, 6, 7, 6, 6, 6, 7, 6, 5, 5, 5, 6,
5, 4, 7, 5, 4, 6, 6, 5, 5, 6, 4, 5, 4, 4, 5, 3, 5, 6, 5, 5, 4, 5, 4, 4, 4, 4, 4,
4, 4, 4, 5, 3, 3, 3, 3, 3, 2, 3, 4, 3, 2, 5, 2, 1, 3, 3, 2, 2, 2, 3, 3, 1, 2, 2,
3, 2, 0, -2, -2, -3, 1, 2, 0, -4, -2, -3, -4, -1, -2, -2, -2, -3, -1, -3, -3,
-4, -1, -2, -5, -3, -2, -4, -5, -5, -3, -3, -3, -2, -2, -2, -2, -4, -1, -1, -2,
-2, -1, -3, -2, -2, -2, 0, -2, -1, -2, 2, 0, -3, 2, 2, 3, 2, 2, 2, 2, 2, 1, 2,
3, 2, 2, 3, 2, 3, 3, 3, 2, 2, 4, 3, 3, 2, 3, 3, 3, 2, 2, 3, 3, 2, 4, 4, 3, 2, 5,
4, 4, 2, 3, 4, 3, 3, 4, 4, 3, 2, 3, 2, 2, 3, 4, 4, 3, 3, 3, 3, 4, 3, 3, 4, 3, 4,
3, 4, 4, 4, 4, 5, 5, 5, 5, 3, 3, 3, 3, 4, 4, 3, 4, 4, 4, 4, 4, 4, 4, 4, 6, 4, 4,
4, 5, 6, 2, 4, 5, 4, 4, 5, 5, 5, 4, 5, 4, 5, 4, 4, 6, 5, 5, 4, 5, 5, 5, 4, 5, 4,
4, 3, 4, 5, 3, 4, 5, 4, 4, 4, 4, };
 
 #endif /* JUNOBASS17T_H_ */
