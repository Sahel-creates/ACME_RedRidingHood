// PINS FOR BREADBOARD + SERVOS

// Interaction 1 //
const int interaction_1 = 11; // RRH lands on platform to make eyes light up //Button Pin
const int LED_Eyes = 10;  // LED that lights up

#include <Servo.h>

// Interaction 2 //
Servo servo_1;  // Wolf wags tail // Servo Pin 
const int interaction_2 = 3; // Button pin

// Interaction 3 //
Servo servo_2; // Door opens to grandma's house ----- + Grandma flipping
Servo servo_Bed; // Bed servo
const int interaction_3 = 6; // Button pin 

// Interaction 4 //
Servo servo_3; // Closet spin
const int interaction_4 = 13; // Button pin

// Interaction 5 //
const int interaction_5 = 9; // Button pin


// VOID SET UPS 
void setup() {

  //Interaction 1//
  pinMode(interaction_1, INPUT); //Interation 1
  pinMode(LED_Eyes, OUTPUT);

  //Interaction 2//
  servo_1.attach(2); //Pin for Servo 1
  pinMode(interaction_2, INPUT);

  //Interaction 3//
  servo_2.attach(5); //Pin for Servo 2
  servo_Bed.attach(8); //Pin for Bed Servo (Flipping)
  pinMode(interaction_3, INPUT);

  //Interaction 4//
  servo_3.attach(12); //Pin for Servo 3
  pinMode(interaction_4, INPUT);

  //Interaction 5//
  pinMode(interaction_5, INPUT);
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
    delay(5000);
    servo_2.write(0);
    servo_Bed.write(180);
  } else {
    servo_2.write(0);
  }

  //Interation 4//
  if(digitalRead(interaction_4) == HIGH){
    servo_3.write(180);
  }

  //Interation 5//
  if(digitalRead(interaction_5) == HIGH){
    //delay(1000);
    servo_Bed.write(0);
  }


}

