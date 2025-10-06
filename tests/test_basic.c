#include <stdio.h>
#include "../q1_basic_gdb/basic.h"

int main() {
    int passed = 0;
    int total = 4;

    // Test empty loop (size 0)
    if (validate_loop(0) == 1) passed++;

    // Test mid-range size
    if (validate_loop(5) == 1) passed++;

    // Test near end of array
    if (validate_loop(9) == 1) passed++;

    // Test full array size (should check indices 0-9)
    if (validate_loop(10) == 1) passed++;

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

