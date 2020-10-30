    int r1= 2;  //port declaration
    int y1= 3;
    int g1= 4;
    int r2= 5;
    int y2= 6;
    int g2= 7;
    int intrr= 8;

void setup() {
  
   
  pinMode(r1,OUTPUT);  //port state
  pinMode(g1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(y2,OUTPUT);
  pinMode(intrr,INPUT);

  initial();
for(int i=0;i<4;i++){
  digitalWrite(y1,HIGH);
  digitalWrite(y2,HIGH);
  delay(500); 
  digitalWrite(y1,LOW);
  digitalWrite(y2,LOW); 
  delay(500);
  
}
}

 void initial(){
   digitalWrite(r1,LOW);   //iNiTiAlIzAtIoN
   digitalWrite(y1,LOW);
   digitalWrite(g1,LOW);
   digitalWrite(r2,LOW);   
   digitalWrite(y2,LOW);
   digitalWrite(g2,LOW); 
 }

void working()
  {
   digitalWrite(r1,HIGH);  //actaual code flow
   digitalWrite(y1,LOW);
   digitalWrite(g1,LOW);
   if(r1==HIGH)
      digitalWrite(g2,HIGH);
      delay(3000);
      initial();
      
   digitalWrite(r1,LOW);
   digitalWrite(y1,HIGH);
   digitalWrite(g1,LOW);
   if(y1==HIGH)
      digitalWrite(y2,HIGH);
      delay(200);
      initial();

     
   digitalWrite(r1,LOW);
   digitalWrite(y1,LOW);
   digitalWrite(g1,HIGH);
   if(g1==HIGH)
      digitalWrite(r2,HIGH);
      delay(3000);
      initial();
  }
  void caution(){
   digitalWrite(r1,HIGH);   //iNiTiAlIzAtIoN
   digitalWrite(y1,LOW);
   digitalWrite(g1,LOW);
   digitalWrite(r2,HIGH);   
   digitalWrite(y2,LOW);
   digitalWrite(g2,LOW); 
    }
void loop() {
 int ir= digitalRead(intrr);
 if(ir==LOW)
 caution();
 else
 working();
  
  
   }
