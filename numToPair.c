#include "main_prv.h"
#include "main_declare.h"

extern const int MAX_COLORPAIR_NAME_CHARS;

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    printf("Major colour - %s\n Minor colour - %s\n",colorPair.majorColor,colorPair.minorColor);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
