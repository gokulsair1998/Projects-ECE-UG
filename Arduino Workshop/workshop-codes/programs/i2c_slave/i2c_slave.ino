
// Include Arduino Wire library for I2C
#include <Wire.h>
 
// Define Slave I2C Address
#define SLAVE_ADDR 9
 
// Define LED Pin
int LED = 6;//a multiplexed pin
 
// Variable for received data
int recieved_data;
 
void setup() {
 
  pinMode(LED, OUTPUT);
  
  // Initialize I2C communications as Slave
  Wire.begin(SLAVE_ADDR);
   
  // Function to run when data received from master
  Wire.onReceive(data_frm_master);
  
  // Setup Serial Monitor 
  Serial.begin(9600);
  Serial.println("I2C Slave Demonstration");
}
 
 
void data_frm_master() {
  // read one character from the I2C
  recieved_data = Wire.read();
  // Print value of incoming data
  Serial.println(recieved_data);
    
}
void loop() {
   delay(50);
  analogWrite(LED,recieved_data);
}
