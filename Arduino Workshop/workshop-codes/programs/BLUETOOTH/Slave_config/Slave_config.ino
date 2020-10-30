/*
 * How to configure and pair two HC-05 Bluetooth Modules
 * by Dejan Nedelkovski, www.HowToMechatronics.com
 * 
 *                 == SLAVE CODE ==
 */
 
#include <Servo.h>

Servo myServo;
int state=20;

void setup() {
  
  myServo.attach(9);
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}
void loop() {
 if(Serial.available() > 0){ // Checks whether data is comming from the serial port
    state = Serial.read();
    Serial.println(state);// Reads the data from the serial port
 }
 // Controlling the servo motor
myServo.write(state);
 delay(100);
 
  
}
