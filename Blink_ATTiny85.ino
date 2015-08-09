/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  This is only for ATTiny85 with arduino IDE .Here the arduino is used as ISP. 
  Beware - Load ArduinoISP from examples to arduino Board for making it as a programmer
  connect a suitable resistor say 220 ohm / 330 ohm to LED.
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(0, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);              // wait for a second
}
