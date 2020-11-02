/*
 * include/configs/bananapi_m5.h
 *
 * (C) Copyright 2018 Hardkernel Co., Ltd
 *
 * SPDX-License-Identifier:     GPL-2.0+
 */

#ifndef __BANANAPI_M5_H__
#define __BANANAPI_M5_H__

#define CONFIG_DEVICE_PRODUCT		"bananapi_m5"
#define BANANAPI_BOARD_UUID		"9098004a-a1dd-11e8-98d0-529269fb1459"

/* configs for CEC */
#define CONFIG_CEC_OSD_NAME		"BANANAPI-M5"
#define CONFIG_CEC_WAKEUP

#include "bananapi-g12-common.h"

#if defined(CONFIG_CMD_USB)
	/* USB OTG Power Enable */
	#define CONFIG_USB_GPIO_PWR		-1
	#define CONFIG_USB_GPIO_PWR_NAME	""
#endif

#endif
