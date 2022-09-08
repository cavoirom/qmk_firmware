/* 
 * Copyright 2022 QMK Community, Cavoi Rom <cavoirom.wanted@yahoo.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

#define VENDOR_ID 0x1515
#define PRODUCT_ID 0x0001
#define DEVICE_VER 0x0101
#define MANUFACTURER ngxv.org
#define PRODUCT Mint Keyboard

#define MATRIX_ROWS 4
#define MATRIX_COLS 12

#define MATRIX_ROW_PINS { B15, B6, B7, A0 }
#define MATRIX_COL_PINS { B5, B4, B3, A15, B14, A7, A6, A5, A4, A3, A2, A1 }

#define DIODE_DIRECTION COL2ROW

/* Used together with sym_defer_g for lower latency */
#define DEBOUNCE 2
#define USB_POLLING_INTERVAL_MS 1

#define ONESHOT_TAP_TOGGLE 2  /* Tapping this number of times holds the key until tapped once again. */
#define ONESHOT_TIMEOUT 0     /* We don't use onshot, only use oneshot tap. */

