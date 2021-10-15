/*
 * drivers.h
 *
 *  Created on: Oct 15, 2021
 *      Author: user
 */

#ifndef INC_DRIVERS_H_
#define INC_DRIVERS_H_

#include "gpio.h"
#include <stdint.h>

#define PIN_RED GPIO_PIN_15
#define PIN_YELLOW GPIO_PIN_14
#define PIN_GREEN GPIO_PIN_13

void switch_pin(uint16_t pin);
void blink (uint16_t pin, uint32_t delay, uint16_t times);
void _delay (uint32_t time);

#endif /* INC_DRIVERS_H_ */
