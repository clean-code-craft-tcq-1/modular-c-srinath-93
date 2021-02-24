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
 * Description          : Program to verify color number with color's pair
 *                       and to verify color's pair with corresponding color's number
 **********************************************************************************************************************
 */
int main() {
    verifyNumberToPair(4, WHITE, BROWN);
    verifyNumberToPair(5, WHITE, SLATE);

    verifyPairToNumber(BLACK, ORANGE, 12);
    verifyPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
