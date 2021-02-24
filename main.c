#include <stdio.h>
#include <assert.h>
#include "main_prv.h"
#include "main_declare.h"
/*
 **********************************************************************************************************************
 * Service name         : main
 * Syntax               : int main(void)
 * param[in]            : None
 * param[inout]         : None
 * param[out]           : None
 * return               : int
 * Description          : Program to verify color number with color's pair and to verify color's pair with
 *                        corresponding color's number and print refernce manual
 **********************************************************************************************************************
 */
int main() {
    /* test if color number is inline with color pair */
    verifyNumberToPair(4, WHITE, BROWN);
    verifyNumberToPair(5, WHITE, SLATE);
    /* test if color pair is inline with color number */
    verifyPairToNumber(BLACK, ORANGE, 12);
    verifyPairToNumber(VIOLET, SLATE, 25);
    /* print the reference manual */
    printRefernceManual();

    return 0;
}
