#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define DEVICE_VER		0x0001
#define VENDOR_ID		  0x4A48 // JH
#define PRODUCT_ID		0x6464 // dd

#define MANUFACTURER    Hazel
#define PRODUCT         dillydeck

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

/* key matrix pins */
#define MATRIX_ROW_PINS { D7, E6, B4, B1, B3, B2 }
#define MATRIX_COL_PINS { D2, D4, C6, F6, F5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5