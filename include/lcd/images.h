//
// images.h
//
// mt32-pi - A baremetal MIDI synthesizer for Raspberry Pi
// Copyright (C) 2020-2021 Dale Whinham <daleyo@gmail.com>
//
// This file is part of mt32-pi.
//
// mt32-pi is free software: you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the Free Software
// Foundation, either version 3 of the License, or (at your option) any later
// version.
//
// mt32-pi is distributed in the hope that it will be useful, but WITHOUT ANY
// WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// mt32-pi. If not, see <http://www.gnu.org/licenses/>.
//

#ifndef _images_h
#define _images_h

#include <circle/types.h>

enum class TImage
{
	None,
	MisterLogo,
};

constexpr u8 MisterLogo128x32[] =
{
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000011, 0b10000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11100000, 0b00000011, 0b11111100, 0b00001111, 0b11100000, 0b00111111, 0b11110000, 0b11111111, 0b11111111, 0b11100000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11111000, 0b00000011, 0b11111111, 0b00011111, 0b11110000, 0b11111111, 0b11111110, 0b11111111, 0b11111111, 0b11111000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11111000, 0b00000111, 0b11111111, 0b10011111, 0b11110001, 0b11111111, 0b11111110, 0b11111111, 0b11111111, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11111100, 0b00000111, 0b11111111, 0b10011111, 0b11110011, 0b11111111, 0b11111100, 0b11111111, 0b11111111, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00111111, 0b11111100, 0b00000111, 0b11111111, 0b10011111, 0b11100111, 0b11111111, 0b11111101, 0b11111111, 0b11111111, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b11111100, 0b00001111, 0b11111111, 0b10001111, 0b11001111, 0b11111111, 0b11111001, 0b11111111, 0b11111111, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b11111100, 0b00001111, 0b11111111, 0b10000011, 0b00001111, 0b11111000, 0b00000001, 0b11111111, 0b11111111, 0b11111100, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b01111111, 0b11111100, 0b00011111, 0b11111111, 0b10000000, 0b00001111, 0b11110000, 0b00000000, 0b00000011, 0b11111100, 0b00000000, 0b01110000, 0b00000000, 0b00000000, 0b11000000,
	0b00000000, 0b01111111, 0b11111100, 0b00011111, 0b11111111, 0b10111110, 0b00001111, 0b11110000, 0b00000000, 0b00000011, 0b11111100, 0b00000111, 0b11111110, 0b00001111, 0b11110011, 0b11000000,
	0b00000000, 0b01111110, 0b11111100, 0b00111111, 0b01111111, 0b10111111, 0b10001111, 0b11111000, 0b00000000, 0b00000011, 0b11111100, 0b00011111, 0b11111111, 0b10001111, 0b11110111, 0b11000000,
	0b00000000, 0b11111110, 0b11111100, 0b00111111, 0b01111111, 0b00111111, 0b10001111, 0b11111110, 0b00000000, 0b00000111, 0b11111000, 0b00111111, 0b11111111, 0b10001111, 0b11111111, 0b11000000,
	0b00000000, 0b11111110, 0b11111100, 0b01111110, 0b11111111, 0b00111111, 0b10001111, 0b11111111, 0b10000000, 0b00000111, 0b11111000, 0b01111111, 0b11111111, 0b11001111, 0b11111111, 0b11000000,
	0b00000000, 0b11111110, 0b11111100, 0b01111110, 0b11111111, 0b00111111, 0b10000111, 0b11111111, 0b11000000, 0b00000111, 0b11111000, 0b11111111, 0b00011111, 0b11011111, 0b11111111, 0b10000000,
	0b00000000, 0b11111110, 0b11111100, 0b01111100, 0b11111111, 0b01111111, 0b10000111, 0b11111111, 0b11100000, 0b00000111, 0b11111000, 0b11111110, 0b00011111, 0b11011111, 0b11111111, 0b10000000,
	0b00000001, 0b11111110, 0b11111100, 0b11111100, 0b11111111, 0b01111111, 0b10000011, 0b11111111, 0b11110000, 0b00000111, 0b11111001, 0b11111100, 0b00111111, 0b11011111, 0b11111000, 0b00000000,
	0b00000001, 0b11111100, 0b11111110, 0b11111001, 0b11111110, 0b01111111, 0b10000000, 0b11111111, 0b11110000, 0b00001111, 0b11110001, 0b11111111, 0b11111111, 0b10011111, 0b11100000, 0b00000000,
	0b00000001, 0b11111100, 0b11111111, 0b11111001, 0b11111110, 0b01111111, 0b10000000, 0b00111111, 0b11111000, 0b00001111, 0b11110001, 0b11111111, 0b11111111, 0b10011111, 0b11100000, 0b00000000,
	0b00000001, 0b11111100, 0b11111111, 0b11111001, 0b11111110, 0b11111111, 0b00000000, 0b00001111, 0b11111000, 0b00001111, 0b11110011, 0b11111111, 0b11111111, 0b00111111, 0b11000000, 0b00000000,
	0b00000001, 0b11111100, 0b11111111, 0b11110001, 0b11111110, 0b11111111, 0b00000000, 0b00001111, 0b11111000, 0b00001111, 0b11110011, 0b11111111, 0b11111100, 0b00111111, 0b11000000, 0b00000000,
	0b00000011, 0b11111100, 0b01111111, 0b11110001, 0b11111100, 0b11111111, 0b00110000, 0b00000111, 0b11111000, 0b00001111, 0b11110011, 0b11111111, 0b10000000, 0b00111111, 0b11000000, 0b00000000,
	0b00000011, 0b11111000, 0b01111111, 0b11100011, 0b11111100, 0b11111111, 0b00111100, 0b00001111, 0b11111000, 0b00011111, 0b11100011, 0b11111100, 0b00000000, 0b00111111, 0b11000000, 0b00000000,
	0b00000011, 0b11111000, 0b01111111, 0b11100011, 0b11111100, 0b11111110, 0b00111111, 0b11111111, 0b11110000, 0b00011111, 0b11100011, 0b11111110, 0b00000110, 0b00111111, 0b10000000, 0b00000000,
	0b00000011, 0b11111000, 0b01111111, 0b11000011, 0b11111100, 0b11111110, 0b00111111, 0b11111111, 0b11110000, 0b00011111, 0b11100001, 0b11111111, 0b11111110, 0b01111111, 0b10000000, 0b00000000,
	0b00000011, 0b11111000, 0b01111111, 0b11000011, 0b11111100, 0b11111110, 0b00111111, 0b11111111, 0b11100000, 0b00011111, 0b11100001, 0b11111111, 0b11111110, 0b01111111, 0b10000000, 0b00000000,
	0b00000011, 0b11110000, 0b01111111, 0b10000011, 0b11111000, 0b11111110, 0b01111111, 0b11111111, 0b11000000, 0b00011111, 0b11100000, 0b11111111, 0b11111110, 0b00111111, 0b10000000, 0b00000000,
	0b00000001, 0b11110000, 0b01111111, 0b10000001, 0b11111000, 0b01111110, 0b00111111, 0b11111111, 0b10000000, 0b00001111, 0b11000000, 0b01111111, 0b11111100, 0b00011111, 0b10000000, 0b00000000,
	0b00000000, 0b11110000, 0b01111111, 0b00000000, 0b01111000, 0b00111100, 0b00001111, 0b11111110, 0b00000000, 0b00000011, 0b11000000, 0b00011111, 0b11110000, 0b00001111, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
	0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000, 0b00000000,
};

#endif
