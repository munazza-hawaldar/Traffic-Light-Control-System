/*
  Traffic Light Control System
  Board : Arduino Uno
  LEDs  : Red, Yellow, Green (single signal)
  Timing: each light stays ON for 2 seconds

  Sequence: RED -> GREEN -> YELLOW -> RED ...

  Change the pin numbers below to match your wiring.
*/

const int RED_PIN    = 8;
const int YELLOW_PIN = 9;
const int GREEN_PIN  = 10;

const unsigned long LIGHT_TIME_MS = 2000;  // 2 seconds per light

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

// Turn exactly one light ON for LIGHT_TIME_MS, all others OFF
void showLight(int pin) {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);

  digitalWrite(pin, HIGH);
  delay(LIGHT_TIME_MS);
}

void loop() {
  showLight(RED_PIN);
  showLight(GREEN_PIN);
  showLight(YELLOW_PIN);
}
