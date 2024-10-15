#include "Blink.h"

Blink ledBlink(13);  // Create a Blink object for pin 13 (usually the built-in LED)

void setup() {
  // No setup needed for this example since the Blink constructor handles pin setup
}

void loop() {
  ledBlink.now();  // Blink the LED
}
