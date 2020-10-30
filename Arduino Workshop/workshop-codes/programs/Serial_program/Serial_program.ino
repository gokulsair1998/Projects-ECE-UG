int a=A0;

void setup() {
  pinMode(a,INPUT);
  Serial.begin(9600);
  }

void loop() {
  int b=analogRead(a);
   Serial.println(b);
   delay(100);
}
