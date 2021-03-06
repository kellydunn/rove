/**
 * This file is part of rove.
 * rove is copyright 2007, 2008 william light <visinin@gmail.com>
 *
 * rove is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * rove is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with rove.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ROVE_MONOME_H
#define _ROVE_MONOME_H

#include "rove.h"
#include "file.h"

#define MONOME_POS_CMP(a, b) (memcmp(a, b, sizeof(r_monome_position_t)))
#define MONOME_POS_CPY(a, b) (memcpy(a, b, sizeof(r_monome_position_t)))

void r_monome_run_thread(r_monome_t *monome);
void r_monome_stop_thread(r_monome_t *monome);

void r_monome_display_file(file_t *f);
void r_monome_free(r_monome_t *monome);
int  r_monome_init();

#endif
