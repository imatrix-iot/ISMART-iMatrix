/*
* Copyright 2017, Sierra Telecom. All Rights Reserved.
*
* This software, associated documentation and materials ("Software"),
* is owned by Sierra Telecom ("Sierra") and is protected by and subject to
* worldwide patent protection (United States and foreign),
* United States copyright laws and international treaty provisions.
* Therefore, you may use this Software only as provided in the license
* agreement accompanying the software package from which you
* obtained this Software ("EULA").
* If no EULA applies, Sierra hereby grants you a personal, non-exclusive,
* non-transferable license to copy, modify, and compile the Software
* source code solely for use in connection with Sierra's
* integrated circuit products. Any reproduction, modification, translation,
* compilation, or representation of this Software except as specified
* above is prohibited without the express written permission of Sierra.
*
* Disclaimer: THIS SOFTWARE IS PROVIDED AS-IS, WITH NO WARRANTY OF ANY KIND,
* EXPRESS OR IMPLIED, INCLUDING, BUT NOT LIMITED TO, NONINFRINGEMENT, IMPLIED
* WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE. Sierra
* reserves the right to make changes to the Software without notice. Sierra
* does not assume any liability arising out of the application or use of the
* Software or any product or circuit described in the Software. Sierra does
* not authorize its products for use in any products where a malfunction or
* failure of the Sierra product may reasonably be expected to result in
* significant property damage, injury or death ("High Risk Product"). By
* including Sierra's product in a High-Risk Product, the manufacturer
* of such system or application assumes all risk of such use and in doing
* so, agrees to indemnity Sierra against all liability.
*/

/** @file hal_functions.c
*
*  Created on: Oct 07, 2017
*  Author: Auto Generated Code Do NOT Modify
*
* - List of all Controls and Sensors included
*/

#include <stdint.h>
#include <stdbool.h>
#include <math.h>

#include "wiced.h"
#include "imatrix.h"

#include "product.h"
#include "hal_functions.h"
/******************************************************
*                      Macros
******************************************************/
#ifdef PRINT_DEBUGS_FOR_HAL
#undef PRINTF
#define PRINTF(...) if( ( dcb.log_messages & DEBUGS_FOR_HAL ) != 0x00 ) st_log_printf(__VA_ARGS__)
#elif !defined PRINTF
#define PRINTF(...)
#endif
/******************************************************
*                    Constants
******************************************************/
#define FLASH_SIZE            2097152
#define LAST_DEVICE_ADDRESS   (0x1FFFFF)

/******************************************************
*                   Enumerations
******************************************************/

/******************************************************
*                 Type Definitions
******************************************************/

/******************************************************
*                    Structures
******************************************************/

/******************************************************
*               Function Declarations
******************************************************/

/******************************************************
*               Variable Definitions
******************************************************/

/******************************************************
*               Function Definitions
******************************************************/
inline uint16_t imx_get_no_controls(void)
{
    return IMX_NO_CONTROLS;
}
inline uint16_t imx_get_no_sensors(void)
{
    return IMX_NO_SENSORS;
}
inline uint32_t imx_get_product_id(void)
{
    return IMX_PRODUCT_ID;
}
inline uint32_t imx_get_manufacturer_id(void)
{
    return IMX_MANUFACTUER_ID;
}
inline char *imx_get_product_name(void)
{
    return IMX_PRODUCT_NAME;
}
inline char *imx_get_manufacturing_site(void)
{
    return IMX_MANUFACTURING_SITE;
}
inline uint16_t imx_get_wifi_channel_scb(void)
{
    return IMX_SCB_WI_FI_CHANNEL;
}
inline uint16_t imx_get_wifi_rssi_scb(void)
{
    return IMX_SCB_WI_FI_RSSI;
}
inline uint16_t imx_get_wifi_bssid_scb(void)
{
    return IMX_SCB_WI_FI_BSSID;
}
inline uint16_t imx_get_wifi_rf_noise_scb(void)
{
    return IMX_SCB_WI_FI_RF_NOISE;
}

/**
* @brief	Controls
* @param
* @retval : None
*/

/**
* @brief	Sensors
* @param
* @retval : None
*/
/* [] END OF FILE */