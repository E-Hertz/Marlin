/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * http://marlinfw.org/tools/u8glib/converter.html
 */
/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'Untitled.bmp'
 */
#pragma once


//
// Status Screen Logo bitmap
//
//#define STATUS_SCREEN_X       80
#define STATUS_LOGO_Y           7
#define STATUS_LOGO_WIDTH       48

const unsigned char status_logo_bmp[] PROGMEM = {
  B00111001,B11000000,B00000000,B00000110,B00110000,B00000000, // ..###..###...................##...##............
  B11111111,B11100000,B00000000,B00000110,B00110000,B00000000, // ###########..................##...##............
  B11101111,B01100000,B00000000,B00000110,B00000000,B00000000, // ###.####.##..................##.................
  B11000110,B00110001,B11100001,B11000110,B00110000,B11000000, // ##...##...##...####....###...##...##....##......
  B11000110,B00110011,B11110011,B11100110,B00110011,B11100000, // ##...##...##..######..#####..##...##..#####.....
  B11000110,B00110111,B00111011,B01110110,B00110011,B11110000, // ##...##...##.###..###.##.###.##...##..######....
  B11000110,B00110110,B00011011,B00110110,B00110011,B00110000, // ##...##...##.##....##.##..##.##...##..##..##....
  B11000110,B00110100,B00011011,B00000110,B00110011,B00110000, // ##...##...##.#.....##.##.....##...##..##..##....
  B11000110,B00110110,B00011011,B00000110,B00110011,B00110000, // ##...##...##.##....##.##.....##...##..##..##....
  B11000110,B00110111,B00011011,B00000111,B00111011,B00110000, // ##...##...##.###...##.##.....###..###.##..##....
  B11000110,B00110011,B11011011,B00000011,B10011011,B00110000, // ##...##...##..####.##.##......###..##.##..##....
  B11000110,B00110001,B11011111,B00000001,B11001111,B00110000, // ##...##...##...###.#####.......###..####..##....
  B00000000,B00000000,B00000000,B00000000,B00000000,B00000000, // ................................................
  B01100000,B10000000,B00000000,B00000000,B00000000,B00000000, // .##.....#.......................................
  B10010001,B01000000,B00000000,B00000000,B00000000,B00000000, // #..#...#.#......................................
  B00010001,B01000000,B00000000,B00000000,B00000000,B00000000, // ...#...#.#......................................
  B00100001,B01000000,B00000000,B00000000,B00000000,B00000000, // ..#....#.#......................................
  B01000001,B01000000,B00000000,B00000000,B00000000,B00000000, // .#.....#.#......................................
  B11110100,B10010000,B00000000,B00000000,B00000000,B00000000  // ####.#..#.......................................
};
//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_X      48
#define STATUS_BED_X          74
