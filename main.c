/*
 * Author: Daniel Hickey
 * Device: PIC18F04Q40 
 */

#ifndef _18F13K50
#define _18F13K50
#endif

#include "mcc_generated_files/mcc.h"
#include "Functions/comms.h"
#include "Functions/values.h"

/*
                         Main application
 */
void main(void)
{
    // Initialize the device
    SYSTEM_Initialize();
    
    value_Initialise();
        
    while (1)
    {
        // Transmit the values of the two temperature probes.
        send(TEMP_1.pin,TEMP_1.getTemperature(&TEMP_1));
        send(TEMP_2.pin,TEMP_2.getTemperature(&TEMP_2));
        
        // Transmit the values of the two hall effect sensors.
        send(HALL_1.pin,HALL_1.getHall(&HALL_1));
        send(HALL_2.pin,HALL_2.getHall(&HALL_2));
        
        // Transmit the vibration values.
        send(VIB.pin,VIB.getVibration(&VIB));
        
        // Transmit the noise value.
        send(NOISE.pin,NOISE.getNoise(&NOISE));
        
        // Reads the UART input to configure sensor outputs.
        update();
    }
}

/*
 End of File
*/