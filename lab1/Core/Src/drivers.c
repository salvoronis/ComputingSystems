/*
 * drivers.c
 *
 *  Created on: Oct 15, 2021
 *      Author: user
 */

#include "drivers.h"

void switch_pin(uint16_t pin) {
    HAL_GPIO_TogglePin(GPIOD, pin);
}

void _delay(uint32_t time) {
    HAL_Delay(time);
}

void blink(uint16_t pin, uint32_t delay, uint16_t times) {
    for (uint16_t i = 0; i < times; i++) {
    	switch_pin(pin);
    	_delay(delay);
    	switch_pin(pin);
    	_delay(delay);
    }
}
