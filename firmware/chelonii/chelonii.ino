#include <Encoder.h>
//#include "Encoder.h"

#include "Motor.h"

/* Motor pinout definition 
                en, ch1, ch2 */
motor rightMotor(A0, A2, A3);
motor  leftMotor(A1, A5, A4);

/*Encoder pinout definition*/
Encoder rightEncoder(D7,D6);
Encoder leftEncoder(D5,D4);

void setup() {
  /* Motors arm */
  rightMotor.disarm();
  leftMotor.arm();

  /* Serial comunication */
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);

}

void loop() {
  leftMotor.spinCCW();
  for(int val = 10; val < 255; val = val+5){
    Serial.println(val);
    leftMotor.setVoltage(val);
    delay(500);
  }

}
