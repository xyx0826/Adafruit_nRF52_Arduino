 /*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_PCA10059_
#define _VARIANT_PCA10059_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (5)
#define NUM_DIGITAL_PINS     (5)
#define NUM_ANALOG_INPUTS    (0)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED1             (1)
#define PIN_LED2_RED         (2)
#define PIN_LED2_GREEN       (3)
#define PIN_LED2_BLUE        (4)

#define LED_BUILTIN          PIN_LED1
#define LED_CONN             PIN_LED1

#define LED_RED              PIN_LED2_RED
#define LED_BLUE             PIN_LED2_BLUE

#define LED_STATE_ON         0         // State when LED is litted

/*
 * Buttons
 */
#define PIN_BUTTON1          0

#define ADC_RESOLUTION    14

// Bad things happen if the serial pins aren't defined. Instead
// define them with an invalid pin number
// Serial
#define PIN_SERIAL1_RX       (3)
#define PIN_SERIAL1_TX       (3)


#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
