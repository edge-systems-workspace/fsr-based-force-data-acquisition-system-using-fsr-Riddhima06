#include <Arduino.h>
/**
 * @file main.ino
 * @brief Embedded Force Measurement System using FSR
 * @author Riddhima Rajput
 * @date 2026-02-21
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

int fsrPin = A0;

 // TODO 2:
 // Create variable to store sensor reading

void setup() {

    // TODO 3:
    // Initialize Serial communication (9600 baud rate)

    // TODO 4:
    // Print system initialization message
}

void loop() {

    // TODO 5:
    // Read analog value from FSR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)

    // TODO 8:
    // Print pressure detection message

    // TODO 9:
    // Add delay (500ms or 1 second)
}
