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
*  Created on: Nov 10, 2017
*  Author: Auto Generated Code Do NOT Modify
*
* Product: ISMART 43340 Base uses the ISMART43340-C Platform
* The following controls and sensors
* Controls
    *  Integrated Controls
            *   1. LED Red
            *   2. LED Green
        * Sensors
    *  Integrated Sensors
            *   1. Wi Fi BSSID
            *   2. Wi Fi Channel
            *   3. Wi Fi RSSI
            *   4. On Board Temperature
            *   5. Wi Fi RF Noise
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
* Platform Hardware Definition
*/
#define ARDUINO_SPI_PORT                WICED_SPI_1
#define ARDUINO_SPI_CS                  WICED_GPIO_5   // ADC1
#define ARDUINO_SPI_INTERFACE_SPEED     1000000
#define ARDUINO_SPI_MODE                (SPI_CLOCK_RISING_EDGE | SPI_CLOCK_IDLE_HIGH | SPI_NO_DMA | SPI_MSB_FIRST)

/*
* Define the Arduino Code used for this system - 00 No Arduino present
*/
#define IMATRIX_ARDUINO_CODE	        0x00

/*
* AT Command mode enabled
*/
#define AT_COMMAND_MODE                 0x00

/*
* Product and Operating details
*/
#define IMX_MANUFACTUER_ID              1583546208
#define IMX_PRODUCT_ID                  0x78086a96
#define IMX_PRODUCT_NAME                "iMatrix ISMART Mercury"
#define IMX_MANUFACTURING_SITE          "bind.imatrix.io"
#define IMX_IMATRIX_SITE                "dev.coap.imatrix.io"
#define IMX_OTA_SITE                    "ota.imatrix.io"

#define IMX_DEFAULT_ST_SSID             "iMatrix-2G"
#define IMX_DEFAULT_ST_KEY              "happydog"
#define IMX_DEFAULT_ST_SECURITY         WICED_SECURITY_WPA2_AES_PSK

#define IMX_DEFAULT_AP_SSID             "ISMART-ConnectKit"
#define IMX_DEFAULT_AP_KEY              ""
#define IMX_DEFAULT_AP_SECURITY         WICED_SECURITY_OPEN

/*
* Define Control IDs for Controls
*/
/*
* Integrated Controls
*/
#define LED_RED_313851464 0x12b4fe48
#define LED_GREEN_993043257 0x3b30a339
#define IMX_NO_INTEGRATED_CONTROLS ( 2 )

/*
* Product Controls
*/
#define IMX_NO_PRODUCT_CONTROLS ( 0 )

/*
* Smart Arduino Controls
*/
#define IMX_NO_ARDUINO_CONTROLS ( 0 )

#define CCB_LED_RED_313851464 ( 0 )
#define CCB_LED_GREEN_993043257 ( 1 )
#define IMX_NO_CONTROLS ( IMX_NO_INTEGRATED_CONTROLS + IMX_NO_PRODUCT_CONTROLS + IMX_NO_ARDUINO_CONTROLS )

/*
* Define Sensor IDs for Sensors
*/
/*
* Integrated Sensors
*/
#define WI_FI_BSSID_173116153 0xa518af9
#define WI_FI_CHANNEL_173946172 0xa5e353c
#define WI_FI_RSSI_201600364 0xc042d6c
#define ON_BOARD_TEMPERATURE_911206407 0x364fe807
#define WI_FI_RF_NOISE_1748909411 0x683e3d63
#define IMX_NO_INTEGRATED_SENSORS  ( 5 )

/*
* Product Sensors
*/
#define IMX_NO_PRODUCT_SENSORS  ( 0 )

/*
* Smart Arduino Sensors
*/
#define IMX_NO_ARDUINO_SENSORS ( 0 )

#define SCB_WI_FI_BSSID_173116153 ( 0 )
#define SCB_WI_FI_CHANNEL_173946172 ( 1 )
#define SCB_WI_FI_RSSI_201600364 ( 2 )
#define SCB_ON_BOARD_TEMPERATURE_911206407 ( 3 )
#define SCB_WI_FI_RF_NOISE_1748909411 ( 4 )
#define IMX_NO_SENSORS ( IMX_NO_INTEGRATED_SENSORS + IMX_NO_PRODUCT_SENSORS + IMX_NO_ARDUINO_SENSORS )

#define IMX_CCB_LED_RED CCB_LED_RED_313851464
#define IMX_CCB_LED_GREEN CCB_LED_GREEN_993043257
#define IMX_SCB_WI_FI_BSSID SCB_WI_FI_BSSID_173116153
#define IMX_SCB_WI_FI_CHANNEL SCB_WI_FI_CHANNEL_173946172
#define IMX_SCB_WI_FI_RSSI SCB_WI_FI_RSSI_201600364
#define IMX_SCB_ON_BOARD_TEMPERATURE SCB_ON_BOARD_TEMPERATURE_911206407
#define IMX_SCB_WI_FI_RF_NOISE SCB_WI_FI_RF_NOISE_1748909411

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
