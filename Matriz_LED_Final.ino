#include <FastLED.h>
#include <Wire.h>
 #define NUM_LEDS 50
 #define LED_PIN 3

 CRGB leds[NUM_LEDS];

int mensaje;



void setup () {
pinMode(12, OUTPUT);
Serial.begin (9600);
FastLED.addLeds<WS2812B, LED_PIN, RGB>(leds, NUM_LEDS);
delay(1000);



 }

 void loop () {


  
  if(Serial.available() > 0){ 
 
    mensaje = Serial.read(); 
 

   if(mensaje == 1){

fill_solid (leds, NUM_LEDS, CRGB::Black);

FastLED.show();

delay (500);

corazon ();


  
    }
 
 else if(mensaje == 2){

fill_solid (leds, NUM_LEDS, CRGB::Black);

FastLED.show();

delay (500);


x () ;

delay (2000);

fill_solid (leds, NUM_LEDS, CRGB::Black);

FastLED.show();

delay (300);


    }
  


else{
     
    }
  

 }
 }

 void cara ()

{
  leds[12] = CRGB::Red;
  leds[13] = CRGB::Red;
  leds[16] = CRGB::Red;
  leds[17] = CRGB::Red;
  leds[9] = CRGB::Red;
  leds[10] = CRGB::Red;
  leds[19] = CRGB::Red;
  leds[20] = CRGB::Red;
  leds[37] = CRGB::Red;
  leds[38] = CRGB::Red;
  leds[39] = CRGB::Red;
  leds[40] = CRGB::Red;
  leds[41] = CRGB::Red;
FastLED.show();

}

void x ()

{
  leds[1] = CRGB::Red;
  leds[13] = CRGB::Red;
  leds[17] = CRGB::Red;
  leds[25] = CRGB::Red;
  leds[33] = CRGB::Red;
  leds[37] = CRGB::Red;
  leds[49] = CRGB::Red;
  leds[7] = CRGB::Red;
  leds[9] = CRGB::Red;
  leds[19] = CRGB::Red;
  leds[31] = CRGB::Red;
  leds[41] = CRGB::Red;
  leds[43] = CRGB::Red;
FastLED.show();

}

void corazon ()

{
  leds[2] = CRGB::Red;
  leds[3] = CRGB::Red;
  leds[5] = CRGB::Red;
  leds[6] = CRGB::Red;
  leds[14] = CRGB::Red;
  leds[8] = CRGB::Red;
  leds[15] = CRGB::Red;
  leds[21] = CRGB::Red;
  leds[28] = CRGB::Red;
  leds[22] = CRGB::Red;
  leds[30] = CRGB::Red;
  leds[34] = CRGB::Red;
  leds[40] = CRGB::Red;
  leds[38] = CRGB::Red;
  leds[46] = CRGB::Red;
FastLED.show();

}


void triangulo ()

{
leds[4] = CRGB::Yellow;
  leds[11] = CRGB::Yellow;
  leds[17] = CRGB::Yellow;
  leds[18] = CRGB::Yellow;
  leds[19] = CRGB::Yellow;
  leds[23] = CRGB::Yellow;
  leds[24] = CRGB::Yellow;
  leds[25] = CRGB::Yellow;
  leds[26] = CRGB::Yellow;
  leds[27] = CRGB::Yellow;
  leds[29] = CRGB::Yellow;
  leds[30] = CRGB::Yellow;
  leds[31] = CRGB::Yellow;
  leds[32] = CRGB::Yellow;
  leds[33] = CRGB::Yellow;
  leds[34] = CRGB::Yellow;
  leds[35] = CRGB::Yellow;
  leds[36] = CRGB::Yellow;
  leds[37] = CRGB::Yellow;
  leds[38] = CRGB::Yellow;
  leds[39] = CRGB::Yellow;
  leds[40] = CRGB::Yellow;
  leds[41] = CRGB::Yellow;
  leds[42] = CRGB::Yellow;
  
  FastLED.show();


}

void izquierda ()
{
leds[12] = CRGB::Green;
  leds[16] = CRGB::Green;
  leds[22] = CRGB::Green;
  leds[23] = CRGB::Green;
  leds[24] = CRGB::Green;
  leds[25] = CRGB::Green;
  leds[26] = CRGB::Green;
  leds[27] = CRGB::Green;
  leds[28] = CRGB::Green;
  leds[40] = CRGB::Green;
  leds[30] = CRGB::Green;
  
  
   FastLED.show();
}

void derecha ()
{

  leds[10] = CRGB::Blue;
  leds[20] = CRGB::Blue;
  leds[22] = CRGB::Blue;
  leds[23] = CRGB::Blue;
  leds[24] = CRGB::Blue;
  leds[25] = CRGB::Blue;
  leds[26] = CRGB::Blue;
  leds[27] = CRGB::Blue;
  leds[28] = CRGB::Blue;
  leds[34] = CRGB::Blue;
  leds[38] = CRGB::Blue;
  
FastLED.show();
}




