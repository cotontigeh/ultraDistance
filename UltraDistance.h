/*
  UltraDistance.h - Library for calculating distance.
  Created by Cotontige, Mai 11, 2018.
  Released into the public domain.
*/

#ifndef UltraDistance_h
#define UltraDistance_h

#include "Arduino.h"

class UltraDistance
{
  public:
    UltraDistance(int trigPin, int echoPin);
    int get();
  private:
    int _trigPin;
    int _echoPin;
};

#endif