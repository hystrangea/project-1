/*
  DigitalReadSerial

  Reads a digital input on pin 2, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

 
#include <Adafruit_CircuitPlayground.h>
 
int pushButton = A5; //digital pin
int speaker = 3; //speaker

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT_PULLUP); //pullup internal resistor
  CircuitPlayground.begin();
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int buttonState = digitalRead(pushButton);
  // print out the state of the button:
  Serial.println(buttonState);
  delay(1);        // delay in between reads for stability

  if (pushButton == LOW);
    tone(3,440);
  else (pushButton == HIGH);
  noTone(3); 
  }
}
