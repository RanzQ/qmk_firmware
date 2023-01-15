/* Copyright 2021 Carlos Martins
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

#include "quantum.h"

#ifdef RGB_MATRIX_ENABLE

led_config_t g_led_config = {
    {
        // Left
        { 4,  5, 14, 15, 24, 25 },
        { 3,  6, 13, 16, 23, 26 },
        { 2,  7, 12, 17, 22, 27 },
        { 1,  8, 11, 18, 21, 28 },
        { 0,  9, 10, 19, 20, NO_LED },

        // Right
        { 33, 34, 43, 44, 53, 54 },
        { 32, 35, 42, 45, 52, 55 },
        { 31, 36, 41, 46, 51, 56 },
        { 30, 37, 40, 47, 50, 57 },
        { 29, 38, 39, 48, 49, NO_LED }
    },
    {
        // Left
        // {0,0}, {17,0}, {34,0}, {52,0}, {69,0}, {86,0},
        // {0,16},{17,16},{34,16},{52,16},{69,16},{86,16},
        // {0,32},{17,32},{34,32},{52,32},{69,32},{86,32},
        // {0,48},{17,48},{34,48},{52,48},{69,48},{86,48},
        //                {34,64},{52,64},{69,64},{86,64},{103,64},

        {34,64},{0,48},{0,32},{0,16},{0,0},
        {17,0},{17,16},{17,32},{17,48},{52,64},
        {69,64},{34,48},{34,32},{34,16},{34,0},
        {52,0},{52,16},{52,32},{52,48},{86,64},
        {103,64},{69,48},{69,32},{69,16},{69,0},
        {86,0},{86,16},{86,32},{86,48},

        // Right
        //          {138,0}, {155,0}, {172,0}, {190,0}, {207,0}, {224,0},
        //          {138,16},{155,16},{172,16},{190,16},{207,16},{224,16},
        //          {138,32},{155,32},{172,32},{190,32},{207,32},{224,32},
        //          {138,48},{155,48},{172,48},{190,48},{207,48},{224,48},
        // {121,64},{138,64},{155,64},{172,64},{190,64},
        {190,64},{224,48},{224,32},{224,16},{224,0},
        {207,0},{207,16},{207,32},{207,48},{172,64},
        {155,64},{190,48},{190,32},{190,16},{190,0},
        {172,0},{172,16},{172,32},{172,48},{138,64},
        {121,64},{155,48},{155,32},{155,16},{155,0},
        {138,0},{138,16},{138,32},{138,48}


    },
    {
        // Left
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4,

        // Right
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4, 4,
        4, 4, 4, 4, 4,
    }
};
#endif
