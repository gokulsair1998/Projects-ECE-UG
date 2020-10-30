
    int red   =2;
    int yellow=3;
    int green =4;


void setup() {
  
   
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(yellow,OUTPUT);
}

void loop() {
   digitalWrite(red,HIGH);
   digitalWrite(yellow,LOW);
   digitalWrite(green,LOW);
      delay(3000);
      
   digitalWrite(red,LOW);
   digitalWrite(yellow,HIGH);
   digitalWrite(green,LOW);
      delay(200);
   
   digitalWrite(red,LOW);
   digitalWrite(yellow,LOW);
   digitalWrite(green,HIGH);
     delay(10000);
  }
