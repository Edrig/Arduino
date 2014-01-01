#include <Servo.h>

#define SWI 2
#define CHA 3
#define CHB 4

Servo myServo;
// valeur déterminée par la rotation de l'encodeur
int encoderPos = 0;
// précédente position de A
int prevA = LOW;
// état actuel de A
int A = LOW;
// état actuel de S
int S = HIGH;
// position du servomoteur (angle)
int servoPos = 90;

void setup()
{
  pinMode(CHA, INPUT);
  pinMode(CHB, INPUT);
  pinMode(SWI, INPUT);
  
  myServo.attach(5);
}

void loop()
{
  // on regarde ce qui se passe au niveau du switch : 
  S = digitalRead(SWI);
  switch (S)
  {
    // s'il est HIGH on est en train de choisir la valeur qui modifiera la position du servo
    case HIGH : 
      checkValue();
      break;
    // s'il est LOW on valide la saisie pour faire tourner le servo
    case LOW : 
      setPosition();
      break;
    default :
      break;
  }
}

void checkValue()
{
  // on regarde ce qu'on reçoit sur la pin A de l'encodeur
  A = digitalRead(CHA);
  // si on a un front montant (passage de LOW à HIGH)
  if ((prevA == LOW) && (A == HIGH))
  {
    // on regarde l'état de B pour connaître le sens :
    if (digitalRead(CHB) == HIGH)
    {
      encoderPos++;
    }
    else
    {
      encoderPos--;
    }
  }
  // on réinitialise prevA pour le prochain tour
  prevA = A;
}

void setPosition()
{
  // on détermine la future position du servo grâve aux données de l'encodeur
  servoPos = servoPos + encoderPos;
  // en faisant attention à ne pas dépasser les positions extrêmes :
  // position maximale
  if (servoPos > 179)
  {
    servoPos = 179;
  }
  // position minimale
  else if (servoPos < 0)
  {
    servoPos = 0;
  }
  // on fait tourner le servo
  myServo.write(servoPos);
  // et on réinitialise la valeur lue sur l'encodeur pour le prochain tour
  encoderPos = 0;
}
