#define GREEN 11
#define BLUE 10
#define RED 9
#define delayTime 20

int VR = 0;
int VV = 0;
int VB = 0;
int autofade = 1;

void setup()
{
 // begin the serial communication
 Serial.begin(9600);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  pinMode(RED, OUTPUT);
  digitalWrite(GREEN, HIGH);
  digitalWrite(BLUE, HIGH);
  digitalWrite(RED, HIGH);

}

void analogWriteMod(int pin, int val) {
  if(val < 0) {
    val = 0; 
  }
  
  if(val > 255) {
    val = 255; 
  }
  analogWrite(pin, val); 
}

void Fade(){
  
  int redVal = 255;
  int blueVal = 0;
  int greenVal = 0;
  
  if(autofade = 1 ){
  for( int i = 0 ; i < 255 ; i += 1 ){
    greenVal += 1;
    redVal -= 1;
    analogWrite( GREEN, 255 - greenVal );
    analogWrite( RED, 255 - redVal );

    delay( delayTime );
  }
 
  redVal = 0;
  blueVal = 0;
  greenVal = 255;
  for( int i = 0 ; i < 255 ; i += 1 ){
    blueVal += 1;
    greenVal -= 1;
    analogWrite( BLUE, 255 - blueVal );
    analogWrite( GREEN, 255 - greenVal );

    delay( delayTime );
  }
 
  redVal = 0;
  blueVal = 255;
  greenVal = 0;
  for( int i = 0 ; i < 255 ; i += 1 ){
    redVal += 1;
    blueVal -= 1;
    analogWrite( RED, 255 - redVal );
    analogWrite( BLUE, 255 - blueVal );

    delay( delayTime );
  }
} 
}
  
void loop()
{
 if(VR < 0) {
    VR = 0; 
  }
  
 if(VR > 255) {
   VR = 255; 
 }
 if(VV < 0) {
    VV = 0; 
  }
  
 if(VV > 255) {
   VV = 255; 
 }
  if(VB < 0) {
    VB = 0; 
  }
  
 if(VB > 255) {
   VB = 255; 
 }
 byte val;

 // regarde si quelque chose se trouve dans le buffer 
 if (Serial.available() > 0) {
  char valeur = Serial.read();
  
  switch(valeur) {
    
  case 'q':
    VR += 5;
    analogWriteMod(RED, VR);
    //Serial.print(VR);
    break;

  case 's':
    VV += 5;
    analogWriteMod(GREEN, VV);
    //Serial.print("orange-1 ON");
    break;  
    
  case 'd':
    VB += 5;
    analogWriteMod(BLUE, VB);
    //Serial.print("vert-1 ON");
    break;
    
  case 'a':
    VR -= 5;
    analogWriteMod(RED, VR);
    //Serial.print(VR);
    break;

  case 'z':
    VV -= 5;
    analogWriteMod(GREEN, VV);
    //Serial.print("orange-1 ON");
    break;  
   
  case 'e':
    VB -= 5;
    analogWriteMod(BLUE, VB);
    //Serial.print("vert-1 ON");
    break;
  case 'm':
    VR = 255;
    analogWriteMod(RED, VR);
    VV = 255;
    analogWriteMod(GREEN, VV);
    VB = 255;
    analogWriteMod(BLUE, VB);
    break;  
    
  /*case 't':
    autofade = 1;
    Fade();
    break;
    
  case 'g':
    autofade = 0;
    Fade();
    break;*/
 }

}
}
