int buzzerPin = A5;
int Buttons[] = {2, 3, 4, 5,12};
int Leds[] = {6, 7, 8, 9, 10};
int tones[] = {440, 494, 523, 587, 659};

void setup() {
  pinMode(buzzerPin, OUTPUT);
  for (int i = 0; i < 5; i++) {
    pinMode(Buttons[i], INPUT_PULLUP);
    pinMode(Leds[i], OUTPUT);
  }
}

void loop() {
  bool active = false;

  for (int i = 0; i < 5; i++) {
    if (digitalRead(Buttons[i]) == LOW) {
      tone(buzzerPin, tones[i]);
      digitalWrite(Leds[i], HIGH);
      active = true;
    } else {
      digitalWrite(Leds[i], LOW);
    }
  }

  if (!active) {
    noTone(buzzerPin);
  }
}
