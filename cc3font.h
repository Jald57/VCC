#ifndef __CC3FONT_H__
#define __CC3FONT_H__
/*
Copyright 2015 by Joseph Forgione
This file is part of VCC (Virtual Color Computer).

    VCC (Virtual Color Computer) is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    VCC (Virtual Color Computer) is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with VCC (Virtual Color Computer).  If not, see <http://www.gnu.org/licenses/>.
*/

static unsigned char cc3Fontdata8x12[] =
{
	/* Fixed chrs 0-31 */
	0x38,0x44,0x40,0x40,0x40,0x44,0x38,0x10,0x08,0x00,0x00,0x00,	// C
	0x44,0x00,0x44,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// u
	0x08,0x10,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x10,0x28,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x28,0x00,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x20,0x10,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x10,0x00,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x00,0x00,0x38,0x44,0x40,0x44,0x38,0x10,0x00,0x00,0x00,0x00,	// c
	0x10,0x28,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x28,0x00,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x20,0x10,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x28,0x00,0x30,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// l
	0x10,0x28,0x00,0x30,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// i
	0x00,0x38,0x44,0x78,0x44,0x44,0x78,0x00,0x00,0x00,0x00,0x00,	// B
	0x24,0x10,0x28,0x44,0x7C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// A
	0x10,0x10,0x28,0x44,0x7C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// A
	0x08,0x10,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x00,0x00,0x68,0x14,0x3C,0x50,0x3C,0x00,0x00,0x00,0x00,0x00,
	0x3C,0x50,0x50,0x7A,0x50,0x50,0x5C,0x00,0x00,0x00,0x00,0x00,
	0x10,0x28,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x28,0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x00,0x00,0x38,0x4C,0x54,0x64,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x10,0x28,0x00,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// u
	0x20,0x10,0x44,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// u
	0x38,0x4C,0x54,0x54,0x54,0x64,0x38,0x00,0x00,0x00,0x00,0x00,	// 0
	0x44,0x38,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x28,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// U
	0x38,0x40,0x38,0x44,0x38,0x04,0x38,0x00,0x00,0x00,0x00,0x00,	// s
	0x08,0x14,0x10,0x38,0x10,0x50,0x3C,0x00,0x00,0x00,0x00,0x00,	// f
	0x10,0x10,0x7C,0x10,0x10,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,	// +
	0x10,0x28,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// '
	0x08,0x14,0x10,0x38,0x10,0x10,0x20,0x40,0x00,0x00,0x00,0x00,	// f

	/* Normal Text chrs 32-127 */
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// space
	0x10,0x10,0x10,0x10,0x10,0x00,0x10,0x00,0x00,0x00,0x00,0x00,	// !
	0x28,0x28,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// "
	0x28,0x28,0x7C,0x28,0x7C,0x28,0x28,0x00,0x00,0x00,0x00,0x00,	// #
	0x10,0x3C,0x50,0x38,0x14,0x78,0x10,0x00,0x00,0x00,0x00,0x00,	// $
	0x60,0x64,0x08,0x10,0x20,0x4C,0x0C,0x00,0x00,0x00,0x00,0x00,	// %
	0x20,0x50,0x50,0x20,0x54,0x48,0x34,0x00,0x00,0x00,0x00,0x00,	// &
	0x10,0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// '
	0x08,0x10,0x20,0x20,0x20,0x10,0x08,0x00,0x00,0x00,0x00,0x00,	// (
	0x20,0x10,0x08,0x08,0x08,0x10,0x20,0x00,0x00,0x00,0x00,0x00,	// )
	0x00,0x10,0x54,0x38,0x38,0x54,0x10,0x00,0x00,0x00,0x00,0x00,	// *
	0x00,0x10,0x10,0x7C,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,	// +
	0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,0x00,0x00,0x00,0x00,	// ,
	0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// -
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,	// .
	0x00,0x04,0x08,0x10,0x20,0x40,0x00,0x00,0x00,0x00,0x00,0x00,	// /
	0x38,0x44,0x4C,0x54,0x64,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// 0
	0x10,0x30,0x10,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// 1
	0x38,0x44,0x04,0x38,0x40,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,	// 2
	0x38,0x44,0x04,0x08,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// 3
	0x08,0x18,0x28,0x48,0x7C,0x08,0x08,0x00,0x00,0x00,0x00,0x00,	// 4
	0x7C,0x40,0x78,0x04,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// 5
	0x38,0x40,0x40,0x78,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// 6
	0x7C,0x04,0x08,0x10,0x20,0x40,0x40,0x00,0x00,0x00,0x00,0x00,	// 7
	0x38,0x44,0x44,0x38,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// 8
	0x38,0x44,0x44,0x38,0x04,0x04,0x38,0x00,0x00,0x00,0x00,0x00,	// 9
	0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,	// :
	0x00,0x00,0x10,0x00,0x00,0x10,0x10,0x20,0x00,0x00,0x00,0x00,	// ;
	0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x00,0x00,0x00,0x00,0x00,	// <
	0x00,0x00,0x7C,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// =
	0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x00,0x00,0x00,0x00,0x00,	// >
	0x38,0x44,0x04,0x08,0x10,0x00,0x10,0x00,0x00,0x00,0x00,0x00,	// ?
	0x38,0x44,0x04,0x34,0x4C,0x4C,0x38,0x00,0x00,0x00,0x00,0x00,	// @
	0x10,0x28,0x44,0x44,0x7C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// A
	0x78,0x24,0x24,0x38,0x24,0x24,0x78,0x00,0x00,0x00,0x00,0x00,	// B
	0x38,0x44,0x40,0x40,0x40,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// C
	0x78,0x24,0x24,0x24,0x24,0x24,0x78,0x00,0x00,0x00,0x00,0x00,	// D
	0x7C,0x40,0x40,0x70,0x40,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,	// E
	0x7C,0x40,0x40,0x70,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,	// F
	0x38,0x44,0x40,0x40,0x4C,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// G
	0x44,0x44,0x44,0x7C,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// H
	0x38,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// I
	0x04,0x04,0x04,0x04,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// J
	0x44,0x48,0x50,0x60,0x50,0x48,0x44,0x00,0x00,0x00,0x00,0x00,	// K
	0x40,0x40,0x40,0x40,0x40,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,	// L
	0x44,0x6C,0x54,0x54,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// M
	0x44,0x44,0x64,0x54,0x4C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// N
	0x38,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// O
	0x78,0x44,0x44,0x78,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,	// P
	0x38,0x44,0x44,0x44,0x54,0x48,0x34,0x00,0x00,0x00,0x00,0x00,	// Q
	0x78,0x44,0x44,0x78,0x50,0x48,0x44,0x00,0x00,0x00,0x00,0x00,	// R
	0x38,0x44,0x40,0x38,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// S
	0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,	// T
	0x44,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// U
	0x44,0x44,0x44,0x28,0x28,0x10,0x10,0x00,0x00,0x00,0x00,0x00,	// V
	0x44,0x44,0x44,0x44,0x54,0x6C,0x44,0x00,0x00,0x00,0x00,0x00,	// W
	0x44,0x44,0x28,0x10,0x28,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// X
	0x44,0x44,0x28,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,	// Y
	0x7C,0x04,0x08,0x10,0x20,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,	// Z
	0x38,0x20,0x20,0x20,0x20,0x20,0x38,0x00,0x00,0x00,0x00,0x00,	// [
	0x00,0x40,0x20,0x10,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,	// \ 
	0x38,0x08,0x08,0x08,0x08,0x08,0x38,0x00,0x00,0x00,0x00,0x00,	// ]
	0x10,0x38,0x54,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,	// Up Arrow
	0x00,0x10,0x20,0x7C,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x00,	// Left Arrow
	0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// ^
	0x00,0x00,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x40,0x40,0x58,0x64,0x44,0x64,0x58,0x00,0x00,0x00,0x00,0x00,	// b
	0x00,0x00,0x38,0x44,0x40,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// c
	0x04,0x04,0x34,0x4C,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// d
	0x00,0x00,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x08,0x14,0x10,0x38,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,	// f
	0x00,0x00,0x34,0x4C,0x4C,0x34,0x04,0x38,0x00,0x00,0x00,0x00,	// g
	0x40,0x40,0x58,0x64,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// h
	0x00,0x10,0x00,0x30,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// i
	0x00,0x04,0x00,0x04,0x04,0x04,0x44,0x38,0x00,0x00,0x00,0x00,	// j
	0x40,0x40,0x48,0x50,0x60,0x50,0x48,0x00,0x00,0x00,0x00,0x00,	// k
	0x30,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// l
	0x00,0x00,0x68,0x54,0x54,0x54,0x54,0x00,0x00,0x00,0x00,0x00,	// m
	0x00,0x00,0x58,0x64,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// n
	0x00,0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x00,0x00,0x78,0x44,0x44,0x78,0x40,0x40,0x00,0x00,0x00,0x00,	// p
	0x00,0x00,0x3C,0x44,0x44,0x3C,0x04,0x04,0x00,0x00,0x00,0x00,	// q
	0x00,0x00,0x58,0x64,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,	// r
	0x00,0x00,0x3C,0x40,0x38,0x04,0x78,0x00,0x00,0x00,0x00,0x00,	// s
	0x20,0x20,0x70,0x20,0x20,0x24,0x18,0x00,0x00,0x00,0x00,0x00,	// t
	0x00,0x00,0x44,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// u
	0x00,0x00,0x44,0x44,0x44,0x28,0x10,0x00,0x00,0x00,0x00,0x00,	// v
	0x00,0x00,0x44,0x54,0x54,0x28,0x28,0x00,0x00,0x00,0x00,0x00,	// w
	0x00,0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,	// x
	0x00,0x00,0x44,0x44,0x44,0x3C,0x04,0x38,0x00,0x00,0x00,0x00,	// y
	0x00,0x00,0x7C,0x08,0x10,0x20,0x7C,0x00,0x00,0x00,0x00,0x00,	// z
	0x08,0x10,0x10,0x20,0x10,0x10,0x08,0x00,0x00,0x00,0x00,0x00,	// {
	0x10,0x10,0x10,0x00,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,	// |
	0x20,0x10,0x10,0x08,0x10,0x10,0x20,0x00,0x00,0x00,0x00,0x00,	// }
	0x20,0x54,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// ~
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,	// _
	/* Junk padding fix me chrs 128-159 */
	0x38,0x44,0x40,0x40,0x40,0x44,0x38,0x10,0x08,0x00,0x00,0x00,	// C
	0x44,0x00,0x44,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// u
	0x08,0x10,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x10,0x28,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x28,0x00,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x20,0x10,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x10,0x00,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,	// a
	0x00,0x00,0x38,0x44,0x40,0x44,0x38,0x10,0x00,0x00,0x00,0x00,	// c
	0x10,0x28,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x28,0x00,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x20,0x10,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,	// e
	0x28,0x00,0x30,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// l
	0x10,0x28,0x00,0x30,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,	// i
	0x00,0x18,0x24,0x38,0x24,0x24,0x38,0x40,0x00,0x00,0x00,0x00,	// B
	0x44,0x10,0x28,0x44,0x7C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// A
	0x10,0x10,0x28,0x44,0x7C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,	// A
	0x08,0x10,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x00,0x00,0x68,0x14,0x3C,0x50,0x3C,0x00,0x00,0x00,0x00,0x00,
	0x3C,0x50,0x50,0x7A,0x50,0x50,0x5C,0x00,0x00,0x00,0x00,0x00,
	0x10,0x28,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x28,0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x00,0x00,0x38,0x4C,0x54,0x64,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x10,0x28,0x00,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// u
	0x20,0x10,0x44,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,	// u
	0x38,0x4C,0x54,0x54,0x54,0x64,0x38,0x00,0x00,0x00,0x00,0x00,	// 0
	0x44,0x38,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// o
	0x28,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,	// U
	0x38,0x40,0x38,0x44,0x38,0x04,0x38,0x00,0x00,0x00,0x00,0x00,	// s
	0x08,0x14,0x10,0x38,0x10,0x50,0x3C,0x00,0x00,0x00,0x00,0x00,	// f
	0x10,0x10,0x7C,0x10,0x10,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,	// +
	0x10,0x28,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,	// '
	0x08,0x14,0x10,0x38,0x10,0x10,0x20,0x40,0x00,0x00,0x00,0x00,	// f


	/* Normal Text chrs 160-255 */
	0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0x10,0x10,0x10,0x10,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
	0x28,0x28,0x28,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x28,0x28,0x7C,0x28,0x7C,0x28,0x28,0x00,0x00,0x00,0x00,0x00,
	0x10,0x3C,0x50,0x38,0x14,0x78,0x10,0x00,0x00,0x00,0x00,0x00,
	0x60,0x64,0x08,0x10,0x20,0x4C,0x0C,0x00,0x00,0x00,0x00,0x00,
	0x20,0x50,0x50,0x20,0x54,0x48,0x34,0x00,0x00,0x00,0x00,0x00,
	0x10,0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x08,0x10,0x20,0x20,0x20,0x10,0x08,0x00,0x00,0x00,0x00,0x00,
	0x20,0x10,0x08,0x08,0x08,0x10,0x20,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x54,0x38,0x38,0x54,0x10,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x10,0x7C,0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x20,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
	0x00,0x04,0x08,0x10,0x20,0x40,0x00,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x4C,0x54,0x64,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x10,0x30,0x10,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x04,0x38,0x40,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x04,0x08,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x08,0x18,0x28,0x48,0x7C,0x08,0x08,0x00,0x00,0x00,0x00,0x00,
	0x7C,0x40,0x78,0x04,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x38,0x40,0x40,0x78,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x7C,0x04,0x08,0x10,0x20,0x40,0x40,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x44,0x38,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x44,0x38,0x04,0x04,0x38,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x10,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x10,0x00,0x00,0x10,0x10,0x20,0x00,0x00,0x00,0x00,
	0x08,0x10,0x20,0x40,0x20,0x10,0x08,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x7C,0x00,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x20,0x10,0x08,0x04,0x08,0x10,0x20,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x04,0x08,0x10,0x00,0x10,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x04,0x34,0x4C,0x4C,0x38,0x00,0x00,0x00,0x00,0x00,
	0x10,0x28,0x44,0x44,0x7C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	0x78,0x24,0x24,0x38,0x24,0x24,0x78,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x40,0x40,0x40,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x78,0x24,0x24,0x24,0x24,0x24,0x78,0x00,0x00,0x00,0x00,0x00,
	0x7C,0x40,0x40,0x70,0x40,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,
	0x7C,0x40,0x40,0x70,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x40,0x40,0x4C,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x44,0x44,0x44,0x7C,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	0x38,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,
	0x04,0x04,0x04,0x04,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x44,0x48,0x50,0x60,0x50,0x48,0x44,0x00,0x00,0x00,0x00,0x00,
	0x40,0x40,0x40,0x40,0x40,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,
	0x44,0x6C,0x54,0x54,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	0x44,0x44,0x64,0x54,0x4C,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x78,0x44,0x44,0x78,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x44,0x44,0x54,0x48,0x34,0x00,0x00,0x00,0x00,0x00,
	0x78,0x44,0x44,0x78,0x50,0x48,0x44,0x00,0x00,0x00,0x00,0x00,
	0x38,0x44,0x40,0x38,0x04,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x7C,0x10,0x10,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x44,0x44,0x44,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x44,0x44,0x44,0x28,0x28,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x44,0x44,0x44,0x44,0x54,0x6C,0x44,0x00,0x00,0x00,0x00,0x00,
	0x44,0x44,0x28,0x10,0x28,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	0x44,0x44,0x28,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x7C,0x04,0x08,0x10,0x20,0x40,0x7C,0x00,0x00,0x00,0x00,0x00,
	0x38,0x20,0x20,0x20,0x20,0x20,0x38,0x00,0x00,0x00,0x00,0x00,
	0x00,0x40,0x20,0x10,0x08,0x04,0x00,0x00,0x00,0x00,0x00,0x00,
	0x38,0x08,0x08,0x08,0x08,0x08,0x38,0x00,0x00,0x00,0x00,0x00,
	0x10,0x38,0x54,0x10,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x20,0x7C,0x20,0x10,0x00,0x00,0x00,0x00,0x00,0x00,
	0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x38,0x04,0x3C,0x44,0x3C,0x00,0x00,0x00,0x00,0x00,
	0x40,0x40,0x58,0x64,0x44,0x64,0x58,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x38,0x44,0x40,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x04,0x04,0x34,0x4C,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x38,0x44,0x7C,0x40,0x38,0x00,0x00,0x00,0x00,0x00,
	0x08,0x14,0x10,0x38,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x34,0x4C,0x4C,0x34,0x04,0x38,0x00,0x00,0x00,0x00,
	0x40,0x40,0x58,0x64,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	0x00,0x10,0x00,0x30,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,
	0x00,0x04,0x00,0x04,0x04,0x04,0x44,0x38,0x00,0x00,0x00,0x00,
	0x40,0x40,0x48,0x50,0x60,0x50,0x48,0x00,0x00,0x00,0x00,0x00,
	0x30,0x10,0x10,0x10,0x10,0x10,0x38,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x68,0x54,0x54,0x54,0x54,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x58,0x64,0x44,0x44,0x44,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x38,0x44,0x44,0x44,0x38,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x78,0x44,0x44,0x78,0x40,0x40,0x00,0x00,0x00,0x00,
	0x00,0x00,0x3C,0x44,0x44,0x3C,0x04,0x04,0x00,0x00,0x00,0x00,
	0x00,0x00,0x58,0x64,0x40,0x40,0x40,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x3C,0x40,0x38,0x04,0x78,0x00,0x00,0x00,0x00,0x00,
	0x20,0x20,0x70,0x20,0x20,0x24,0x18,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x44,0x44,0x44,0x4C,0x34,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x44,0x44,0x44,0x28,0x10,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x44,0x54,0x54,0x28,0x28,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x44,0x28,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x44,0x44,0x44,0x3C,0x04,0x38,0x00,0x00,0x00,0x00,
	0x00,0x00,0x7C,0x08,0x10,0x20,0x7C,0x00,0x00,0x00,0x00,0x00,
	0x08,0x10,0x10,0x20,0x10,0x10,0x08,0x00,0x00,0x00,0x00,0x00,
	0x10,0x10,0x10,0x00,0x10,0x10,0x10,0x00,0x00,0x00,0x00,0x00,
	0x20,0x10,0x10,0x08,0x10,0x10,0x20,0x00,0x00,0x00,0x00,0x00,
	0x20,0x54,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
	0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x00
};

#endif
