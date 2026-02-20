#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Touch Detection System using TTP223
 * @author aarushi07-tech
 * @date 2026-02-20
 *
 * @details
 * Reads digital touch input from TTP223 sensor
 * and displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define touch sensor digital pin (Use pin 2)

 // TODO 2:
 // Create variable to store touch state

void setup() {

    pinMode(8, INPUT);
    pinMode(LED_BUILTIN, OUTPUT);


    digitalWrite(LED_BUILTIN, LOW);
}

void loop() {

    if(digitalRead(8) == HIGH) {
        digitalWrite(LED_BUILTIN, HIGH);
    } else {
        digitalWrite(LED_BUILTIN, LOW);
    }

    delay(100);
}
