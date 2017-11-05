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
*  Created on: Oct 07, 2017
*  Author: Auto Generated Code Do NOT Modify
*
* Product: Apollo LED Light Controller uses the ISM43340 Platform
* The following controls and sensors
* Controls
*  Platform Controls
*   1. LED Fixture Green
*   2. LED Fixture Red
*  Platform Sensors
*   1. Wi Fi RSSI
*   2. Wi Fi Channel
*   3. Wi Fi BSSID
*   4. Wi Fi Noise
*   5. On board temp
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
#define IMATRIX_ARDUINO_CODE	0x00
/*
 * AT Command mode enabled - True / False
 */
#define AT_COMMAND_MODE         0x01
/*
* Product and Operating details
*/
#define IMX_MANUFACTUER_ID     1583546208
#define IMX_PRODUCT_ID         0xb14adfc
#define IMX_PRODUCT_NAME       "iMatrix ISMART Client"
#define IMX_MANUFACTURING_SITE "bind.imatrix.io"
#define IMX_IMATRIX_SITE       "sierratelecom.imatrix.io"
#define IMX_OTA_SITE           "ota.imatrix.io"
/*
* Define Control IDs for Controls
*/
/*
* Integrated Controls
*/
#define LED_RED_313851464               0X012B4FE48
#define LED_GREEN_993043257             0X03B30A339
#define IMX_NO_INTEGRATED_CONTROLS      2
/*
* Product Controls
*/
#define IMX_NO_PRODUCT_CONTROLS         ( 0 )
/*
* Smart Arduino Controls
*/
#define IMX_NO_ARDUINO_CONTROLS         ( 0 )

#define CCB_LED_RED_313851464           0x00
#define CCB_LED_GREEN_993043257         0x01

#define IMX_NO_CONTROLS ( IMX_NO_INTEGRATED_CONTROLS + IMX_NO_PRODUCT_CONTROLS )

/*
* Define Sensor IDs for Sensors
*/
/*
* Integrated Sensors
*/
#define WIFI_RSSI_201600364             0X060E4C6C
#define WIFI_CHANNEL_173916172          0X0A5E353C
#define WIFI_BSSID_173116153            0X0A518AF9
#define WIFI_RF_NOISE_1748909411        0X0683E3D63
#define ON_BOARD_TEMP_911206407         0X0364FE807
#define IMX_NO_INTEGRATED_SENSORS       ( 5 )
/*
* Product Sensors
*/
#define IMX_NO_PRODUCT_SENSORS          ( 0 )
/*
* Smart Arduino Sensors
*/
#define IMX_NO_ARDUINO_SENSORS          ( 0 )

#define SCB_WIFI_RSSI_201600364         0x0
#define SCB_WIFI_CHANNEL_173916172      0x1
#define SCB_WIFI_BSSID_173116153        0x2
#define SCB_WIFI_RF_NOISE_1748909411    0x3
#define SCB_ON_BOARD_TEMP_911206407     0x4

#define IMX_NO_SENSORS ( IMX_NO_INTEGRATED_SENSORS + IMX_NO_PRODUCT_SENSORS )

#define IMX_SCB_WIFI_RSSI               SCB_WIFI_RSSI_201600364
#define IMX_SCB_WIFI_CHANNEL            SCB_WIFI_CHANNEL_173916172
#define IMX_SCB_WIFI_BSSID              SCB_WIFI_BSSID_173116153
#define IMX_SCB_WIFI_RF_NOISE           SCB_WIFI_RF_NOISE_1748909411

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
