#include <Servo.h>

Servo myservo;  // create servo object to control a servo
int sensepin=4;

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(sensepin,INPUT);
}

void loop() {
  myservo.write(0); 
  if(sensepin==LOW)
  {
  myservo.write(90);                  // sets the servo position according to the scaled value
  delay(4000);                           // waits for the servo to get there
  }
}
