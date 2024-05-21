#include <Arduino.h>
#define onboardLED 13
#define LEDpin 7

void setup() {
  // put your setup code here, to run once:
  pinMode(onboardLED, OUTPUT);
  pinMode(LEDpin, OUTPUT);
  
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
//digitalWrite(onboardLED,LOW);
digitalWrite(LEDpin,LOW);
delay(1000);
//digitalWrite(onboardLED,HIGH);
digitalWrite(LEDpin,HIGH);
delay(1000);
Serial.println("Loop completed");
}