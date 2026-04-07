// Simple LED Chase Effect

int ledPins[] = {4,5,6,7,8,9,10,11,12,13};

void setup() {
  // Set all pins as OUTPUT
  for (int i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Turn LEDs on one by one
  for (int i = 0; i < 10; i++) {
    digitalWrite(ledPins[i], HIGH); // ON
    delay(200);                     // wait
    digitalWrite(ledPins[i], LOW);  // OFF
  }
}
