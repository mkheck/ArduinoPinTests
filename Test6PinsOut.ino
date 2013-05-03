/*
  Test6PinsOut
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  Copyright (c) 2013, Mark A. Heckler (@MkHeck, mark.heckler@gmail.com).
  Reuse of this code, with attribution, is allowed & encouraged.
  I hope you find it useful!
 */
 
// Plug six pins into this array to be tested.
int led[6] = {8, 9, 10, 11, 12, 13};

// Configure the pins for the light show.
void setup() {
  for (int i=0; i<6; i++) {
    // Initialize the digital pin as OUTPUT.
    pinMode(led[i], OUTPUT);
  }
}

// Testing 1, 2, 3...
void loop() {
  for (int i=0; i<6; i++) {
    digitalWrite(led[i], HIGH);   // Turn the LED on (voltage HIGH),
    delay(1000);                  // wait for a second (literally),
    digitalWrite(led[i], LOW);    // turn the LED off by taking the voltage LOW,
    delay(1000);                  // & wait for a second to conclude the loop.
  }
}
