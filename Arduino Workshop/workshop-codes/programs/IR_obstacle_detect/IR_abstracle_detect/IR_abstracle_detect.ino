
int a=8;  //initialization

void setup() {
 pinMode(a,INPUT);
 Serial.begin(9600); 
 
}

void loop() {
 int b= digitalRead(a);
 if(b==LOW)
 {Serial.println("CAUTION!!!");
 delay(1000);}
}
