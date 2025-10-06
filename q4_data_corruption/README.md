# Exercise 4: Debugging Data Corruption - Uninitialized Variable
## Objective
Use GDB to identify and fix data corruption caused by an uninitialized variable in a hardware data processing function.
## Instructions
1. Compile with debug symbols: `gcc -Wall -Wextra -std=c99 -g -o data data.c`
2. Run GDB: `gdb ./data`
3. Set a breakpoint: `break process_data`
4. Run: `run`
5. Step through: `next`, inspect `print result` (it may show garbage).
6. Identify bug: `result` is not initialized before use.
7. Fix by initializing `int result = 0;`
8. Recompile and test: `./data` should print "PASS"
9. Run unit tests to verify.
## GDB Commands for Data Issues
- `break <function>`: Set breakpoint
- `run`: Start execution
- `print <var>`: Inspect variable (look for unexpected values)
- `watch <var>`: Break on variable change
- `next`/`step`: Step through code
## Expected Behavior After Fix
- Positive values return doubled value.
- Non-positive values return 0.
- No garbage outputs; tests pass for various inputs.

