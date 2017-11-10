app_header_t apps_lut[ FULL_IMAGE ];// Look Up Table descriptions of the 8 entries that may be used as bootable images by the bootloader.
/*
* This LUT is for a 2MB Serial Flash Part. Only items stored are Factory Reset App, DCT and One Downloaded image
*/
app_header_t default_lut[ FULL_IMAGE ] = {
[ DCT_FR_APP_INDEX ] = {
.count = 1,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x0001,
.count = 0x00C8,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
[ DCT_DCT_IMAGE_INDEX ] = {
.count = 1,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x00C9,
.count = 0x0004,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
[ DCT_OTA_APP_INDEX ] = {
.count = 0,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x0000,
.count = 0x000,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
[ DCT_FILESYSTEM_IMAGE_INDEX ] = {
.count = 0,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x0000,
.count = 0x000,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
[ DCT_WIFI_FIRMWARE_INDEX ] = {
.count = 1,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x0000,
.count = 0x000,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
[ DCT_APP0_INDEX ] = {
.count = 1,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x00CD,
.count = 0x00C8,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
[ DCT_APP1_INDEX ] = {
.count = 0,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x0000,
.count = 0x000,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
[ DCT_APP2_INDEX ] = {
.count = 0,     // Number of Entries
#ifndef BOOTLOADER_APP_LUT_NO_SECURE_FLAG
.secure = 0,    //Is this app secure (Signed/Encrypted) or not - Added in SDK-3.4.0
#endif
.sectors[ 0 ] = {
.start = 0x0000,
.count = 0x000,
},
.sectors[ 1 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 2 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 3 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 4 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 5 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 6 ] = {
.start = 0x0000,
.count = 0x0000,
},
.sectors[ 7 ] = {
.start = 0x0000,
.count = 0x0000,
},
},
};