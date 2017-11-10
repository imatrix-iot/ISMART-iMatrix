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

/** @file controls_def.c
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

const imx_control_sensor_block_t imx_controls_defaults[ IMX_NO_CONTROLS ] =  {
    {
        .name = "LED Red",
        .id = LED_RED_313851464,
        .sample_rate = 0,
        .sample_batch_size = 0,
        .percent_change_to_send = 1,
        .enabled = 1,
        .valid = 0,
        .read_only = 0,
        .poll_rate = 0,
        .send_on_percent_change = 0,
        .data_type = IMX_UINT32,
        .use_warning_level_low = 0,
        .use_warning_level_high  = 0,
        .set_default = 1,
        .send_imatrix = 0,
        .default_value = { 0 },
        .warning_level_low[ 0 ]  = { 0 },
        .warning_level_low[ 1 ]  = { 0 },
        .warning_level_low[ 2 ]  = { 0 },
        .warning_level_high[ 0 ] = { 0 },
        .warning_level_high[ 1 ] = { 0 },
        .warning_level_high[ 2 ] = { 0 },
    },
    {
        .name = "LED Green",
        .id = LED_GREEN_993043257,
        .sample_rate = 0,
        .sample_batch_size = 0,
        .percent_change_to_send = 1,
        .enabled = 1,
        .valid = 0,
        .read_only = 0,
        .poll_rate = 0,
        .send_on_percent_change = 0,
        .data_type = IMX_UINT32,
        .use_warning_level_low = 0,
        .use_warning_level_high  = 0,
        .set_default = 1,
        .send_imatrix = 0,
        .default_value = { 0 },
        .warning_level_low[ 0 ]  = { 0 },
        .warning_level_low[ 1 ]  = { 0 },
        .warning_level_low[ 2 ]  = { 0 },
        .warning_level_high[ 0 ] = { 0 },
        .warning_level_high[ 1 ] = { 0 },
        .warning_level_high[ 2 ] = { 0 },
    }
};

/******************************************************
*               Function Definitions
******************************************************/
const imx_functions_t imx_control_functions[ IMX_NO_CONTROLS ] = {
    {
        .load_config_defaults = load_config_defaults_generic_ccb,
        .init = NULL,
        .update = NULL,
        .arg = CCB_LED_RED_313851464,
    },
    {
        .load_config_defaults = load_config_defaults_generic_ccb,
        .init = NULL,
        .update = NULL,
        .arg = CCB_LED_GREEN_993043257,
    }
};

/* [] END OF FILE */