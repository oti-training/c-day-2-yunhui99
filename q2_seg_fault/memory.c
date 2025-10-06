/*
 * Day 2 Exercise 2: Debugging Segmentation Fault - Voltage Sensor Access
 *
 * TODO: Use GDB to debug and fix a segmentation fault in sensor voltage reading.
 * The program crashes when accessing sensor data due to invalid array indexing.
 *
 * Compile with: gcc -Wall -Wextra -std=c99 -g -o memory memory.c
 * Debug with: gdb ./memory
 * Run: ./memory (will segfault)
 */

#include <stdio.h>
#include "memory.h"

float read_voltage_sensor(int sensor_id) {
    float voltages[5] = {1.8f, 2.0f, 2.5f, 3.0f, 3.3f};  // Valid sensors 0-4

    // TODO: Debug this - add bounds check for sensor_id (0-4 valid)
    return voltages[sensor_id];
}

#ifndef UNIT_TEST
int main(void) {
    printf("Voltage Sensor Debugger\n");
    printf("Reading from sensor 5...\n");  // Invalid ID, will cause segfault

    float voltage = read_voltage_sensor(5);  // This causes segfault
    printf("Voltage: %.1fV\n", voltage);

    return 0;
}
#endif

