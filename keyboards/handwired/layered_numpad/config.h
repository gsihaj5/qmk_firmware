/*
Copyright 2012 Gerry Sihaj
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

/* USB Device descriptor parameter */
#define VENDOR_ID 0x6F77
#define PRODUCT_ID 0x0002
#define DEVICE_VER 0x0002
#define MANUFACTURER HandwiredLayeredNumpad
#define PRODUCT HandwiredLayeredNumpad

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 4

//pins
#define MATRIX_ROW_PINS \
    { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS \
       { B6, B2, B3, B1 }
//flip { B1, B3, B2, B6 }

#define DIODE_DIRECTION ROW2COL

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
// #define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
