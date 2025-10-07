/*
 * Day 2 Exercise 3: Logic Error Debugging - Power Validation
 *
 * TODO: Use GDB with conditional breakpoints to identify and fix a logic error
 * in the power validation function. The function incorrectly rejects exactly 5.0W
 * as invalid, even though it should be accepted as the limit.
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o validation validation.c
 * Debug with: gdb ./validation
 */

#include <stdio.h>
#include "validation.h"

int is_valid_power(float power) {
    // TODO: Debug this - check the condition for exact limit (5.0f)
    if (power <= 5.0f) {
        return 1;  // Valid
    } else {
        return 0;  // Invalid
    }
}

#ifndef UNIT_TEST
int main(void) {
    float test_power = 5.0f;  // This should be valid, but currently fails

    printf("Logic Error Debugging Exercise\n");
    printf("Validating power: %.1fW (limit is 5.0W)\n", test_power);

    int result = is_valid_power(test_power);
    if (result) {
        printf("Power validation: PASS ✓\n");
    } else {
        printf("Power validation: FAIL ✗ (incorrect for boundary case)\n");
    }

    return 0;
}
#endif

