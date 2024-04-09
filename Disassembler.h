//  Copyright 2015 by Joseph Forgion
//  This file is part of VCC (Virtual Color Computer).
//
//  VCC (Virtual Color Computer) is free software: you can redistribute it and/or
//  modify it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  VCC (Virtual Color Computer) is distributed in the hope that it will be
//  useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License along
//  with VCC. If not, see <http://www.gnu.org/licenses/>.
//
//  Disassembly Display - Part of the Debugger package for VCC
//  Author: Ed Jaquay

#pragma once
#include <Windows.h>

namespace VCC {
namespace Debugger {
namespace UI {

// Apply haltpoints, flag; TRUE:apply, FALSE:unapply
void ApplyHaltpoints(bool flag);

// Return applied status
bool HaltpointsStatus();

void OpenDisassemblerWindow(HINSTANCE instance, HWND parent);

}}}
