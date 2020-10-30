
    int r1= 8;  //port declaration
    int y1= 3;
    int g1= 4;
    int r2= 5;
    int y2= 6;
    int g2= 7;
    int intrr =2;

void setup() {
  Serial.begin(9600);
   
  pinMode(r1,OUTPUT);  //port state
  pinMode(g1,OUTPUT);
  pinMode(y1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(g2,OUTPUT);
  pinMode(y2,OUTPUT);
  attachInterrupt(digitalPinToInterrupt(intrr), caution, LOW);
  
  initial();
for(int i=0;i<4;i++){
  digitalWrite(y1,HIGH);
  digitalWrite(y2,HIGH);
  delay(500); 
  digitalWrite(y1,LOW);
  digitalWrite(y2,LOW); 
  delay(500);
  
}}
 void initial(){
   digitalWrite(r1,LOW);   //iNiTiAlIzAtIoN
   digitalWrite(y1,LOW);
   digitalWrite(g1,LOW);
   digitalWrite(r2,LOW);   
   digitalWrite(y2,LOW);
   digitalWrite(g2,LOW); 
 }


  void caution(){
   digitalWrite(r1,HIGH);   //iNiTiAlIzAtIoN
   digitalWrite(y1,LOW);
   digitalWrite(g1,LOW);
   digitalWrite(r2,HIGH);   
   digitalWrite(y2,LOW);
   digitalWrite(g2,LOW); 
   Serial.println("caution");
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
