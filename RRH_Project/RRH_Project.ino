// PINS FOR BREADBOARD + SERVOS

// Interaction 1 //
const int interaction_1 = 2; // RRH lands on platform to make eyes light up //Button Pin
const int LED_Eyes = 3;  // LED that lights up

#include <Servo.h>

// Interaction 2//
Servo servo_1;  // Wolf wags tail // Servo Pin 
const int interaction_2 = 4 // Button pin

// Interaction 3//
Servo servo_2; // Door opens to grandma's house ----- + Grandma flipping
Servo servo_Bed; // Bed servo
const int interaction_3 = 6 // Button pin 

// VOID SET UPS 

void setup() {
  //Interaction 1//
  pinMode(interaction_1, INPUT); //Interation 1
  pinMode(LED_Eyes, OUTPUT);

  //Interaction 2//
  servo_1.attach(5); //Pin for Servo 1
  pinMode(interaction_2, INPUT);

  //Interaction 3//
  servo_2.attach(7); //Pin for Servo 2
  servo_Bed.attach(8); //Pin for Bed Servo (Flipping)
  pinMode(interaction_3, INPUT);

  //Interaction 4//
}


void loop() {
  //Interaction 1//
  if(digitalRead(interaction_1) == HIGH){ //Wolf's eyes light up red
    digitalWrite(LED_Eyes, HIGH);
  } else {
    digitalWrite(LED_Eyes, LOW);
  }
  //Interaction 2//
  if(digitalRead(interaction_2) == HIGH){ //Wolf's tail wags
    servo_1.write(240);
    delay(200);
    servo_1.write(0);
    delay(200);
  } else {
    servo_1.write(0);
  }

  //Interaction 3//
  if(digitalRead(interaction_3) == HIGH){
    servo_2.write(90);
    delay(1000);
    servo_2.write(0);
    servo_Bed.write(180);
  } else {
    servo_2.write(0);
  }


}

