#ifndef XYZ_H
#define XYZ_H


#include <stdint.h>


typedef struct {
    uint32_t xyz0_count;
    uint32_t xyz1_count;
    uint32_t xyz2_count;
    uint32_t codeword;
    uint32_t idx;
    uint32_t bitmask;
} XYZ_Data;


extern XYZ_Data g_xyz_data;


/*******************************************************************************
 * This function initializes/resets the module to begin processing data.
 *
 * Note: This funciton will be called between successive tests, so ensure
 *       that it clears all state data to begin processing from scratch.
 ******************************************************************************/
void init_xyz(void);

/*******************************************************************************
 * This function will be called after each character is received from the UART.
 *
 * This function is responsible for maintaining the fields in g_xyz_data.
 *
 * Args:
 *   uint8_t byte -> one character received from the UART
 ******************************************************************************/
void process_xyz(uint8_t byte);


#endif