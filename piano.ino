int buzzerPin = A5;
int Buttons[] = {2, 3, 4, 5};

void setup() {
  pinMode(buzzerPin, OUTPUT);
  for (int i = 0; i < 4; i++)
    pinMode(Buttons[i], INPUT_PULLUP);
}

void loop() {
  if (digitalRead(Buttons[0]) == LOW)
    tone(buzzerPin, 440);
  else if (digitalRead(Buttons[1]) == LOW)
    tone(buzzerPin, 494);
  else if (digitalRead(Buttons[2]) == LOW)
    tone(buzzerPin, 523);
  else if (digitalRead(Buttons[3]) == LOW)
    tone(buzzerPin, 587);
  else
    noTone(buzzerPin);
}
