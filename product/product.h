/*
* $Copyright 2017, Sierra Telecom, Inc.
* All Rights Reserved.
*
* This is UNPUBLISHED PROPRIETARY SOURCE CODE of Sierra Telecom, Inc.;
* the contents of this file may not be disclosed to third parties, copied
* or duplicated in any form, in whole or in part, without the prior
* written permission of Sierra Telecom, Inc.
*/

/* @file product.h
*
* Created on: Dec 04, 2017
* Author: Auto Generated Code Do NOT Modify
*
* Product: ISMART 43340 Base uses the ISMART43340-C Platform
* The following controls and sensors
* Controls
*   0 - LED Green
*   1 - LED Red
* Sensors
*   0 - On Board Temperature
*   1 - Wi Fi BSSID
*   2 - Wi Fi Channel
*   3 - Wi Fi RF Noise
*   4 - Wi Fi RSSI
*/

#ifndef IMATRIX_PRODUCT_H_
#define IMATRIX_PRODUCT_H_
/******************************************************
*                      Macros
******************************************************/

/******************************************************
*                    Constants
******************************************************/
/*
* Memory Use Definitions
*/
#define IMATRIX_HISTORY_SIZE                ( 60 )

#define IMX_NO_VAR_POOLS                    ( 7 )

#define IMX_POOL_0_SIZE                     ( 256 )
#define IMX_POOL_1_SIZE                     ( 512 )
#define IMX_POOL_2_SIZE                     ( 1024 )
#define IMX_POOL_3_SIZE                     ( 2048 )
#define IMX_POOL_4_SIZE                     ( 4096 )
#define IMX_POOL_5_SIZE                     ( 8192 )
#define IMX_POOL_6_SIZE                     ( 16384 )

#define IMX_NO_POOL_0                   ( 2 )
#define IMX_NO_POOL_1                   ( 0 )
#define IMX_NO_POOL_2                   ( 0 )
#define IMX_NO_POOL_3                   ( 0 )
#define IMX_NO_POOL_4                   ( 0 )
#define IMX_NO_POOL_5                   ( 0 )
#define IMX_NO_POOL_6                   ( 0 )

/*
* Platform Hardware Definition
*/
#define ARDUINO_SPI_PORT                WICED_SPI_1
#define ARDUINO_SPI_CS                  WICED_GPIO_5   // ADC1
#define ARDUINO_SPI_INTERFACE_SPEED     1000000
#define ARDUINO_SPI_MODE                (SPI_CLOCK_RISING_EDGE | SPI_CLOCK_IDLE_HIGH | SPI_NO_DMA | SPI_MSB_FIRST)

/*
* Define the Arduino Code used for this system - 00 No Arduino present
*/
#define IMATRIX_ARDUINO_CODE	0x00

/*
* AT Command mode enabled
*/
#define AT_COMMAND_MODE         0x00

/*
* Product and Operating details
*/
#define IMX_MANUFACTUER_ID     1583546208
#define IMX_PRODUCT_ID         0x62547da9
#define IMX_PRODUCT_NAME       "ISMART 43340 Base"
#define IMX_MANUFACTURING_SITE "bind.imatrix.io"
#define IMX_BIND_URI           "sierratelecom/device"
#define IMX_IMATRIX_SITE       "dev.coap.imatrix.io"
#define IMX_OTA_SITE           "ota.imatrix.io"

#define IMX_DEFAULT_ST_SSID     "SierraTelecom"
#define IMX_DEFAULT_ST_KEY      "happydog"
#define IMX_DEFAULT_ST_SECURITY WICED_SECURITY_WPA2_AES_PSK

#define IMX_DEFAULT_AP_CHANNEL  1
#define IMX_DEFAULT_AP_SSID     "ismart-43340-base"
#define IMX_DEFAULT_AP_KEY      ""
#define IMX_DEFAULT_AP_SECURITY WICED_SECURITY_OPEN

#define IMX_LONGITUDE_DEFAULT 0
#define IMX_LATITUDE_DEFAULT  0
#define IMX_ELEVATION_DEFAULT 0

#define IMX_START_IN_STATION_MODE true

#define IMX_LOG_WIFI_AP      true
#define IMX_LOG_WIFI_RSSI    true
#define IMX_LOG_WIFI_RFNOISE true

#define IMX_INTERFACE        1

/*
* Define Control IDs for Controls
*/
/*
* Integrated Controls
*/
#define IMX_LED_GREEN_993043257 0x3b30a339
#define IMX_LED_RED_313851464 0x12b4fe48
#define IMX_NO_INTEGRATED_CONTROLS ( 2 )

/*
* Product Controls
*/
#define IMX_NO_PRODUCT_CONTROLS ( 0 )

#define CCB_IMX_LED_GREEN_993043257 ( 0 )
#define CCB_IMX_LED_RED_313851464 ( 1 )
#define IMX_NO_CONTROLS ( IMX_NO_INTEGRATED_CONTROLS + IMX_NO_PRODUCT_CONTROLS)


/*
* Define Sensor IDs for Sensors
*/
/*
* Integrated Sensors
*/
#define IMX_ON_BOARD_TEMPERATURE_911206407 0x364fe807
#define IMX_WI_FI_BSSID_173116153 0xa518af9
#define IMX_WI_FI_CHANNEL_173946172 0xa5e353c
#define IMX_WI_FI_RF_NOISE_1748909411 0x683e3d63
#define IMX_WI_FI_RSSI_201600364 0xc042d6c
#define IMX_NO_INTEGRATED_SENSORS  ( 5 )

/*
* Product Sensors
*/
#define IMX_NO_PRODUCT_SENSORS  ( 0 )

#define SCB_IMX_ON_BOARD_TEMPERATURE_911206407 ( 0 )
#define SCB_IMX_WI_FI_BSSID_173116153 ( 1 )
#define SCB_IMX_WI_FI_CHANNEL_173946172 ( 2 )
#define SCB_IMX_WI_FI_RF_NOISE_1748909411 ( 3 )
#define SCB_IMX_WI_FI_RSSI_201600364 ( 4 )
#define IMX_NO_SENSORS ( IMX_NO_INTEGRATED_SENSORS + IMX_NO_PRODUCT_SENSORS)

#define IMX_SCB_WI_FI_BSSID SCB_IMX_WI_FI_BSSID_173116153
#define IMX_SCB_WI_FI_CHANNEL SCB_IMX_WI_FI_CHANNEL_173946172
#define IMX_SCB_WI_FI_RF_NOISE SCB_IMX_WI_FI_RF_NOISE_1748909411
#define IMX_SCB_WI_FI_RSSI SCB_IMX_WI_FI_RSSI_201600364

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

#endif /* IMATRIX_PRODUCT_H_ */

/* [] END OF FILE */