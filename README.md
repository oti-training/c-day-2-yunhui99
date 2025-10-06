# Day 2: Debugging C Programs with GDB for Hardware Validation

This repository contains starter templates for Day 2 exercises focused on using GDB to debug C programs in the context of post-silicon validation tasks.

## Structure
- `q1_basic_gdb/`: Basic GDB usage for inspecting variables
- `q2_seg_fault/`: Debugging segmentation faults
- `q3_logic_error/`: Finding logic errors with breakpoints
- `q4_data_corruption/`: Debugging data corruption (uninitialized variables)
- `tests/`: Test executables for automated grading
- `Makefile`: Build all exercises and tests

## Setup
1. Clone this repository
2. Install dependencies: `sudo apt-get install gcc make gdb`
3. Build: `make all`
4. Run individual exercises from their folders

## Exercises
Complete each exercise by using GDB to identify bugs in the provided starter code, then fix the TODOs in the respective `.c` files.

### Q1: Basic GDB Inspection
- File: `q1_basic_gdb/basic.c`
- Objective: Use GDB to inspect variables in a simple validation loop

### Q2: Segfault Debugger
- File: `q2_seg_fault/memory.c`
- Objective: Debug a segmentation fault in voltage memory access

### Q3: Logic Error Hunt
- File: `q3_logic_error/validation.c`
- Objective: Use conditional breakpoints to find incorrect power validation logic

### Q4: Data Corruption Debug
- File: `q4_data_corruption/data.c`
- Objective: Use GDB to fix uninitialized variable causing garbage data in hardware processing

## Building and Testing
```bash
make clean
make all    # Builds exercises and tests with debug symbols (-g)
make test   # Runs tests to verify fixes
```

To debug with GDB:
```bash
gdb ./q1_basic_gdb/basic  # Example for Q1
# Inside GDB: break main, run, next, print variable_name
```

## Grading
This repo is configured for GitHub Classroom autograding. Push your changes to trigger automated tests that verify your fixes.

## Compilation Flags
All programs use C99 standard with strict warnings and debug symbols:
- `-Wall -Wextra -std=c99 -g`

