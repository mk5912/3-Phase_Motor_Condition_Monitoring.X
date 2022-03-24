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
        Device            :  PIC18F13K50
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

// get/set adc_VIB aliases
#define adc_VIB_TRIS                 TRISAbits.TRISA4
#define adc_VIB_LAT                  LATAbits.LATA4
#define adc_VIB_PORT                 PORTAbits.RA4
#define adc_VIB_WPU                  WPUAbits.WPUA4
#define adc_VIB_ANS                  ANSELbits.ANS3
#define adc_VIB_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define adc_VIB_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define adc_VIB_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define adc_VIB_GetValue()           PORTAbits.RA4
#define adc_VIB_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define adc_VIB_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define adc_VIB_SetPullup()          do { WPUAbits.WPUA4 = 1; } while(0)
#define adc_VIB_ResetPullup()        do { WPUAbits.WPUA4 = 0; } while(0)
#define adc_VIB_SetAnalogMode()      do { ANSELbits.ANS3 = 1; } while(0)
#define adc_VIB_SetDigitalMode()     do { ANSELbits.ANS3 = 0; } while(0)

// get/set adc_HALL2 aliases
#define adc_HALL2_TRIS                 TRISBbits.TRISB4
#define adc_HALL2_LAT                  LATBbits.LATB4
#define adc_HALL2_PORT                 PORTBbits.RB4
#define adc_HALL2_WPU                  WPUBbits.WPUB4
#define adc_HALL2_ANS                  ANSELHbits.ANS10
#define adc_HALL2_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define adc_HALL2_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define adc_HALL2_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define adc_HALL2_GetValue()           PORTBbits.RB4
#define adc_HALL2_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define adc_HALL2_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define adc_HALL2_SetPullup()          do { WPUBbits.WPUB4 = 1; } while(0)
#define adc_HALL2_ResetPullup()        do { WPUBbits.WPUB4 = 0; } while(0)
#define adc_HALL2_SetAnalogMode()      do { ANSELHbits.ANS10 = 1; } while(0)
#define adc_HALL2_SetDigitalMode()     do { ANSELHbits.ANS10 = 0; } while(0)

// get/set RB5 procedures
#define RB5_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define RB5_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define RB5_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define RB5_GetValue()              PORTBbits.RB5
#define RB5_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define RB5_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define RB5_SetPullup()             do { WPUBbits.WPUB5 = 1; } while(0)
#define RB5_ResetPullup()           do { WPUBbits.WPUB5 = 0; } while(0)
#define RB5_SetAnalogMode()         do { ANSELHbits.ANS11 = 1; } while(0)
#define RB5_SetDigitalMode()        do { ANSELHbits.ANS11 = 0; } while(0)

// get/set RB7 procedures
#define RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define RB7_GetValue()              PORTBbits.RB7
#define RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define RB7_SetPullup()             do { WPUBbits.WPUB7 = 1; } while(0)
#define RB7_ResetPullup()           do { WPUBbits.WPUB7 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELbits.ANS4 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELbits.ANS4 = 0; } while(0)

// get/set adc_HALL1 aliases
#define adc_HALL1_TRIS                 TRISCbits.TRISC2
#define adc_HALL1_LAT                  LATCbits.LATC2
#define adc_HALL1_PORT                 PORTCbits.RC2
#define adc_HALL1_ANS                  ANSELbits.ANS6
#define adc_HALL1_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define adc_HALL1_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define adc_HALL1_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define adc_HALL1_GetValue()           PORTCbits.RC2
#define adc_HALL1_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define adc_HALL1_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define adc_HALL1_SetAnalogMode()      do { ANSELbits.ANS6 = 1; } while(0)
#define adc_HALL1_SetDigitalMode()     do { ANSELbits.ANS6 = 0; } while(0)

// get/set adc_TEMP1 aliases
#define adc_TEMP1_TRIS                 TRISCbits.TRISC3
#define adc_TEMP1_LAT                  LATCbits.LATC3
#define adc_TEMP1_PORT                 PORTCbits.RC3
#define adc_TEMP1_ANS                  ANSELbits.ANS7
#define adc_TEMP1_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define adc_TEMP1_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define adc_TEMP1_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define adc_TEMP1_GetValue()           PORTCbits.RC3
#define adc_TEMP1_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define adc_TEMP1_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define adc_TEMP1_SetAnalogMode()      do { ANSELbits.ANS7 = 1; } while(0)
#define adc_TEMP1_SetDigitalMode()     do { ANSELbits.ANS7 = 0; } while(0)

// get/set adc_TEMP2 aliases
#define adc_TEMP2_TRIS                 TRISCbits.TRISC6
#define adc_TEMP2_LAT                  LATCbits.LATC6
#define adc_TEMP2_PORT                 PORTCbits.RC6
#define adc_TEMP2_ANS                  ANSELHbits.ANS8
#define adc_TEMP2_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define adc_TEMP2_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define adc_TEMP2_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define adc_TEMP2_GetValue()           PORTCbits.RC6
#define adc_TEMP2_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define adc_TEMP2_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define adc_TEMP2_SetAnalogMode()      do { ANSELHbits.ANS8 = 1; } while(0)
#define adc_TEMP2_SetDigitalMode()     do { ANSELHbits.ANS8 = 0; } while(0)

// get/set adc_NOISE aliases
#define adc_NOISE_TRIS                 TRISCbits.TRISC7
#define adc_NOISE_LAT                  LATCbits.LATC7
#define adc_NOISE_PORT                 PORTCbits.RC7
#define adc_NOISE_ANS                  ANSELHbits.ANS9
#define adc_NOISE_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define adc_NOISE_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define adc_NOISE_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define adc_NOISE_GetValue()           PORTCbits.RC7
#define adc_NOISE_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define adc_NOISE_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define adc_NOISE_SetAnalogMode()      do { ANSELHbits.ANS9 = 1; } while(0)
#define adc_NOISE_SetDigitalMode()     do { ANSELHbits.ANS9 = 0; } while(0)

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