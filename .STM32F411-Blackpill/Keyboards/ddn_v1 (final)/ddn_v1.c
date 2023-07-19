#include "ddn_v1.h"

bool dip_switch_update_kb(uint8_t index, bool active) {
    if (!dip_switch_update_user(index, active)) { return false; }
    return true;
};
