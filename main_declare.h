#ifndef MAIN_DECLARE_H_
#define MAIN_DECLARE_H_

#include <stdio.h>
#include <assert.h>
#include "main_prv.h"

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);

extern ColorPair GetColorFromPairNumber(int pairNumber);

extern int GetPairNumberFromColor(const ColorPair* colorPair);

extern void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);

extern void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif /* MAIN_DECLARE_H_ */
