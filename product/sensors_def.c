/*
* $Copyright 2013-2017, Sierra Telecom, Inc.
* All Rights Reserved.
*
* This is UNPUBLISHED PROPRIETARY SOURCE CODE of Sierra Telecom, Inc.;
* the contents of this file may not be disclosed to third parties, copied
* or duplicated in any form, in whole or in part, without the prior
* written permission of Sierra Telecom, Inc.$
*/

/** @file sensors_def.c
*  Created on: Dec 04, 2017
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

const imx_control_sensor_block_t imx_sensors_defaults[ IMX_NO_SENSORS ]  = {
    {
        .name = "On Board Temperature",
        .id = IMX_ON_BOARD_TEMPERATURE_911206407,
        .sample_rate = 5000,
        .sample_batch_size = 1,
        .percent_change_to_send = 0,
        .enabled = 1,
        .read_only = 1,
        .poll_rate = 250,
        .send_on_percent_change = 0,
        .data_type = IMX_INT32,
        .set_default = 0,
        .send_imatrix = 1,
        .default_value = { .int_32bit = 0 },
        .use_warning_level_low = 0,
        .use_warning_level_high  = 0,
        .warning_level_low[ 0 ]  = { 0 },
        .warning_level_low[ 1 ]  = { 0 },
        .warning_level_low[ 2 ]  = { 0 },
        .warning_level_high[ 0 ] = { 0 },
        .warning_level_high[ 1 ] = { 0 },
        .warning_level_high[ 2 ] = { 0 },
    },
    {
        .name = "Wi Fi BSSID",
        .id = IMX_WI_FI_BSSID_173116153,
        .sample_rate = 0,
        .sample_batch_size = 1,
        .percent_change_to_send = 0,
        .enabled = 1,
        .read_only = 1,
        .poll_rate = 250,
        .send_on_percent_change = 0,
        .data_type = IMX_UINT32,
        .set_default = 0,
        .send_imatrix = 1,
        .default_value = { .int_32bit = 0 },
        .use_warning_level_low = 0,
        .use_warning_level_high  = 0,
        .warning_level_low[ 0 ]  = { 0 },
        .warning_level_low[ 1 ]  = { 0 },
        .warning_level_low[ 2 ]  = { 0 },
        .warning_level_high[ 0 ] = { 0 },
        .warning_level_high[ 1 ] = { 0 },
        .warning_level_high[ 2 ] = { 0 },
    },
    {
        .name = "Wi Fi Channel",
        .id = IMX_WI_FI_CHANNEL_173946172,
        .sample_rate = 0,
        .sample_batch_size = 1,
        .percent_change_to_send = 0,
        .enabled = 1,
        .read_only = 1,
        .poll_rate = 250,
        .send_on_percent_change = 0,
        .data_type = IMX_UINT32,
        .set_default = 0,
        .send_imatrix = 1,
        .default_value = { .int_32bit = 0 },
        .use_warning_level_low = 0,
        .use_warning_level_high  = 0,
        .warning_level_low[ 0 ]  = { 0 },
        .warning_level_low[ 1 ]  = { 0 },
        .warning_level_low[ 2 ]  = { 0 },
        .warning_level_high[ 0 ] = { 0 },
        .warning_level_high[ 1 ] = { 0 },
        .warning_level_high[ 2 ] = { 0 },
    },
    {
        .name = "Wi Fi RF Noise",
        .id = IMX_WI_FI_RF_NOISE_1748909411,
        .sample_rate = 60000,
        .sample_batch_size = 15,
        .percent_change_to_send = 0,
        .enabled = 1,
        .read_only = 1,
        .poll_rate = 250,
        .send_on_percent_change = 0,
        .data_type = IMX_INT32,
        .set_default = 0,
        .send_imatrix = 1,
        .default_value = { .int_32bit = 0 },
        .use_warning_level_low = 0,
        .use_warning_level_high  = 0,
        .warning_level_low[ 0 ]  = { 0 },
        .warning_level_low[ 1 ]  = { 0 },
        .warning_level_low[ 2 ]  = { 0 },
        .warning_level_high[ 0 ] = { 0 },
        .warning_level_high[ 1 ] = { 0 },
        .warning_level_high[ 2 ] = { 0 },
    },
    {
        .name = "Wi Fi RSSI",
        .id = IMX_WI_FI_RSSI_201600364,
        .sample_rate = 5000,
        .sample_batch_size = 2,
        .percent_change_to_send = 0,
        .enabled = 1,
        .read_only = 1,
        .poll_rate = 250,
        .send_on_percent_change = 0,
        .data_type = IMX_INT32,
        .set_default = 0,
        .send_imatrix = 1,
        .default_value = { .int_32bit = 0 },
        .use_warning_level_low = 0,
        .use_warning_level_high  = 0,
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
const imx_functions_t imx_sensor_functions[ IMX_NO_SENSORS ] = {
{
    .load_config_defaults = load_config_defaults_generic_scb,
    .init = imx_init_temp,
    .update = imx_sample_temp,
    .arg = SCB_IMX_ON_BOARD_TEMPERATURE_911206407,
},
{
    .load_config_defaults = load_config_defaults_generic_scb,
    .init = NULL,
    .update = NULL,
    .arg = SCB_IMX_WI_FI_BSSID_173116153,
},
{
    .load_config_defaults = load_config_defaults_generic_scb,
    .init = NULL,
    .update = NULL,
    .arg = SCB_IMX_WI_FI_CHANNEL_173946172,
},
{
    .load_config_defaults = load_config_defaults_generic_scb,
    .init = NULL,
    .update = imx_sample_rfnoise,
    .arg = SCB_IMX_WI_FI_RF_NOISE_1748909411,
},
{
    .load_config_defaults = load_config_defaults_generic_scb,
    .init = NULL,
    .update = imx_sample_rssi,
    .arg = SCB_IMX_WI_FI_RSSI_201600364,
}
};

/* [] END OF FILE */
