/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.7
        Device            :  PIC18F04Q40
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.31 and above
        MPLAB 	          :  MPLAB X 5.45	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSELA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSELA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSELA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSELA2 = 0; } while(0)

// get/set adc_NOISE aliases
#define adc_NOISE_TRIS                 TRISAbits.TRISA4
#define adc_NOISE_LAT                  LATAbits.LATA4
#define adc_NOISE_PORT                 PORTAbits.RA4
#define adc_NOISE_WPU                  WPUAbits.WPUA4
#define adc_NOISE_OD                   ODCONAbits.ODCA4
#define adc_NOISE_ANS                  ANSELAbits.ANSELA4
#define adc_NOISE_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define adc_NOISE_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define adc_NOISE_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define adc_NOISE_GetValue()           PORTAbits.RA4
#define adc_NOISE_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define adc_NOISE_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define adc_NOISE_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define adc_NOISE_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define adc_NOISE_SetPushPull()        do { ODCONAbits.ODCA4 = 0; } while(0)
#define adc_NOISE_SetOpenDrain()       do { ODCONAbits.ODCA4 = 1; } while(0)
#define adc_NOISE_SetAnalogMode()      do { ANSELAbits.ANSELA4 = 1; } while(0)
#define adc_NOISE_SetDigitalMode()     do { ANSELAbits.ANSELA4 = 0; } while(0)

// get/set adc_VIB aliases
#define adc_VIB_TRIS                 TRISAbits.TRISA5
#define adc_VIB_LAT                  LATAbits.LATA5
#define adc_VIB_PORT                 PORTAbits.RA5
#define adc_VIB_WPU                  WPUAbits.WPUA5
#define adc_VIB_OD                   ODCONAbits.ODCA5
#define adc_VIB_ANS                  ANSELAbits.ANSELA5
#define adc_VIB_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define adc_VIB_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define adc_VIB_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define adc_VIB_GetValue()           PORTAbits.RA5
#define adc_VIB_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define adc_VIB_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define adc_VIB_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define adc_VIB_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define adc_VIB_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define adc_VIB_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define adc_VIB_SetAnalogMode()      do { ANSELAbits.ANSELA5 = 1; } while(0)
#define adc_VIB_SetDigitalMode()     do { ANSELAbits.ANSELA5 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSELC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set adc_HALL1 aliases
#define adc_HALL1_TRIS                 TRISCbits.TRISC1
#define adc_HALL1_LAT                  LATCbits.LATC1
#define adc_HALL1_PORT                 PORTCbits.RC1
#define adc_HALL1_WPU                  WPUCbits.WPUC1
#define adc_HALL1_OD                   ODCONCbits.ODCC1
#define adc_HALL1_ANS                  ANSELCbits.ANSELC1
#define adc_HALL1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define adc_HALL1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define adc_HALL1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define adc_HALL1_GetValue()           PORTCbits.RC1
#define adc_HALL1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define adc_HALL1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define adc_HALL1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define adc_HALL1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define adc_HALL1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define adc_HALL1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define adc_HALL1_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define adc_HALL1_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set adc_HALL2 aliases
#define adc_HALL2_TRIS                 TRISCbits.TRISC2
#define adc_HALL2_LAT                  LATCbits.LATC2
#define adc_HALL2_PORT                 PORTCbits.RC2
#define adc_HALL2_WPU                  WPUCbits.WPUC2
#define adc_HALL2_OD                   ODCONCbits.ODCC2
#define adc_HALL2_ANS                  ANSELCbits.ANSELC2
#define adc_HALL2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define adc_HALL2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define adc_HALL2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define adc_HALL2_GetValue()           PORTCbits.RC2
#define adc_HALL2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define adc_HALL2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define adc_HALL2_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define adc_HALL2_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define adc_HALL2_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define adc_HALL2_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define adc_HALL2_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define adc_HALL2_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set adc_TEMP2 aliases
#define adc_TEMP2_TRIS                 TRISCbits.TRISC3
#define adc_TEMP2_LAT                  LATCbits.LATC3
#define adc_TEMP2_PORT                 PORTCbits.RC3
#define adc_TEMP2_WPU                  WPUCbits.WPUC3
#define adc_TEMP2_OD                   ODCONCbits.ODCC3
#define adc_TEMP2_ANS                  ANSELCbits.ANSELC3
#define adc_TEMP2_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define adc_TEMP2_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define adc_TEMP2_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define adc_TEMP2_GetValue()           PORTCbits.RC3
#define adc_TEMP2_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define adc_TEMP2_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define adc_TEMP2_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define adc_TEMP2_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define adc_TEMP2_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define adc_TEMP2_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define adc_TEMP2_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define adc_TEMP2_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set adc_TEMP1 aliases
#define adc_TEMP1_TRIS                 TRISCbits.TRISC4
#define adc_TEMP1_LAT                  LATCbits.LATC4
#define adc_TEMP1_PORT                 PORTCbits.RC4
#define adc_TEMP1_WPU                  WPUCbits.WPUC4
#define adc_TEMP1_OD                   ODCONCbits.ODCC4
#define adc_TEMP1_ANS                  ANSELCbits.ANSELC4
#define adc_TEMP1_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define adc_TEMP1_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define adc_TEMP1_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define adc_TEMP1_GetValue()           PORTCbits.RC4
#define adc_TEMP1_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define adc_TEMP1_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define adc_TEMP1_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define adc_TEMP1_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define adc_TEMP1_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define adc_TEMP1_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define adc_TEMP1_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define adc_TEMP1_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 procedures
#define RC5_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define RC5_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define RC5_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define RC5_GetValue()              PORTCbits.RC5
#define RC5_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define RC5_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define RC5_SetPullup()             do { WPUCbits.WPUC5 = 1; } while(0)
#define RC5_ResetPullup()           do { WPUCbits.WPUC5 = 0; } while(0)
#define RC5_SetAnalogMode()         do { ANSELCbits.ANSELC5 = 1; } while(0)
#define RC5_SetDigitalMode()        do { ANSELCbits.ANSELC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/