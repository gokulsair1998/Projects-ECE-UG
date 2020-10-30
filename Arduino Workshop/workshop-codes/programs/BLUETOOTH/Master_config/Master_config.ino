

int potValue = 0;
void setup() {
  pinMode(A0,INPUT);
  Serial.begin(38400); // Default communication rate of the Bluetooth module
}
void loop() {
 // Reading the potentiometer
 potValue = analogRead(A0);
 int potValueMapped = map(potValue, 0, 1023, 0, 255);
 Serial.write(potValueMapped); // Sends potValue to servo motor
 delay(10);
} 