#define LED_PIN 11
#define BUTTON_PIN 2
void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}
void loop() {
  if (digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, LOW);
  }
  else {
    digitalWrite(LED_PIN, HIGH);
  }
}
