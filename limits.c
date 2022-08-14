/** limits.c
 * =============================================================
 * Name: David Petzold, 14 Aug
 * Section:  T6/7
 * Project:  Lab 04
 * Purpose:  Determine the max and min values of ints and longs
 * ============================================================= */

#include <stdio.h>
#include <limits.h>

#define WORLD_POPULATION_2020 7794798739

int main() {

    // Task 1 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of the world population
    int worldPop = WORLD_POPULATION_2020;
    // Print out the integer variable you just made
    printf("world population in 2020 was (as int): %i\n", worldPop);
    // Create a long variable, and assign it the value of the world population
    long worldPopLong = WORLD_POPULATION_2020;
    // Print out the long variable you just made
    printf("world population in 2020 was (as long): %ld\n", worldPopLong);

    // Task 2 -----------------------------------------------------------------------

    // Create an integer variable, and assign it the value of INT_MAX - 1
    int maxMinus = INT_MAX - 1;
    // Print the value of the variable you just made
    printf("value of init: %i\n", maxMinus);
    // Increment the value of your integer variable, and print it out using the same format as above
    printf("value of init: %i\n", ++maxMinus);
    // (2x) Increment the value of your integer variable, and print it out using the same format as above
    printf("value of init: %i\n", ++maxMinus);
    // (3x) Increment the value of your integer variable, and print it out using the same format as above
    printf("value of init: %i\n", ++maxMinus);

    // Task 3 -----------------------------------------------------------------------

    // Create an long variable, and assign it the value of LONG_MAX - 1
    long longMaxMinus = LONG_MAX - 1;
    // Print the value of the variable you just made
    printf("value of long: %ld\n", longMaxMinus);
    // Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", ++longMaxMinus);
    // (2x) Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", ++longMaxMinus);
    // (3x) Increment the value of your long variable, and print it out using the same format as above
    printf("value of long: %ld\n", ++longMaxMinus);

    return 0;
}