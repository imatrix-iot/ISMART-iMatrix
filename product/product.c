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
* including Sierra's product in a High Risk Product, the manufacturer
* of such system or application assumes all risk of such use and in doing
* so agrees to indemnity Sierra against all liability.
*/

/** @file product.c
*
*  Created on: Nov 10, 2017
*  Author: Auto Generated Code Do NOT Modify
*/

#include <stdint.h>
#include <stdbool.h>

#include "imatrix.h"
#include "product.h"

/******************************************************
*                      Macros
******************************************************/

/******************************************************
*                    Constants
******************************************************/

#define IMX_DEFAULT_ST_SSID             "iMatrix-2G"
#define IMX_DEFAULT_ST_KEY              ""
#define IMX_DEFAULT_ST_SECURITY         WICED_SECURITY_WPA2_AES_PSK

#define IMX_DEFAULT_AP_SSID             "ISMART-ConnectKit"
#define IMX_DEFAULT_AP_KEY              ""
#define IMX_DEFAULT_AP_SECURITY         WICED_SECURITY_OPEN

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
imx_imatrix_init_config_t imatrix_config = {
    .product_name = IMX_PRODUCT_NAME,
    .device_name = IMX_PRODUCT_NAME,
    .imatrix_bind_uri = "test_organization_2/bind",
    .imatrix_public_url = IMX_IMATRIX_SITE,
    .ota_public_url = IMX_OTA_SITE,
    .manufacturing_url = IMX_MANUFACTURING_SITE,
    .default_ap_ssid = IMX_DEFAULT_AP_SSID,
    .default_ap_wpa = IMX_DEFAULT_AP_KEY,
    .default_st_ssid = IMX_DEFAULT_ST_SSID,
    .default_st_wpa = IMX_DEFAULT_ST_KEY,
    .default_ap_eap_mode = 0,
    .default_st_eap_mode = 0,
    .default_ap_security_mode = WICED_SECURITY_OPEN,
    .default_st_security_mode = IMX_DEFAULT_ST_SECURITY,
    .no_sensors = IMX_NO_SENSORS,
    .no_controls = IMX_NO_CONTROLS,
    .no_arduino_sensors = IMX_NO_ARDUINO_SENSORS,
    .no_arduino_controls = IMX_NO_ARDUINO_CONTROLS,
    .product_capabilities = ( IMX_WIFI_2_4GHZ | IMX_WIFI_5_2GHZ |IMX_WIFI_5_4GHZ | IMX_WIFI_5_8GHZ ),
    .product_id = IMX_PRODUCT_ID,
    .manufactuer_id = IMX_MANUFACTUER_ID,
    .building_id = 0,
    .level_id = 0,
    .indoor_x = 0,
    .indoor_y = 0,
    .longitude = IMX_LONGITUDE_DEFAULT,
    .latitude = IMX_LATITUDE_DEFAULT,
    .elevation = IMX_ELEVATION_DEFAULT,
    .at_command_mode = AT_COMMAND_MODE,
    .start_in_station_mode = true,
    .log_wifi_AP = true,
    .log_wifi_rssi = true,
    .log_wifi_rfnoise = true,
    .led_functions = {
        {
            imx_init_led_red_ismart,
            imx_update_led_red_status_ismart,
        },
        {
            imx_init_led_green_ismart,
            imx_update_led_green_status_ismart,
        },
        {
            imx_init_led_blue_ismart,
            imx_update_led_blue_status_ismart,
        },
    },
};

/******************************************************
*               Function Definitions
******************************************************/
/**
* @brief
* @param  None
* @retval : None
*/