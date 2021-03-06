/*
 * Copyright (c) 2013-2016, Freescale Semiconductor, Inc.
 * Copyright 2016-2019 NXP
 * All rights reserved.
 *
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */
#ifndef __BOOTLOADER_COMMON_H__
#define __BOOTLOADER_COMMON_H__

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "target_config.h"

////////////////////////////////////////////////////////////////////////////////
// Definitions
////////////////////////////////////////////////////////////////////////////////

#ifndef NULL
#define NULL 0
#endif

#ifndef ALIGN_DOWN
#define ALIGN_DOWN(x, a) ((x) & -(a))
#endif
#ifndef ALIGN_UP
#define ALIGN_UP(x, a) (-(-(x) & -(a)))
#endif

//! @brief Bootloader status group numbers.
//!
//! @ingroup bl_core
enum _bl_status_groups
{
    kStatusGroup_FLEXSPINOR = 201,      //!< FlexSPINOR status group number.
};

////////////////////////////////////////////////////////////////////////////////
// Prototypes
////////////////////////////////////////////////////////////////////////////////


#endif // __BOOTLOADER_COMMON_H__
////////////////////////////////////////////////////////////////////////////////
// EOF
////////////////////////////////////////////////////////////////////////////////
