#include <Arduino.h>

void setup() {
  pinMode(23, OUTPUT);
}

void loop() {
  digitalWrite(23, HIGH);
  delay(500);
  digitalWrite(23, LOW);
  delay(500);
}
