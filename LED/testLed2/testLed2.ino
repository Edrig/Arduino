/*

Receptionne et traite une commande sur le port serie
La trame doit être du type " #%x/%x/%x/%x*", avec x un entier
Lors de la reception du caractere de debut de commande "#", les caracteres suivants sont stockés dans un buffer (asciiString) jusqu'a la reception du caractere de fin de commande "*".
Ensuite, le buffer est decode par la methode "scanf"

 */


#include <String.h>
#include <stdio.h>

char asciiString[80];

boolean flag=false;
int j=0;

//variables de stockage resultat scanf
int int1=0;
int int2=0;
int int3=0;
int int4=0;

//valeur de timeout pour la reception de la trame
int tps_max_lecture = 200;      //lecture d'un code, compteur max entre tous les caracteres d'un code
int tps_max_carte = 1000;      //compteur max entre reception d'un caractere


void setup() 
{ 
      Serial.begin(38400); 
} 

void loop()
{

lecture_serial();

}


int lecture_serial(){            // lecture d'une trame entrante

      int timeout=0;
      
if(Serial.available()>0){

      while(Serial.available()>0){
            
         char lu= Serial.read();
             //Serial.print(lu);
         //remise a zero de l'index et effacement du buffer si detection caractere de debut de trame #
        if(lu=='+'){
                  j=0;
                        memset (asciiString,' ',80); // initialisation chaine vide

                  //asciiString = "\0";  
                  flag=true;
        }
         else if(lu=='*'){

                  Serial.print("Commande recue: ");       
                  Serial.println(asciiString);
                  
                  sscanf(asciiString, "%d/%d/%d/%d", &int1, &int2, &int3, &int4);
                  
                  Serial.print("entier 1 = ");
                  Serial.println(int1);
                  Serial.print("entier 2 = ");
                  Serial.println(int2);
                  Serial.print("entier 3 = ");
                  Serial.println(int3);
                  Serial.print("entier 4 = ");
                  Serial.println(int4);
                  
                     flag=false;
            }
         else if (flag==true){
                  asciiString[j] = lu;
                  j++;
         }            

      timeout++;
      
      if(timeout> tps_max_lecture)
            {
            return -1;
            }      
      }

}
      return j;
      
}
