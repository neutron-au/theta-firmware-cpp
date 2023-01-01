#include "stdio.h"
#include "esp_timer.h"

int64_t calc_injector_timing(int epoch, int crank_deg_us, int active_degree, int dwell_us, int cycle_offset) {
    // Calculating the lower boundary for the trigger range of a spark plug.

    int lower_range = epoch + ((360 + active_degree - cycle_offset) * crank_deg_us) - dwell_us;

    return lower_range;
}