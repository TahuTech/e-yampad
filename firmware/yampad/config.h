/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B43 // CK
#define PRODUCT_ID      0x5950 // YP
#define DEVICE_VER      0x0001
#define MANUFACTURER    Mattia Dal Ben
#define PRODUCT         Yampad

/* key matrix */
#define MATRIX_ROWS 6
#define MATRIX_COLS 5

#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5, D4 }
#define MATRIX_COL_PINS { B1, B3, B2, B6, F6 }

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* ENCODER THINGS */
// #define ENCODER_DIRECTION_FLIP
#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { D2 }

/* Underlight configuration */
#define RGB_DI_PIN F4
#define RGBLED_NUM 9
#define RGBLIGHT_ANIMATIONS

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 2

/* define if matrix has ghost (lacks anti-ghosting diodes) */
//#define MATRIX_HAS_GHOST

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

/* Bootmagic Lite key configuration */
// #define BOOTMAGIC_LITE_ROW 0
// #define BOOTMAGIC_LITE_COLUMN 0
