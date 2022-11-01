#ifndef ENCODER_H
#define ENCODER_H

#include <Arduino.h>

void ch1En1ISR();
void ch2En1ISR();
void ch1En2ISR();
void ch2En2ISR();


class encoder{
  private:
    char ch1;
    char ch2;
    long count = 0;
    float angle = 0;
    float velocity = 0;
    
  public:
    encoder(char ch1, char ch2);
    void setAngle();
    void getAngle();
    void setVelocity();
    void getVelocity();

    
};

#endif
