#ifndef VALIDATION_H
#define VALIDATION_H

/**
 * Validates if the calculated power is within safe limits for hardware.
 * Safe limit: <= 5.0W
 * @param power Power in watts
 * @return 1 if valid (<=5.0W), 0 if invalid (>5.0W)
 */
int is_valid_power(float power);

#endif

