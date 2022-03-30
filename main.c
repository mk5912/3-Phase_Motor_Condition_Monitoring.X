/*
 * Author: Daniel Hickey
 * Device: PIC18F13K50 
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
    // Initialise the device
    SYSTEM_Initialize();
    
    values_Initialise();
        
    while (1)
    {
        // Transmit the values of the two temperature probes.
        send("TEMP_1",getTemperature(TEMP_1));
        send("TEMP_2",getTemperature(TEMP_2));
        
        // Transmit the values of the two hall effect sensors.
        send("HALL_1",getHall(HALL_1));
        send("HALL_2",getHall(HALL_2));
        
        // Transmit the vibration values.
        send("VIB",getVibration(VIB));
        
        // Transmit the noise value.
        send("NOISE",getNoise(NOISE));
    }
}

/*
 End of File
*/
