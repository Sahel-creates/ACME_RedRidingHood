const int interaction_1 = 2; // Interaction 1 RRH lands on platform to make eyes light up
const int LED_Eyes = 3;  // Interaction 1 LED that lights up (1)


void setup() {
  pinMode(interaction_1, INPUT);
  pinMode(LED_Eyes, OUTPUT);
}


void loop() {
  if(digitalRead(buttonPin) == HIGH){
    digitalWrite(LED_Eyes, HIGH);
  } else {
    digitalWrite(LED_Eyes, LOW);
  }
}

