#include<math.h>
int ch[7]={0,0,0,0,0,0,0};
int ci[6]={8,8,9,10,11,12};
double channel[7]={0,0,0,0,0,0};
double high[7]={0,0,0,0,0,0};
double low[7]={100000,100000,100000,100000,100000,100000};
int m1=7;
int m2=5;
int m3=4;
int m4=2;
int j=0;
int sp1=3;
int sp2=6;

int i;

void setup() {
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(sp1,OUTPUT);
  pinMode(sp2,OUTPUT);
  Serial.begin(9600);
for(i=1;i<6;i++){
   pinMode(ch[i],INPUT);
  
  }
}

void loop() {

for(i=1;i<6;i++){
channel[i]=pulseIn(ci[i],HIGH);
}

for(i=1;i<6;i++){

if(high[i]<channel[i])
{high[i]=channel[i];
Serial.print(i);
Serial.print("h=");
Serial.print(high[i]);
Serial.println();

}

if(low[i]>channel[i])
{low[i]=channel[i];
Serial.print(i);
Serial.print("l=");
Serial.print(low[i]);
Serial.println();
}
}
}


Code of the Car:

// declaring motor pins
int m1=7;
int m2=5;
int m3=4;
int m4=2;



// declaring enable pins
int en1=3;
int en2=6;



// declaring store values
int speedcar;
int intake;

// declaring switch cases
char ec;


void setup()
{ 
// attaching servos  

  // configuring port type
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
  pinMode(en1,OUTPUT);
  pinMode(en2,OUTPUT);
  pinMode(2,INPUT);
  Serial.begin(9600);
attachInterrupt(0,wwtt,RISING);
}


void wwtt(){
 Stop();
  delay(300);
  
  
  }
void loop()
{

  
  if(Serial.available()>0)   //checking for serial available
  {
    intake=Serial.read();    //reading the serial value 
   
     if(intake<126)
       {
          speedcar=map(intake,100,125,170,255);
       }   
     else
     {   
       ec= dec(intake);
   
    switch(ec)
    {
      case 'F':
      forward();
      break;
      case 'B':
      back();
      break;
      case 'L':
      left();
      break;
      case 'R':
      right();
      break;
      case 'G':
      forward_left();
      break;
      case 'I':
      forward_right();
      break;
      case 'H':
      back_left();
      break;
      case 'J':
      back_right();
      break;
      case 'S':
      Stop();
      break;
      }
      }
      }
      }

  char dec(int a)
{
a=intake;
 
  if(a==130)
    return 'S';
    
  if(a==150)
   return 'F';
  
  if(a==151)
    return 'B';
  
  if(a==152)
    return 'G';

  if(a==153)
    return 'I';
  
  if(a==154)
    return 'L';
  
  if(a==155)
    return 'R';

  if(a==158)
  return 'G';
  if(a==159)
  return 'I';
  if(a==160)
  return 'H';
  if(a==161)
  return 'J';

}

void forward()
{
  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);

  
  
}
void back()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  
}
void left()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  
}
void right()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  
}
void forward_left()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,HIGH);

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  
}
void forward_right()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  
}
void back_left()
{
  digitalWrite(m1,LOW);
  digitalWrite(m2,LOW);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,LOW);

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  
}
void back_right()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,LOW);
  digitalWrite(m3,LOW);
  digitalWrite(m4,LOW);

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
  
}
void Stop()
{
  digitalWrite(m1,HIGH);
  digitalWrite(m2,HIGH);
  digitalWrite(m3,HIGH);
  digitalWrite(m4,HIGH);
  

  analogWrite(en1,speedcar);
  analogWrite(en2,speedcar);
 }
