/*!The Tiny Box Library
 * 
 * TBox is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * TBox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with TBox; 
 * If not, see <a href="http://www.gnu.org/licenses/"> http://www.gnu.org/licenses/</a>
 * 
 * Copyright (C) 2009 - 2010, ruki All rights reserved.
 *
 * \author		ruki
 * \file		rlc.h
 *
 */
#ifndef TB_ZIP_RLC_H
#define TB_ZIP_RLC_H

// c plus plus
#ifdef __cplusplus
extern "C" {
#endif

/* /////////////////////////////////////////////////////////
 * includes
 */
#include "prefix.h"

/* /////////////////////////////////////////////////////////
 * macros
 */

// vlc 
#define TB_ZIP_RLC_VLC_TYPE_FIXED 			(0)
#define TB_ZIP_RLC_VLC_TYPE_GAMMA 			(1)
#define TB_ZIP_RLC_VLC_TYPE_GOLOMB 			(0)

/* /////////////////////////////////////////////////////////
 * types
 */

// the rlc zip type
typedef struct __tb_zip_rlc_t
{
	// the zip base
	tb_zip_t 		base;

	// the reference to vlc
	tb_zip_vlc_t* 	vlc;

	// the last byte
	tb_byte_t 		last;

	// the repeat size
	tb_size_t 		repeat;

}tb_zip_rlc_t;

/* /////////////////////////////////////////////////////////
 * interfaces
 */

tb_zip_t* 	tb_zip_rlc_open(tb_zip_rlc_t* rlc, tb_zip_action_t action);

// c plus plus
#ifdef __cplusplus
}
#endif

#endif
