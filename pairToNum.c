#include "main_prv.h"
#include "main_declare.h"

/*
 **********************************************************************************************************************
 * Service name         : verifyPairToNumber
 * Syntax               : void verifyPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
 * param[in]            : major
 * param[in]            : minor
 * param[in]            : expectedPairNumber
 * return               : None
 * Description          : Program to verify color's pair with color number
 **********************************************************************************************************************
 */
void verifyPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
