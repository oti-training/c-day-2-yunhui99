# Makefile for Day 2 C Debugging Exercises Starter Template

CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -g
TARGETS = q1_basic_gdb/basic q2_seg_fault/memory q3_logic_error/validation q4_data_corruption/data
TESTS = tests/test_basic tests/test_memory tests/test_validation tests/test_data

all: $(TARGETS) $(TESTS)
	@echo "✓ all day 2 programs compiled successfully!"

q1_basic_gdb/basic: q1_basic_gdb/basic.c
	$(CC) $(CFLAGS) -o $@ $<

q2_seg_fault/memory: q2_seg_fault/memory.c q2_seg_fault/memory.h
	$(CC) $(CFLAGS) -o $@ $<

q3_logic_error/validation: q3_logic_error/validation.c q3_logic_error/validation.h
	$(CC) $(CFLAGS) -o $@ $<

tests/test_basic: tests/test_basic.c q1_basic_gdb/basic.c
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_basic.c q1_basic_gdb/basic.c

tests/test_memory: tests/test_memory.c q2_seg_fault/memory.c q2_seg_fault/memory.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_memory.c q2_seg_fault/memory.c

tests/test_validation: tests/test_validation.c q3_logic_error/validation.c q3_logic_error/validation.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_validation.c q3_logic_error/validation.c

tests/test_data: tests/test_data.c q4_data_corruption/data.c q4_data_corruption/data.h
	$(CC) $(CFLAGS) -DUNIT_TEST -o $@ tests/test_data.c q4_data_corruption/data.c

test: $(TESTS)
	@echo "Running tests..."
	@./tests/test_basic || true
	@./tests/test_memory || true
	@./tests/test_validation || true
	@./tests/test_data || true

clean:
	rm -f $(TARGETS) $(TESTS) *.o *~

.PHONY: all clean test

