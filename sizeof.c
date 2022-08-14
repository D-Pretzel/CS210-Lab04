/** sizeof.c
 * =============================================================
 * Name: David Petzold, 14 Aug 22
 * Section:  T6/7
 * Project:  Lab 04
 * Purpose:  Determine the size of various data types
 * ============================================================= */

// Create Include Statements Here
#include <stdio.h>

int main() {

    // Create Your Variables Here
    int intVar;
    long longVar;
    float floatVar;
    double doubleVar;
    char charVar;

    // Create Your Print Statements Here
    printf("An int variable uses %lu bytes\n", sizeof(intVar));
    printf("A long variable uses %lu bytes\n", sizeof(longVar));
    printf("A float variable uses %lu bytes\n", sizeof(floatVar));
    printf("A double variable uses %lu bytes\n", sizeof(doubleVar));
    printf("A char variable uses %lu bytes\n", sizeof(charVar));

    return 0;
}