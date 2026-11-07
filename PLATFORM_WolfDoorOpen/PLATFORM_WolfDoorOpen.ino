#include <Servo.h>

Servo myservo;
Servo myservoBed;
const int buttonPin = 7;

void setup() {
  myservo.attach(2); //servo pin
  myservoBed.attach(12);
  pinMode(buttonPin, INPUT);

}

void loop() {
  if(digitalRead(buttonPin) == HIGH) {
    myservo.write(90);
    delay(1000);
    myservo.write(0);
    myservoBed.write(180);
  } else {
    myservo.write(0);
  }

}
