#pragma once

#include "config_common.h"

#define DEVICE_VER		0x0001
#define VENDOR_ID		  0x4A48 // JH
#define PRODUCT_ID		0x4846 // HF

#define MANUFACTURER	jasonhazel
#define PRODUCT			HazelForm

#define MATRIX_ROWS		3
#define MATRIX_COLS		5

#define MATRIX_ROW_PINS { E6, B4, B5 }
#define MATRIX_COL_PINS { F7, B1, B3, B2, B6 }

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 		5
