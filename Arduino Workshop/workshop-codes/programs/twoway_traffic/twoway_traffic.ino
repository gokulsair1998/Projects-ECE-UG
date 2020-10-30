
    int r1= 2;  //port declaration
    int y1= 3;
    int g1= 4;
    int r2= 5;
    int y2= 6;
    int g2= 7;


void setup() {
  
   
  pinMode(r1,OUTPUT);  //port state
  pinMode(g1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(y2,OUTPUT);
}

void loop() {
   digitalWrite(r1,HIGH);   //1st way
   digitalWrite(y1,LOW);
   digitalWrite(g1,LOW);
   
   digitalWrite(r2,LOW);   //2nd way
   digitalWrite(y2,LOW);
   digitalWrite(g2,HIGH);  
      delay(3000);
          
   digitalWrite(r1,LOW);    //1st way
   digitalWrite(y1,HIGH);
   digitalWrite(g1,LOW);
   
   digitalWrite(r2,LOW);    //2nd way
   digitalWrite(y2,HIGH);
   digitalWrite(g2,LOW);
      delay(500);
   
   digitalWrite(r1,LOW);    //1st way
   digitalWrite(y1,LOW);
   digitalWrite(g1,HIGH);
   
   digitalWrite(r2,HIGH);   //2nd way
   digitalWrite(y2,LOW);
   digitalWrite(g2,LOW);
     delay(3000);
  }
