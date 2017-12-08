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

/** @file hal_functions.h
*
*  Created on: Dec 04, 2017
*  Author: Auto Generated Code Do NOT Modify
*
*/

#ifndef HAL_FUNCTIONS_H
#define HAL_FUNCTIONS_H

/******************************************************
*                      Macros
******************************************************/

/******************************************************
*                    Constants
******************************************************/

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
*               Function Definitions
******************************************************/
uint16_t get_no_controls(void);
uint16_t get_no_sensors(void);
uint32_t get_product_id(void);
uint32_t get_organization_id(void);
char *get_product_name(void);
char *get_manufacturing_site(void);
uint32_t get_flash_size(void);
uint32_t get_last_device_address(void);
uint16_t get_no_at_controls(void);
uint16_t get_no_at_sensors(void);
#ifdef IMX_SCB_WI_FI_CHANNEL
uint16_t imx_get_wifi_channel_scb(void);
#endif
#ifdef IMX_SCB_WI_FI_RSSI
uint16_t imx_get_wifi_rssi_scb(void);
#endif
#ifdef IMX_SCB_WI_FI_BSSID
uint16_t imx_get_wifi_bssid_scb(void);
#endif
#ifdef IMX_SCB_WI_FI_RF_NOISE
uint16_t imx_get_wifi_rf_noise_scb(void);
#endif

/**
* @brief Controls
* @param
* @retval : None
*/


/**
* @brief    Sensors
* @param
* @retval : None
*/

#endif /* HAL_FUNCTIONS_H_ */

/* [] END OF FILE */