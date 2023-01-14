#pragma once
#include "quantum.h"
/*QMK uses KC_NO to designate places in the switch matrix where there is no switch.
Sometimes, XXX, ___ or ____ are used as shorthand */
#define XXX KC_NO

#define LAYOUT( \
    K00, K01, \
    K10, K11, K21 \
    ) \
{ \
    { K00, K01, XXX }, \
    { K10, K11, K21 } \
}
