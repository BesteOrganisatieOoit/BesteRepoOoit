#include "Blink.h"
#include <Arduino.h>

// Constructor to initialize the pin
Blink::Blink(int pin) {
  _pin = pin;
  pinMode(_pin, OUTPUT);  // Set the pin as an output
}

// This function toggles the LED on and off with the delay
void Blink::now() {
  digitalWrite(_pin, HIGH);  // Turn the LED on
  delay(_timeBetweenOnOffMillis);  // Wait for the specified time (1 second)
  digitalWrite(_pin, LOW);   // Turn the LED off
  delay(_timeBetweenOnOffMillis);  // Wait again for the same time (1 second)
}
