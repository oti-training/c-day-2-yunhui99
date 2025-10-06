#include <stdio.h>
#include "../q3_logic_error/validation.h"

int main() {
    int passed = 0;
    int total = 5;

    // Test powers below limit (should return 1)
    if (is_valid_power(4.9f) == 1) passed++;
    if (is_valid_power(0.0f) == 1) passed++;

    // Test exact limit (should return 1 after fix)
    if (is_valid_power(5.0f) == 1) passed++;

    // Test powers above limit (should return 0)
    if (is_valid_power(5.1f) == 0) passed++;
    if (is_valid_power(10.0f) == 0) passed++;

    printf("passed: %d\n", passed);
    printf("total tests: %d\n", total);

    if (passed == total) {
        printf("✓ all tests passed!\n");
        return 0;
    } else {
        printf("✗ Some tests failed!\n");
        return 1;
    }
}

