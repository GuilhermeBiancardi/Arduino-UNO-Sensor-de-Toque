/**
 * Sensor 5v
 */

#include <Arduino.h>

#define pinSig 2

void setup() {
    Serial.begin(9600);
    pinMode(pinSig, INPUT);
}

void loop() {
    if (digitalRead(pinSig) == HIGH) {
        Serial.println("Toque detectado!");
    }
}