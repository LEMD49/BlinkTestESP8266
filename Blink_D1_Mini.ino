/*
  Testing Dx pins one by one.
  The D4 - GPIO2 pin is also connected to LED_BUILTIN which itself works active low.
  For external LED used active high as for arduino

  19 feb 2017
  Blink  pins
  Etienne Maricq

*/

//define pin of interest. It refers to the GPIO pin not de Dx pin of dev board

//int ledPin = 16; //GPIO16 pin D0   works ok
//int ledPin = 5; //GPIO5 pin D1  works ok
//int ledPin = 4; //GPIO4 pin D2  works ok
//int ledPin = 0; //GPIO0 pin D3 works ok
//int ledPin = 2; //GPIO2 pin D4 works ok  (LED_BUILTIN is also lighting on inverted logic, active low)
//int ledPin = 14; //GPIO14 is D5 works ok
//int ledPin = 12; //GPIO12 is D6 works ok
//int ledPin = 13; //GPIO13 is D7 works ok
int ledPin = 15; //GPIO15 is D8 works ok



void setup() {
  pinMode(ledPin, OUTPUT);     //init as output
  
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, LOW);   //off for 1 second
  delay(1000);                     
  digitalWrite(ledPin, HIGH);  // on for 5 seconds (asimetric so can tell High and Low sent
  delay(5000);                     
}
