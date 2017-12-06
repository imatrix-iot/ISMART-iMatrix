#
# Copyright 2015, Sierra Telecom, Inc.
# All Rights Reserved.
#
# This is UNPUBLISHED PROPRIETARY SOURCE CODE of Sierra Telecom, Inc.
# the contents of this file may not be disclosed to third parties, copied
# or duplicated in any form, in whole or in part, without the prior
# written permission of Sierra Telecom, Inc.
#

# GLOBAL_DEFINES := WICED_DISABLE_STDIO WPRINT_ENABLE_WEBSERVER WPRINT_ENABLE_DEBUG WPRINT_ENABLE_ERROR

GLOBAL_INCLUDES += apps/iMatrix/imatrix.h

GLOBAL_DEFINES := WPRINT_ENABLE_WEBSERVER WPRINT_ENABLE_DEBUG WPRINT_ENABLE_ERROR # MAC_ADDRESS_SET_BY_HOST
#MULTICAST_DEBUGGING 

#MULTICAST_DEBUGGING enables the control/multicast URI which allows you to send a unicast to this device
#containing a multicast message, which is then sent by this device. Because this is a vulnerability 
#that a hacker might exploit MULTICAST_DEBUGGING should only be defined on non-production devices. 

#
# Hardware Configuration items
#
GLOBAL_DEFINES += USE_STM32
GLOBAL_DEFINES += APPLICATION_STACK_SIZE=18432
GLOBAL_DEFINES += TX_PACKET_POOL_SIZE=8 \
                  RX_PACKET_POOL_SIZE=8 \
                  WICED_TCP_TX_DEPTH_QUEUE=5 \
                  WICED_TCP_RX_DEPTH_QUEUE=5 \
                  WICED_TCP_WINDOW_SIZE=16384

#GLOBAL_DEFINES += DEVELOPER_MODE		# Pull SN, PW, and MAC from developer.inc file
#GLOBAL_DEFINES += WIFI_DEBUG			# SET THE CORRECT SSID ETC in wifi_config_dct.h
#GLOBAL_DEFINES += MANUFACTURING

$(NAME)_DEFINES += SFLASH_SUPPORT_SST_PARTS \
                   SFLASH_SUPPORT_MACRONIX_PARTS \
                   SFLASH_SUPPORT_EON_PARTS \
                   SFLASH_SUPPORT_MICRON_PARTS
NAME := ISMART

$(NAME)_SOURCES := ismart.c ismart.h \
product/controls_def.c product/hal_functions.c product/hal_functions.h product/product.c product/product.h product/sensors_def.c 

$(NAME)_COMPONENTS := protocols/HTTP apps/iMatrix
#apps/SierraTelecom/drivers/spi_flash #protocols/SNTP libraries/drivers/bluetooth_le

WIFI_CONFIG_DCT_H := wifi_config_dct.h

# Define variables for code to be stored in external flash.

FULL_DOWNLOAD :=
#FULL_DOWNLOAD := DOWNLOAD_EVERYTHING

APP0 := $(OUTPUT_DIR)/binary/$(CLEANED_BUILD_STRING).stripped.elf # Known Good version of app.

ifeq ($(FULL_DOWNLOAD),) 
    APP1 :=  Makefile # Place holder for a future transitional copy of the OTA app.
else
    APP1 := $(OUTPUT_DIR)/binary/$(CLEANED_BUILD_STRING).stripped.elf # Extra copy of Apollo app.
endif

#Known Good OTA app
#OTA_APP := apps/waf/OTAupdate-QLA_ISM43340_M4G_L44.stripped.elf
ifeq ($(FULL_DOWNLOAD),) 
    FR_APP :=  Makefile # Place holder for a future transitional copy of the OTA app.
else
    FR_APP := $(OTA_APP)
endif

WIFI_FIRMWARE := $(OUTPUT_DIR)/DCT.stripped.elf # Known Good PSoC firmware.
APP2 := $(OUTPUT_DIR)/DCT.stripped.elf # Place holder for a future transitional copy of the PSoC firmware.

DCT_IMAGE := $(OUTPUT_DIR)/DCT.stripped.elf

# FILESYSTEM_IMAGE not currently used.

#Note: APP0, OTA_APP, WIFI_FIRMWARE are where executables are stored at the factory and are Known Good
# APP1, FR_APP, APP2 are locations where updates will initially be downloaded in the field.
# After successfully downloading and validating the software 
# the file pointers for the transitional and Known Good are swapped.

# Maximum file sizes: When [app name]_MAX_SECTORS is undefined the maximum size defaults to the
# actual file size rounded up to the nearest 4K sector.
# Allowing 128KB for the bootloader and DCT the maximum size of a system image is 896KB with 1MB internal storage.
# 224 Sectors = 896KB; 192 Sectors = 750KB; 32 Sectors = 128 KB; 16 Sectors = 64 KB

# main Apollo app

#The following files are used for OTA and consequently it doesn't matter what file you use.
#You just need a place holder for a file that will be downloaded.
APP0 := Makefile
APP1 := $(APP0)

# Define File sizes
APP0_SECTOR_COUNT := 224 # Apollo app
APP1_SECTOR_COUNT := $(APP0_SECTOR_COUNT)
# OTA app
FR_APP_SECTOR_COUNT := 224 
OTA_APP_SECTOR_COUNT := $(FR_APP_SECTOR_COUNT)
# PSoC firmware
WIFI_FIRMWARE_SECTOR_COUNT := 32 
APP2_SECTOR_COUNT := $(WIFI_FIRMWARE_SECTOR_COUNT)
# DCT 
DCT_IMAGE_SECTOR_COUNT := 16 

# Define File order
FR_APP_SECTOR_START := 16 
DCT_IMAGE_SECTOR_START := 240  
OTA_APP_SECTOR_START := 256
WIFI_FIRMWARE_SECTOR_START := 480  
APP0_SECTOR_START := 512 
APP1_SECTOR_START := 736 
APP2_SECTOR_START := 960

# FACTORY RESET DCT not replaceable via OTA. 
# However, a DCT can be read and edited by either the APOLLO app, OTA app or an additional install program 
# if an update requires changes in the DCT.

#install program or extra resource files - NOT currently used
#export FILESYSTEM_IMAGE_MAX_SECTORS := anything leftover

#Note: These file sizes are used in wiced_apps.mk when defining a rule for APPS_LOOKUP_TABLE_RULES

