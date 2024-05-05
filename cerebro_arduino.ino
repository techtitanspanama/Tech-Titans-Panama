#include <Wire.h>
#include <Servo.h>

int dir1 = 2;                 
int vel1 = 3; 

int dir2 = 4;                 
int vel2 = 5; 

 Servo ojoiz;
 Servo ojoder;
 Servo cuello;
 Servo boca;

char ser;

void adelante(){
 digitalWrite(dir1, 1);
 analogWrite(vel1, 110);
 digitalWrite(dir2, 1);
 analogWrite(vel2, 110);
}
 
void atras(){
 digitalWrite(dir1, 0);
 analogWrite(vel1, 120);
 digitalWrite(dir2, 0);
 analogWrite(vel2, 120);
}
void parar(){
 analogWrite(vel1, 0); 
 analogWrite(vel2, 0);  
}

void setup() {
  Serial.begin(9600);
  Wire.begin();
  ojoiz.attach(10);
  ojoder.attach(9);
  cuello.attach(8);
  boca.attach(11);


 ojoiz.write(100);
 ojoder.write(15);
 cuello.write(90);
 boca.write(3);
pinMode(dir1, OUTPUT);
  pinMode(vel1, OUTPUT);
  pinMode(dir2, OUTPUT);
  pinMode(vel2, OUTPUT);

}

void loop() {
  if (Serial.available() > 0) {
    
    char ser = Serial.read();
    if (ser == 'O'){
      parar();    
      
    }
  if (ser == 'C'){
      adelante ();
    }
if (ser == 'G'){
 atras() ;
    }

  if (ser == 'A'){
    cuello.write(0);
        delay (1000);
        cuello.write(90);
        delay (1000);
        cuello.write(180);
        delay (1000);
        cuello.write(90);
        delay (1000);
        ojoiz.write(90);
        ojoder.write(8);
        delay (1000);
        ojoiz.write(100);
        ojoder.write(15);
        delay (1000);
        ojoiz.write(108);
        ojoder.write(25);
        delay (1000);
        ojoiz.write(100);
        ojoder.write(15);
       delay (1000);
      
    }
    if (ser == 'B'){
      delay (1300);
      boca.write(15);
      delay (400);
      boca.write(3);
      delay  (400);
      boca.write(15);
      delay (400);
      boca.write(3);
      delay  (400);
      boca.write(15);
      delay (400);
      boca.write(3);
      delay  (400);
      boca.write(15);
      delay (400);
      boca.write(3);
      delay  (400);
      boca.write(15);
      delay (400);
      boca.write(3);
      delay  (400);boca.write(15);
      delay (400);
      boca.write(3);
      


    }
  }
}
