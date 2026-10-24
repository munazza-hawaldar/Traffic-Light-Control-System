/*
  Traffic Light Control System - Arduino Uno

  One traffic signal with three LEDs (red, yellow, green).
  Each LED stays on for 2 seconds, then the next one lights up.

  Sequence: RED -> GREEN -> YELLOW -> RED -> ...

  Change the pin numbers below if your LEDs are wired to different pins.
*/

const int RED_PIN    = 2;
const int YELLOW_PIN = 3;
const int GREEN_PIN  = 4;

const unsigned long LIGHT_TIME = 2000;  // 2 seconds per light (milliseconds)

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

// Turn on one light and switch the other two off
void showLight(int pin) {
  digitalWrite(RED_PIN, LOW);
  digitalWrite(YELLOW_PIN, LOW);
  digitalWrite(GREEN_PIN, LOW);
  digitalWrite(pin, HIGH);
  delay(LIGHT_TIME);
}

void loop() {
  showLight(RED_PIN);     // Stop
  showLight(GREEN_PIN);   // Go
  showLight(YELLOW_PIN);  // Get ready to stop
}
