/*
 * File: ftk_win32.h
 * Author:  Li XianJing <xianjimli@hotmail.com>
 * Brief:   win32 specific functions.
 *
 * Copyright (c) 2009 - 2010  Li XianJing <xianjimli@hotmail.com>
 *
 * Licensed under the Academic Free License version 2.1
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/*
 * History:
 * ================================================================
 * 2009-11-22 Li XianJing <xianjimli@hotmail.com> created
 *
 */

#ifndef FTK_WIN32_H
#define FTK_WIN32_H

#ifdef WIN32
#include <io.h>
#include <time.h>
#include <stdio.h>
#include <windows.h>
#include <sys/stat.h>
#include <sys/types.h>

#define HAVE_BOOLEAN
#define inline 

char* ftk_get_root_dir(void);
char* ftk_get_data_dir(void);
char* ftk_get_testdata_dir(void);

#define __func__       __FILE__
#define FTK_ROOT_DIR   ftk_get_root_dir()
#define FTK_FONT       "\\unicode.fnt"
#define DATA_DIR       ftk_get_root_dir()
#define LOCAL_DATA_DIR ftk_get_root_dir()
#define FTK_DATA_ROOT  ftk_get_data_dir()
#define TESTDATA_DIR   ftk_get_testdata_dir()

#define _CRT_SECURE_NO_WARNINGS 1

#define usleep                  Sleep

char* ftk_strdup(const char *s);
char* ftk_strncpy(char *dest, const char *src, size_t n);
int   ftk_snprintf(char *str, size_t size, const char *format, ...);
int   ftk_vsnprintf(char *str, size_t size, const char *format, va_list ap);

size_t ftk_get_relative_time(void);
int   win32_socketpair(SOCKET socks[2]);

#endif

#endif/*FTK_WIN32_H*/
