#include <Keyboard.h>

const int oneWayRange = 50;
const int upper = 512+oneWayRange;
const int lower = 512-oneWayRange;

void setup() {
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(A5, INPUT);

  Keyboard.begin();
}

void loop() {
  if (digitalRead(2) == LOW) {
    Keyboard.press('w');
  } else {
    Keyboard.release('w');
  }

  if (digitalRead(3) == LOW) {
    Keyboard.press('s');
  } else {
    Keyboard.release('s');
  }

  if (analogRead(A5) >= upper) {
    Keyboard.press('a');
  } else {
    Keyboard.release('a');
  }

  if (analogRead(A5) <= lower) {
    Keyboard.press('d');
  } else {
    Keyboard.release('d');
  }

  Serial.println(analogRead(A5));

  delay(1);
}