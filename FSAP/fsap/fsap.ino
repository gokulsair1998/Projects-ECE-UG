#include <SD.h>  // need to include the SD library
#define SD_ChipSelectPin 4 //using digital pin 4 on arduino nano 328, can use other pins
#include <TMRpcm.h> // also need to include this library... #include <SPI.h>
TMRpcm tmrpcm;  // create an object for use in this sketch int bmp;
int A0;
void setup(){

tmrpcm.speakerPin = 9; //5,6,11 or 46 on Mega, 9 on Uno, Nano, etc pinMode(A0,OUTPUT);
Serial.begin(38400);
if (!SD.begin(SD_ChipSelectPin)) { // see if the card is present and can be initialized:
Serial.println("SD fail");
return; // don't do anything more if not
}
//tmrpcm.play("intro.wav"); //the sound file "music" will play each time the arduino powers up, or is reset
}


void loop(){ bmp=map(A0,0,158,0,255);
Serial.println(bmp); if((bmp<=85)&&(bmp>=68))
{
normal();
}
if((bmp<=68))
{
sad();
}
if((bmp<=85)&&(bmp>=68))
{
angry();
}




}
void angry()
{
tmrpcm.play("angry1.wav"); delay(1000); 
tmrpcm.play("angry2.wav"); delay(1000); 
tmrpcm.play("angry3.wav"); delay(1000); 
tmrpcm.play("angry4.wav"); delay(1000); 
tmrpcm.play("angry5.wav"); delay(1000);
}
void sad()
{
tmrpcm.play("sad1.wav"); delay(1000);
tmrpcm.play("sad2.wav"); delay(1000); 
tmrpcm.play("sad3.wav"); delay(1000);
tmrpcm.play("sad4.wav"); delay(1000); 
tmrpcm.play("sad5.wav"); delay(1000);
}
void normal()
{
tmrpcm.play("music1.wav");delay(1000);
tmrpcm.play("music2.wav"); delay(1000); 
tmrpcm.play("music3.wav"); delay(1000); 
tmrpcm.play("music4.wav"); delay(1000); 
tmrpcm.play("music5.wav"); delay(1000);
}
