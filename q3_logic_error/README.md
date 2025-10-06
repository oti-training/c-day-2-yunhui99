# Exercise 3: Logic Error Debugging - Power Validation

## Objective
Use GDB with conditional breakpoints to debug and fix a logic error in a power validation function for hardware monitoring. The bug causes exactly 5.0W (the limit) to be incorrectly marked as invalid.

## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o validation validation.c`
2. Run GDB: `gdb ./validation`
3. Set a conditional breakpoint: `break is_valid_power if power == 5.0f`
4. Run: `run`
5. When breakpoint hits, inspect: `print power`, `next` to step through the if condition
6. Identify bug: The condition `if (power < 5.0f)` excludes exactly 5.0f; should be `<= 5.0f`
7. Fix the condition to include the equality.
8. Recompile and test: `./validation` should now print "PASS"
9. Run unit tests to verify all cases.

## GDB Commands for Logic Errors
- `break <function> if <condition>`: Conditional breakpoint
- `condition <bp_num> <condition>`: Add condition to existing breakpoint
- `info breakpoints`: List breakpoints
- `print <var>`: Check variable values
- `next` or `ni`: Step over (non-intrusive)
- `step` or `si`: Step into
- `watch <var>`: Break when variable changes
- `delete <bp_num>`: Remove breakpoint

## Expected Behavior After Fix
- Powers < 5.0W and == 5.0W return 1 (valid)
- Powers > 5.0W return 0 (invalid)
- Tests pass for all edge cases: 4.9W, 5.0W, 5.1W

