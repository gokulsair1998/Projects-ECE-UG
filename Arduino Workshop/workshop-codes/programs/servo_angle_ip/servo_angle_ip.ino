/*
 Controlling a servo position using a potentiometer (variable resistor)
 by Michal Rinott <http://people.interaction-ivrea.it/m.rinott>

 modified on 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Knob
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
Serial.begin(9600);
}

void loop() {
  int val=input();
  myservo.write(val);                  // sets the servo position according to the scaled value
  delay(15);                           // waits for the servo to get there
}




int input()
{
if (Serial.available()) {
    // read the incoming byte:
    int i_p = Serial.parseInt();
    // say what you got:
    if(i_p!=0){
     Serial.print("I received: ");
    Serial.println(i_p);
    return(i_p);
    }
}
}
