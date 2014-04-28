//Define des constantes de broche
#define ROUGE_1  6
#define ORANGE_1 5
#define VERT_1   3
#define ORANGE_2 9
#define VERT_2   10

void setup()
{
 // begin the serial communication
 Serial.begin(9600);
pinMode(ROUGE_1, OUTPUT); //met la broche en sortie
pinMode(ORANGE_1, OUTPUT); //met la broche en sortie
pinMode(VERT_1, OUTPUT); //met la broche en sortie
pinMode(VERT_2, OUTPUT); //met la broche en sortie
pinMode(ORANGE_2, OUTPUT); //met la broche en sortie

}

void loop()
{
 byte val;

 // regarde si quelque chose se trouve dans le buffer 
 if (Serial.available() > 0) {
  char valeur = Serial.read();

  switch(valeur) {
  case 'e':
    analogWrite(ROUGE_1, 255);
    //Serial.print("rouge-1 ON");
    break;

  case 'z':
    analogWrite(ORANGE_1, 255);
    //Serial.print("orange-1 ON");
    break;  
  case 'a':
    analogWrite(VERT_1, 255);
    //Serial.print("vert-1 ON");
    break;
    
      case 't':
    analogWrite(VERT_1, 255);
    analogWrite(ORANGE_1, 255);
    analogWrite(ROUGE_1, 255);
    //Serial.print("rouge-1 ON");
    //Serial.print("orange-1 ON");
    //Serial.print("vert-1 ON");
    break;
          case 'g':
    analogWrite(VERT_1, 0);
    analogWrite(ORANGE_1, 0);
    analogWrite(ROUGE_1, 0);
    break;
   case 'd':
    analogWrite(ROUGE_1, 0);
    break;

  case 's':
    analogWrite(ORANGE_1, 0);
    break;  
  case 'q':
    analogWrite(VERT_1, 0);
    break;   

  }
 }
}
