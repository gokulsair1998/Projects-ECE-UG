#include <Servo.h>
int val;
int a=a0;
Servo s1;  // create servo object to control a servo

void setup() {
 s1.attach(9);  // attaches the servo on pin 9 to the servo object
 pinMode(a,INPUT);
}

void loop() {
  map(a,0,255,0,180);
  for(a=val;a<val;val++)
  {{s1.write(val);
  delay(100);}
 
  
  
}
