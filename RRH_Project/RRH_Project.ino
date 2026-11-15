const int interaction_1 = 2; // Interaction 1 RRH lands on platform to make eyes light up //Button Pin
const int LED_Eyes = 3;  // Interaction 1 LED that lights up (1)

#include <Servo.h>

Servo servo_1;  // Interaction 2 Wolf wags tail // Servo Pin 
const int interaction_2 = 4 //Button pin for Interaction 2

void setup() {
  pinMode(interaction_1, INPUT); //Interation 1
  pinMode(LED_Eyes, OUTPUT);

  servo_1.attach(5); //Interation 2 //Pin for Servo 1
  pinMode(interation_2, INPUT);
}


void loop() {
  if(digitalRead(interation_1) == HIGH){ //Wolf's eyes light up red
    digitalWrite(LED_Eyes, HIGH);
  } else {
    digitalWrite(LED_Eyes, LOW);
  }

  if(digitalRead(interation_2) == HIGH){ //Wolf's tail wags
    servo_1.write(240);
    delay(200);
    servo_1.write(0);
    delay(200);
  } else {
    servo_1.write(0);
  }

}

