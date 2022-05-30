#pragma once

#include QMK_KEYBOARD_H

#define	___	KC_NO

#define LAYOUT_3x5(\
	K01, K02, K03, K04, K05, \
	K06, K07, K08, K09, K10, \
	K11, K12, K13, K14, K15  \
) \
{ \
	{ K01, K02, K03, K04, K05 }, \
	{ K06, K07, K08, K09, K10 }, \
	{ K11, K12, K13, K14, K15 }
}

#define LAYOUT LAYOUT_3x5