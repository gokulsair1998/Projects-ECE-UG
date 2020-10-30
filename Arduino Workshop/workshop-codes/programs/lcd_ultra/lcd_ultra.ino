#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distance;

void setup() {
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT);
Serial.begin(9600); 
lcd.begin(16, 2); 

}



void loop() {
            
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
          
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);       
duration = pulseIn(echoPin, HIGH);
distance= duration*0.034/2;
Serial.print( "Distance:");
Serial.println(distance);

lcd.print("Distance:");
lcd.setCursor(0, 1);
  lcd.print(distance);
  delay(100);
  lcd.clear();
  
}
