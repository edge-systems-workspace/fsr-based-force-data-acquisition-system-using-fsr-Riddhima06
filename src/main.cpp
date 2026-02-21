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

int fsrValue;

void setup() {

    Serial.begin(9600);

    Serial.println("FSR Force Measurement System Initialized");
}

void loop() {

    fsrValue = analogRead(fsrPin);

    Serial.println(fsrValue);

    if(fsrValue > 500) {
        Serial.println("Pressure detected!");
    }

    // TODO 9:
    // Add delay (500ms or 1 second)
}
