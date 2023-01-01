#include "stdio.h"

/// SYSTEM
// SERIAL
u_int64_t last_serial_output = 1;
u_int64_t serial_output_delay = 5000;

// DEBUG METRICS
u_int64_t thread_0_loop_us = 1;
u_int64_t thread_1_loop_us = 1;

/// TRIGGER RANGES

// Spark-Plug Upper
u_int64_t s0_upper = 1;
u_int64_t s1_upper = 1;
u_int64_t s2_upper = 1;
u_int64_t s3_upper = 1;

// Spark-Plug Lower
u_int64_t s0_lower = 1;
u_int64_t s1_lower = 1;
u_int64_t s2_lower = 1;
u_int64_t s3_lower = 1;

// Injector Upper
u_int64_t i0_upper = 1;
u_int64_t i1_upper = 1;
u_int64_t i2_upper = 1;
u_int64_t i3_upper = 1;

// Injector Lower
u_int64_t i0_lower = 1;
u_int64_t i1_lower = 1;
u_int64_t i2_lower = 1;
u_int64_t i3_lower = 1;


/// PERIPHERAL SETTINGS

// SPARK PLUGS
// 0
bool s0_enabled = 1;
int s0_cycle_offset = 0;
int s0_dwell_us = 30000;

// 1
bool s1_enabled = 1;
int s1_cycle_offset = 0;
int s1_dwell_us = 30000;

// 2
bool s2_enabled = 1;
int s2_cycle_offset = 0;
int s2_dwell_us = 30000;

// 3
bool s3_enabled = 1;
int s3_cycle_offset = 0;
int s3_dwell_us = 30000;

// INJECTORS
// 0
bool i0_enabled = 1;
int i0_cycle_offset = 0;
int i0_dwell_us = 30000;

// 1
bool i1_enabled = 1;
int i1_cycle_offset = 0;
int i1_dwell_us = 30000;

// 2
bool i2_enabled = 1;
int i2_cycle_offset = 0;
int i2_dwell_us = 30000;

// 3
bool i3_enabled = 1;
int i3_cycle_offset = 0;
int i3_dwell_us = 30000;



