#include <stdio.h>
#include "../q2_seg_fault/memory.h"

int main() {
    int passed = 0;
    int total = 6;

    // Test valid sensors (0-4) - should return correct voltages
    if (read_voltage_sensor(0) == 1.8f) passed++;
    if (read_voltage_sensor(1) == 2.0f) passed++;
    if (read_voltage_sensor(2) == 2.5f) passed++;
    if (read_voltage_sensor(3) == 3.0f) passed++;
    if (read_voltage_sensor(4) == 3.3f) passed++;

    // Test invalid sensors - should return -1.0f without crashing
    if (read_voltage_sensor(5) == -1.0f) passed++;

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

