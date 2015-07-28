//    Milton Paint
//    Copyright (C) 2015  Sergio Gonzalez
//
//    This program is free software; you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation; either version 2 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License along
//    with this program; if not, write to the Free Software Foundation, Inc.,
//    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#ifdef _WIN32
#pragma warning(push, 0)

#ifdef _MSC_VER

#if 1
#define inline __forceinline
#else
#define inline static         // Mostly for ease of profiling
#endif
#endif // _MSC_VER

#endif  // _WIN32

#ifdef _WIN32
#include <windows.h>
#include <windowsx.h>
#endif

// Platform independent includes:
#include <assert.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

// Local includes
#ifdef MILTON_DESKTOP

#include <xmmintrin.h>
#include <emmintrin.h>

#ifdef _WIN32
// Only include GLEW in Desktop build
#define GLEW_STATIC
#include <GL/glew.h>
#include <GL/wglew.h>

#elif defined(__linux__)

#define GL_GLEXT_PROTOTYPES
#include <GL/gl.h>
#include <GL/glext.h>

// __linux__
#endif // defined(platform)

#endif // MILTON_DESKTOP

#ifdef _WIN32
#pragma warning(pop)
#endif

