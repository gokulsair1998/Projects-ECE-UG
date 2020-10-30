#include <SD.h>  // need to include the SD library
//#define SD_ChipSelectPin 53 //example uses hardware SS pin 53 on Mega2560

#define SD_ChipSelectPin 4 //using digital pin 4 on arduino nano 328, can use other pins
#include <TMRpcm.h> // also need to include this library... #include <SPI.h>
TMRpcm tmrpcm; 
int s1=A0;
int s2=A1; 
int s3=A2; 
int s4=A3;
int flex1,flex2,flex3,flex4; 
void setup() {
tmrpcm.speakerPin = 9; //5,6,11 or 46 on Mega, 9 on Uno, Nano, etc Serial.begin(9600);

if (!SD.begin(SD_ChipSelectPin)) { // see if the card is present and can be initialized:
Serial.println("SD fail");
return; // don't do anything more if not

}
delay(1000);
 
tmrpcm.play("intro.wav"); //the sound file "music" will play each time the arduino powers up, or is reset
Serial.println("This is a Sign to speech converter demonstrated by Abhishek Rakshith Gowrav and Gokul");
pinMode(s1,INPUT); 
pinMode(s2,INPUT); 
pinMode(s3,INPUT); 
pinMode(s4,INPUT);
}
void loop() {
//reading of all the flex sensor value flex1=analogRead(s1); flex2=analogRead(s2); flex3=analogRead(s3); flex4=analogRead(s4);

//to check whether the sensor value is set to minimum and maximum value
//before which calculate min and max values in sensor check func change valsss accordingly
sensorcheck();


//maping of the flex sensor values
//retrace the first two values written in the map function ie..find out the min and max values of each sensor
int flexm1=map(flex1,924,1001,0,50);
 
int flexm2=map(flex2,0,200,100,150); 
int flexm3=map(flex3,944,982,200,250); 
int flexm4=map(flex4,837,930,300,350); 
Serial.println(flexm1); 
Serial.println(flexm2); 
Serial.println(flexm3); 
Serial.println(flexm4);
Serial.println("  ");

delay(500);
if((flexm1>=0)&&(flexm1<=15)&&(flexm2>=230)&&(flexm2<=250)&&(flex m3>=330)&&(flexm3<=350)&&(flexm4>=30)&&(flexm4<=45))
{Serial.println("hello How are you?"); tmrpcm.play("hello.wav"); delay(4000);}
if((flexm1>=0)&&(flexm1<=15)&&(flexm2>=200)&&(flexm2<=220)&&(flex m3>=330)&&(flexm3<=350)&&(flexm4>=30)&&(flexm4<=45))
{Serial.println("IM HUNGRY!"); tmrpcm.play("hungry.wav"); delay(4000);}
if((flexm1>=0)&&(flexm1<=15)&&(flexm2>=230)&&(flexm2<=250)&&(flex m3>=300)&&(flexm3<=320)&&(flexm4>=70)&&(flexm4<=80))
{Serial.println("I am in Danger"); tmrpcm.play("emerg.wav"); delay(4000);}
if((flexm1>=0)&&(flexm1<=15)&&(flexm2>=390)&&(flexm2<=400)&&(flex m3>=400)&&(flexm3<=410)&&(flexm4>=70)&&(flexm4<=80))
{Serial.println("I need water"); tmrpcm.play("water.wav"); delay(4000);}
}

void sensorcheck()
{

if(flex1<924) 
flex1=924; 
if(flex1>1000) 
flex1=1000;
if(flex2<0) 
flex2=0; 
if(flex2>200) 
flex2=200; 
if(flex3<944) 
flex3=944; 
if(flex3>982)
flex3=982;
if(flex4<837) 
flex4=837; 
if(flex4>930) 
flex4=930;
}
