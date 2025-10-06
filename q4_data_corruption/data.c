/*
 * Day 2 Exercise 4: Debugging Data Corruption - Uninitialized Variable
 *
 * TODO: Use GDB to debug and fix data corruption due to an uninitialized variable.
 * The function returns garbage values sometimes because 'result' is not initialized.
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o data data.c
 * Debug with: gdb ./data
 */
#include <stdio.h>
#include "data.h"

int process_data(int value) {
    int result; // TODO: Initialize the variable to prevent garbage values
    if (value > 0) {
        result = value * 2;
    }
    return result;
}

#ifndef UNIT_TEST
int main(void) {
    printf("Data Corruption Debugging Exercise\n");
    printf("Processing data with value 5...\n");
    int processed = process_data(5);
    printf("Processed: %d (expected even number)\n", processed);
    printf("Processing data with value -1...\n");
    processed = process_data(-1);
    if (processed == 0) {
        printf("Data processing: PASS ✓\n");
    } else {
        printf("Data processing: FAIL ✗ (corrupted output)\n");
    }
    return 0;
}
#endif

