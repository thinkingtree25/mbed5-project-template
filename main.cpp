/* mbed Microcontroller Library
 * Copyright (c) 2018 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS 500

DigitalOut led1(LED1);

// main() runs in its own thread in the OS
int main()
{
    while (true) {
        // Blink LED and wait 0.5 seconds
        led1 = !led1;
        thread_sleep_for(BLINKING_RATE_MS);
    }
}
