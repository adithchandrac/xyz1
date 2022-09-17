#include <stdio.h>
#include "xyz.h"
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <stdint.h>

XYZ_Data g_xyz_data;

uint8_t temp_m[13];
uint8_t buffer[256];
int index= 0;

void init_umd(void)
{
    g_xyz_data.xyz0_count = 0;
    g_xyz_data.xyz1_count = 0;
    g_xyz_data.xyz2_count = 0;
    g_xyz_data.codeword = 0;
    g_xyz_data.idx = 0;
    g_xyz_data.bitmask = 0;
}

void process_xyz(uint8_t byte)
{
    //error handling
    uint8_t header_check[] = {'X', 'Y', 'Z', '!'};
    
     if (ind < 4 && header_check[ind] != byte)
        ind = 0;
    if (ind == 5 && byte > 2 )
        ind = 0;
    if (byte == 'X')
    {
        ind = 0;
        for (int i = 0; i < sizeof temp_m; i++)
            temp_m[i] = 0;
    }
}
