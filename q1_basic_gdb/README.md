# Exercise 1: Basic GDB Debugging - Loop Validation

## Objective
Learn to use GDB to debug a simple loop with an off-by-one error in a hardware validation context. The function checks an array of test flags (1 = pass, 0 = fail) to ensure all hardware tests passed.

## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o basic basic.c`
2. Run GDB: `gdb ./basic`
3. Set a breakpoint: `break validate_loop`
4. Run the program: `run`
5. Step through: `next` or `step`
6. Inspect variables: `print i`, `print flags[i]`, `print size`
7. Identify the bug: The loop goes one index too far, causing a buffer overflow.
8. Fix the condition to `i < size` and recompile.
9. Run tests to verify.

## GDB Commands to Use
- `break <function>`: Set breakpoint
- `run`: Start execution
- `next`: Step over lines
- `step`: Step into functions
- `print <var>`: Print variable value
- `continue`: Continue execution
- `backtrace`: Show call stack
- `quit`: Exit GDB

## Expected Behavior After Fix
- The function should return 1 (valid) for size <= 10.
- Tests will pass without segmentation faults.

