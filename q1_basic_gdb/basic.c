/*
 * Day 2 Exercise 1: Basic GDB Debugging - Loop Validation
 *
 * TODO: Debug and fix the validate_loop function using GDB.
 * The function has a bug causing incorrect validation of an array of flags.
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o basic basic.c
 * Debug with: gdb ./basic
 */

#include <stdio.h>
#include "basic.h"

int validate_loop(int size) {
    int flags[10] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};  // All valid flags (1 = pass)
    int all_valid = 1;

    // TODO: Debug this loop - there's an off-by-one error
    for (int i = 0; i < size; i++) {
        if (flags[i] != 1) {
            all_valid = 0;
            break;
        }
    }

    return all_valid;
}

#ifndef UNIT_TEST
int main(void) {
    printf("Basic GDB Debugging Exercise\n");
    printf("Validating loop with size 5...\n");

    int result = validate_loop(5);
    if (result) {
        printf("All flags valid! ✓\n");
    } else {
        printf("Validation failed! ✗\n");
    }

    return 0;
}
#endif

