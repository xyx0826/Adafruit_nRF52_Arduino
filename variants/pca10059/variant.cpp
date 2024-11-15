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

#include "variant.h"

#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

#define _PINNUM(port, pin) ((port)*32 + (pin))

const uint32_t g_ADigitalPinMap[] =
{
  _PINNUM(1, 6),  // SW1
  _PINNUM(0, 6),  // LD1
  _PINNUM(0, 8),  // LD2_R
  _PINNUM(1, 9),  // LD2_G
  _PINNUM(0, 12), // LD2_B
};

void initVariant()
{
  // LED1 & LED2
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);

  pinMode(PIN_LED2_RED, OUTPUT);
  ledOff(PIN_LED2_RED);

  pinMode(PIN_LED2_GREEN, OUTPUT);
  ledOff(PIN_LED2_GREEN);

  pinMode(PIN_LED2_BLUE, OUTPUT);
  ledOff(PIN_LED2_BLUE);
}
