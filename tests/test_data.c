#include <stdio.h>
#include "../q4_data_corruption/data.h"

int main() {
    int passed = 0;
    int total = 5;

    // Test positive values
    if (process_data(1) == 2) passed++;
    if (process_data(10) == 20) passed++;

    // Test zero and negative
    if (process_data(0) == 0) passed++;
    if (process_data(-5) == 0) passed++;

    // Test large value (edge case)
    if (process_data(100) == 200) passed++;

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

