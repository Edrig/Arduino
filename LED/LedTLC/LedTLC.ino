#include <Tlc5940.h>
#include <tlc_shifts.h>

// which analog pin to use
#define ANALOG_PIN      0

// which pin to clear the LEDs with
#define CLEAR_PIN      12


const int ROUGE_1=12; //declaration constante de broche
const int JAUNE_1=13; //declaration constante de broche
const int VERT_1=14; //declaration constante de broche
const int BLEUE_1=15; //declaration constante de broche

void setup()
{
 // begin the serial communication
 Serial.begin(9600);
  pinMode(CLEAR_PIN, INPUT);
  digitalWrite(CLEAR_PIN, HIGH); // enable pull-up
  Tlc.init();  
}

void loop()
{
 byte val;

 // regarde si quelque chose se trouve dans le buffer 
 if (Serial.available() > 0) {
  char valeur = Serial.read();

  switch(valeur) {
  case 'a':
    Tlc.set(ROUGE_1, 4095);
    Tlc.update();
    //Serial.print("rouge-1 ON");
    break;

  case 'z':
    Tlc.set(JAUNE_1, 4095);
    Tlc.update();
    //Serial.print("orange-1 ON");
    break;  
  
  case 'e':
    Tlc.set(VERT_1, 4095);
    Tlc.update();
    //Serial.print("vert-1 ON");
    break;
 
  case 'r':
    Tlc.set(BLEUE_1, 4095);
    Tlc.update();
    //Serial.print("vert-1 ON");
    break;

  case 'q':
    Tlc.set(ROUGE_1, 0);
    Tlc.update();
    //Serial.print("rouge-1 ON");
    break;

  case 's':
    Tlc.set(JAUNE_1, 0);
    Tlc.update();
    //Serial.print("orange-1 ON");
    break;  
  
  case 'd':
    Tlc.set(VERT_1, 0);
    Tlc.update();
    //Serial.print("vert-1 ON");
    break;
 
  case 'f':
    Tlc.set(BLEUE_1, 0);
    Tlc.update();
    //Serial.print("vert-1 ON");
    break;

  }
 }
}

