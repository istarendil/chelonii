#include "Encoder.h"

void probe(){

  
}

encoder::encoder(char ch1, char ch2){
  this -> ch1 = ch1;
  this -> ch2 = ch2;
  
  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);

  
 
}




void ch1En1ISR(){}
void ch2En1ISR(){}
void ch1En2ISR(){}
void ch2En2ISR(){}
