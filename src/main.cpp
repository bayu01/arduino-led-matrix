#include <Arduino.h>
#include "Arduino_LED_Matrix.h"   //Include the LED_Matrix library
#include "lilyNaya.h"            //Include animation.h header file

// Create an instance of the ArduinoLEDMatrix class
ArduinoLEDMatrix matrix;  

void setup() {
  Serial.begin(115200);
  // you can also load frames at runtime, without stopping the refresh
  matrix.loadSequence(lilyNaya);
  matrix.begin();
  // turn on autoscroll to avoid calling next() to show the next frame; the paramenter is in milliseconds
  matrix.autoscroll(1000);
  matrix.play(true);
}

void loop() {
  delay(500);
  Serial.println(millis());
}
