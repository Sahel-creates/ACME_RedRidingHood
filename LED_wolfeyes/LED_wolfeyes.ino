const int buttonPin = 7;
const int LED_Eyes = 13;

void setup() {
  pinMode (buttonPin, INPUT);
  pinMode(LED_Eyes, OUTPUT);

}

void loop() {
  if (digitalRead(buttonPin) == HIGH) {
    digitalWrite (LED_Eyes, HIGH);
  } else {
    digitalWrite(LED_Eyes, LOW);
  }

}
