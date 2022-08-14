/** conversion.c
 * =============================================================
 * Name: David Petzold, 14 Aug
 * Section:  T6/7
 * Project:  Lab 04
 * Purpose:  To explore different levels of precision after type conversions
 * ============================================================= */

#include <stdio.h>

int main() {

    // GIVEN:  Do Not Modify!
    int intVar1 = 22;
    int intVar2 = 7;

    // Task 1 -----------------------------------------------------------------------
    int intQuotient = intVar1 / intVar2;
    float floatQuotient1 = intVar1 / intVar2;
    float floatQuotient2 = (float)intVar1 / intVar2;
    float floatQuotient3 = intVar1 / (float)intVar2;

    // Task 2 -----------------------------------------------------------------------
    printf("%i\n", intQuotient);
    printf("%.10f\n", floatQuotient1);
    printf("%.10f\n", floatQuotient2);
    printf("%.10f\n", floatQuotient3);


    // Task 3 -----------------------------------------------------------------------
    double doubleQuotient1 = (float)intVar1/intVar2;
    double doubleQuotient2 = (double)intVar1/intVar2;

    printf("%.10f\n", doubleQuotient1);
    printf("%.10f\n", doubleQuotient2);

    return 0;
}