#include "esp_timer.h"
#include "string.h"
#include "stdio.h"
#include "esp_task_wdt.h"

// Include firmware files
#include "firmware/global_variables.cpp"
#include "firmware/calc/calc_spark_timing.cpp"
#include "firmware/calc/calc_injector_timing.cpp"

// Hard-Coded Variables
bool debug = true;


void thread_0() {
    // - Controls all INPUT for the Theta ECU
    // - Calculates the ignition/injector timing
}


void thread_1() {
    // - Controls all OUTPUT for the Theta ECU
    // - Triggers the spark plugs/injectors depending
    //   on if the current time is within their trigger ranges

    u_int64_t epoch = esp_timer_get_time();

    if (s0_lower < epoch && epoch < s0_upper) {
        // SPARK_PLUG_HIGH
    }
    else {
        // SPARK_PLUG_LOW
    }

    if (s1_lower < epoch && epoch < s1_upper) {
        // SPARK_PLUG_HIGH
    }
    else {
        // SPARK_PLUG_LOW
    }

    if (s2_lower < epoch && epoch < s2_upper) {
        // SPARK_PLUG_HIGH
    }
    else {
        // SPARK_PLUG_LOW
    }

    if (s3_lower < epoch && epoch < s3_upper) {
        // SPARK_PLUG_HIGH
    }
    else {
        // SPARK_PLUG_LOW
    }
    if (i0_lower < epoch && epoch < i0_upper) {
        // INJECTOR_HIGH
    }
    else {
        // INJECTOR_HIGH
    }

    if (i1_lower < epoch && epoch < i1_upper) {
        // INJECTOR_HIGH
    }
    else {
        // INJECTOR_HIGH
    }

    if (i2_lower < epoch && epoch < i2_upper) {
        // INJECTOR_HIGH
    }
    else {
        // INJECTOR_HIGH
    }

    if (i3_lower < epoch && epoch < i3_upper) {
        // INJECTOR_HIGH
    }
    else {
        // INJECTOR_HIGH
    }
    // thread_0_loop_us = esp_timer_get_time() - epoch;
    thread_1_loop_us = (esp_timer_get_time() - epoch) + 1;

    if (debug) {
        if ((last_serial_output + serial_output_delay) < epoch) {
            printf("[DEBUG] (TIMING) Thread 0: Loop us => %llu Loops/s => %llu | Thread 1: Loop us => %llu Loops/s => %llu\r",
                   thread_0_loop_us, (1000000 / thread_0_loop_us), thread_1_loop_us, (1000000 / thread_1_loop_us));

            last_serial_output = epoch;

        }
    }
}

void app_main() {
    esp_task_wdt_init(2419200, false);

    // Initialize the timer service
    esp_timer_init();
    if (debug) { printf("[DEBUG] Initiated esp_timer\n"); }

    // Get the current time in microseconds
    uint64_t time_us = esp_timer_get_time();

    if (debug) { printf("[DEBUG] Boot Time: %lld\n", time_us); }

    while (true) {
        thread_0();
        thread_1();
    }
}