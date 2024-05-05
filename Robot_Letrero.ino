
 
#include <DFRobot_PAJ7620U2.h>
#include <SoftwareSerial.h>

#include <Wire.h>
#include <Arduino.h>

DFRobot_PAJ7620U2 paj;
int dir1 = 4;                 
int vel1 = 5;                
int dir2 = 7;                 
int vel2 = 6;
int dir3 = 9;                 
int vel3 = 8;
void setup()

{
  Serial.begin(115200);
  pinMode(dir1, OUTPUT);
  pinMode(vel1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(vel2, OUTPUT);
  pinMode(dir3, OUTPUT);
  pinMode(vel3, OUTPUT);  
 
  

}

void loop()
{
  
  DFRobot_PAJ7620U2::eGesture_t gesture = paj.getGesture();
  if(gesture != paj.eGestureNone ){
  
    
    if(gesture == 4) 
    {
digitalWrite(dir1, 1);
  digitalWrite(dir2, 0);
  digitalWrite(dir3, 1);
  analogWrite(vel1, 145);
  analogWrite(vel2, 148);
  analogWrite(vel3, 0);

  delay (2000);

   analogWrite(vel1, 0);
  analogWrite(vel2, 0);
  analogWrite(vel3, 0);

  delay (500);

    }
    if(gesture == 8) 
    {
digitalWrite(dir1, 0);
     digitalWrite(dir2, 1);
     digitalWrite(dir3, 1);
     analogWrite(vel1, 145);
     analogWrite(vel2, 148);
     analogWrite(vel3, 0);

  delay (2000);

   analogWrite(vel1, 0);
  analogWrite(vel2, 0);
  analogWrite(vel3, 0);

  delay (500);

    } 
 

     if(gesture == 1) 
    {
digitalWrite(dir1, 0);
     digitalWrite(dir2, 0);
     digitalWrite(dir3, 1);
     analogWrite(vel1, 85);
     analogWrite(vel2, 85);
     analogWrite(vel3, 171);

  delay (2000);

   analogWrite(vel1, 0);
   analogWrite(vel2, 0);
   analogWrite(vel3, 0);

  delay (500);

    } 

     if(gesture == 2) 
    {
  digitalWrite(dir1, 1);
 digitalWrite(dir2, 1);
 digitalWrite(dir3, 0);
 analogWrite(vel1, 85);
 analogWrite(vel2, 85);
 analogWrite(vel3, 171); 

 delay (2000);

   analogWrite(vel1, 0);
  analogWrite(vel2, 0);
  analogWrite(vel3, 0);

  delay (500);

    } 
  }
 
}
