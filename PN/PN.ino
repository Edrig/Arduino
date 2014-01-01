#include <Servo.h>

int BPa = 2;
int BPb = 3;
int fadeCount = 0;
int fadePause = 5;
int fadeStep = 10;
int led = 10;
bool fadeTop = false;
int nbroue = 0;
int pos = 0;
Servo servo;

int pin_son = 11;
 int LA= 500;
// the setup routine runs once when you press reset:
void setup() 
{ 
  //pinMode(led,OUTPUT);
  servo.attach(12);  // attaches the servo on pin 9 to the servo object 
  servo.write(80);
  Serial.begin(9600);
} 
void ComptageRoue()
{
 int valbpa=digitalRead(BPa);  
 if(valbpa==HIGH)
   {
   nbroue++;
   }
 
 int valbpb=digitalRead(BPb); 
 if(valbpb==HIGH && nbroue > 0)
   {
    nbroue--;
   }
  delay(10);
  Serial.print("Nombre de Roue =");
  Serial.println(nbroue);
}

void lumiere_on() {
  analogWrite(led,255);
  delay(100);
  analogWrite(led,0);
}
 
void lumiere_off() {
  analogWrite(led,0);
}
void sonnette_on () {
   
  tone (pin_son,LA);
  delay(50);
  noTone(pin_son);
}
 
void sonnette_off () {
   
  noTone (pin_son);
}

 //routine runs over and over again forever:
void loop()
{
  ComptageRoue();
  servo.write(80);
  lumiere_off();
while(nbroue > 0)
{
  lumiere_on();
  sonnette_on();
  servo.write(10);
  ComptageRoue();
}
}
