#include "quantum.h"



// readability
#define ___ KC_NO

#define LAYOUT_split_3x5_3( \
        L01, L02, L03, L04, L05,    R01, R02, R03, R04, R05, \
        L06, L07, L08, L09, L10,    R06, R07, R08, R09, R10, \
        L11, L12, L13, L14, L15,    R11, R12, R13, R14, R15, \
                  L16, L17, L18,    R16, R17, R18       \
    ) \
    { \
        { L01, L02, L03, L04, L05 }, \
        { L06, L07, L08, L09, L10 }, \
        { L11, L12, L13, L14, L15 }, \
        { ___, ___, L16, L17, L18 }, \
        { R01, R02, R03, R04, R05 }, \
        { R06, R07, R08, R09, R10 }, \
        { R11, R12, R13, R14, R15 }, \
        { R16, R17, R18, ___, ___ }  \
    }

#define LAYOUT LAYOUT_split_3x5_3