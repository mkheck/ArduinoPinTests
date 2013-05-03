/*
  Test2PinsIn
  Tests digital "In" on two pins. Test equipment used: one push-and-lock
  switch that has three legs on each side; two form ground circuit when 
  switch is up (green/black), two form "pin circuit" when switch is 
  down (red/black).
 
  Copyright (c) 2013, Mark A. Heckler (@MkHeck, mark.heckler@gmail.com).
  Reuse of this code, with attribution, is allowed & encouraged.
  I hope you find it useful!
 */
 
// Plug two pins into this array to be tested.
int led[6] = {12, 13};
int value;

// Configure the pins for the light show...
void setup() {
  Serial.begin(9600);
  
  for (int i=0; i<2; i++) {
    // Initialize the pin as OUTPUT to send it a "low" signal - useful for
    // occasions when a pin seems "stuck HIGH" and you want to verify it can't
    // simply be reset to behave normally...
    pinMode(led[i], OUTPUT);
    digitalWrite(led[i], LOW);
    
    // ...and now initialize the digital pin as INPUT for the test.
    pinMode(led[i], INPUT);
  }
}

// Testing 1, 2, 3...
void loop() {
  for (int i=0; i<2; i++) {
    value = digitalRead(led[i]); // Read the pin, determine LOW or HIGH value
    Serial.print("Pin ");
    Serial.print(i);
    Serial.print(", High?==");
    Serial.println(value==HIGH);
    delay(1000);               // wait for a second
  }
}
