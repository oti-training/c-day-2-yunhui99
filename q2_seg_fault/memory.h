#ifndef MEMORY_H
#define MEMORY_H

/**
 * Reads voltage from a specific sensor (0-4).
 * @param sensor_id ID of the sensor (0-4)
 * @return Voltage reading if valid ID, -1.0 if invalid
 */
float read_voltage_sensor(int sensor_id);

#endif

