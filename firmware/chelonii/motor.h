#ifndef MOTOR_H
#define MOTOR_H

#include <Arduino.h>

class motor{
  private:
    char en;
    char ch1;
    char ch2;

  public:
    motor(int en, int ch1, int ch2);
    void arm();
    void disarm();
    void spinCW();
    void spinCCW();
    void spinStop();
    void setVoltage(int p);
};

#endif
