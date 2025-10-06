# Exercise 2: Debugging Segmentation Fault - Voltage Sensor Access

## Objective
Debug a segmentation fault in a program that reads voltage from hardware sensors (IDs 0-4). Use GDB to identify the invalid memory access and fix it by adding bounds checking.

## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o memory memory.c`
2. Run normally: `./memory` (should segfault)
3. Debug with GDB: `gdb ./memory`
4. Set breakpoint: `break read_voltage_sensor`
5. Run: `run`
6. When it crashes, use `backtrace` to see the call stack.
7. Use `print sensor_id` to inspect the value.
8. Identify that sensor_id=5 is out of bounds for array[5].
9. Fix by adding if (sensor_id < 0 || sensor_id >= 5) return -1.0f;
10. Recompile and test: `./memory` should print -1.0V without crashing.
11. Run autograding tests.

## GDB Commands for Segfaults
- `run`: Execute until crash
- `backtrace` (or `bt`): Show where it crashed
- `print <var>`: Inspect variables at crash point
- `info registers`: Check CPU state
- `disassemble`: View assembly if needed
- `continue`: Resume if not crashed

## Expected Behavior After Fix
- Invalid sensor IDs return -1.0f without crashing.
- Valid IDs (0-4) return correct voltages.
- Tests pass, confirming no segfaults and correct returns.

