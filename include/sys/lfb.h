#ifndef LFB_H_
#define LFB_H_

#include "stdint.h"

#define VBE_DISPI_TOTAL_VIDEO_MEMORY_MB     16
#define VBE_DISPI_4BPP_PLANE_SHIFT          22

#define VBE_DISPI_BANK_ADDRESS              0xA0000
#define VBE_DISPI_BANK_SIZE_KB              64

#define VBE_DISPI_MAX_XRES                  2560
#define VBE_DISPI_MAX_YRES                  1600
#define VBE_DISPI_MAX_BPP                   32

#define VBE_DISPI_IOPORT_INDEX              0x01CE
#define VBE_DISPI_IOPORT_DATA               0x01CF

#define VBE_DISPI_INDEX_ID                  0x0
#define VBE_DISPI_INDEX_XRES                0x1
#define VBE_DISPI_INDEX_YRES                0x2
#define VBE_DISPI_INDEX_BPP                 0x3
#define VBE_DISPI_INDEX_ENABLE              0x4
#define VBE_DISPI_INDEX_BANK                0x5
#define VBE_DISPI_INDEX_VIRT_WIDTH          0x6
#define VBE_DISPI_INDEX_VIRT_HEIGHT         0x7
#define VBE_DISPI_INDEX_X_OFFSET            0x8
#define VBE_DISPI_INDEX_Y_OFFSET            0x9
#define VBE_DISPI_INDEX_VIDEO_MEMORY_64K    0xa

#define VBE_DISPI_ID0                       0xB0C0
#define VBE_DISPI_ID1                       0xB0C1
#define VBE_DISPI_ID2                       0xB0C2
#define VBE_DISPI_ID3                       0xB0C3
#define VBE_DISPI_ID4                       0xB0C4
#define VBE_DISPI_ID5                       0xB0C5

#define VBE_DISPI_BPP_4                     0x04
#define VBE_DISPI_BPP_8                     0x08
#define VBE_DISPI_BPP_15                    0x0F
#define VBE_DISPI_BPP_16                    0x10
#define VBE_DISPI_BPP_24                    0x18
#define VBE_DISPI_BPP_32                    0x20

#define VBE_DISPI_DISABLED                  0x00
#define VBE_DISPI_ENABLED                   0x01
#define VBE_DISPI_GETCAPS                   0x02
#define VBE_DISPI_8BIT_DAC                  0x20
#define VBE_DISPI_LFB_ENABLED               0x40
#define VBE_DISPI_NOCLEARMEM                0x80

#define VBE_DISPI_LFB_PHYSICAL_ADDRESS      0xE0000000

#define VBE_DISPI_TOTAL_VIDEO_MEMORY_KB     (VBE_DISPI_TOTAL_VIDEO_MEMORY_MB * 1024)
#define VBE_DISPI_TOTAL_VIDEO_MEMORY_BYTES  (VBE_DISPI_TOTAL_VIDEO_MEMORY_KB * 1024)

#define BX_MAX_XRES                         VBE_DISPI_MAX_XRES
#define BX_MAX_YRES                         VBE_DISPI_MAX_YRES

#define VBE_SCREEN_BPP                      32
#define VBE_SCREEN_VHEIGHT                  4096

void setup_video(uint32_t, uint32_t);

#endif