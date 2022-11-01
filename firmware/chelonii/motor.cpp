#include "Motor.h"


motor::motor(int en, int ch1, int ch2){
      this ->en = en;
      this ->ch1 = ch1;
      this ->ch2 = ch2;

      /* Set all pins as digital outputs*/
      pinMode(en, OUTPUT);
      pinMode(ch1, OUTPUT);
      pinMode(ch2, OUTPUT);
      return;
}

void motor::arm(){
  digitalWrite(en, HIGH);
  return;
}

void motor::disarm(){
  digitalWrite(en, LOW);
  spinStop();
  return;
}

void motor::spinCW(){
  digitalWrite(ch1, HIGH);
  digitalWrite(ch2, LOW); 
  return; 
}

void motor::spinCCW(){
  digitalWrite(ch1, LOW);
  digitalWrite(ch2, HIGH); 
  return;
}

void motor::spinStop(){
  digitalWrite(ch1, LOW);
  digitalWrite(ch2, LOW);
  return;
}

void motor::setVoltage(int p){
  analogWrite(en, p);
}
