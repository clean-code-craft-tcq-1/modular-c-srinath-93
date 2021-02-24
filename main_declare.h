#ifndef MAIN_DECLARE_H_
#define MAIN_DECLARE_H_
/*
 **********************************************************************************************************************
 * Includes
 **********************************************************************************************************************
 */
#include <stdio.h>
#include <assert.h>

/*
 **********************************************************************************************************************
 * Type definitions (simple: structures)
 **********************************************************************************************************************
 */

typedef struct
{
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

/*
 **********************************************************************************************************************
 * Externals
 **********************************************************************************************************************
 */

extern void ColorPairToString(const ColorPair* colorPair, char* buffer);
extern ColorPair GetColorFromPairNumber(int pairNumber);
extern int GetPairNumberFromColor(const ColorPair* colorPair);
extern void verifyNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
extern void verifyPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);
extern void printRefernceManual(void);

#endif /* MAIN_DECLARE_H_ */
