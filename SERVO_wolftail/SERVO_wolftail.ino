#include <Servo.h>

servo myservo;
const int buttonPin = 7;

void setup() {
  myservo.attach(2);
  pinMode(buttonPin, INPUT);

}

void loop() {
  if(digitalRead(buttonPin) == HIGH) {
    myservo.write(240);
    delay(200);
    myservo.write(0);
    delay(200);
  } else {
    myservo.write(0);s
  }

}
