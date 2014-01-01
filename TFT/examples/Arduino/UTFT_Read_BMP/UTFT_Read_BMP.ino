// UTFT_Read_BMP (C)2012 uCtronics
// web: http://www.uctronics.com
//
// This program is a demo for modified UTFT.library
// and illustrate how to read bmp file from SD card.
//
// This program requires the UTFT library (8bit mode)
// and the code is compatible with both UNO and Mega board.
// No code modification required.
//
// This program requires the modified UTFT library by electronics.lee
// The orignal UTFT library is written by Henning Karlsen
// web: http://www.henningkarlsen.com/electronics
//

#include <UTFT.h>
#include <SD.h>
#include <Wire.h>

#define SD_CS 8 
#define BMPIMAGEOFFSET 54

// Declare which fonts we will be using
extern uint8_t SmallFont[];

//UTFT(byte model, int RS, int WR,int CS,int RD)
UTFT myGLCD(ITDB32S,A1,A2,A0,A3);


void setup()
{
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  if (!SD.begin(SD_CS)) 
  {
    while (1);
  }
}

void loop()
{
  char VH,VL;
  File inFile;
  inFile = SD.open("input.bmp",FILE_READ);
  if (! inFile) 
  {
    while (1);  //if file does not exsit, stop here.
  }
  myGLCD.dispBitmap(inFile);
  inFile.close();
  while(1);
}

