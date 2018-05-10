/*
  UltraDistance.cpp - Library for calculating distance.
  Created by Cotontige, Mai 11, 2018.
  Released into the public domain.
*/

#include "Arduino.h"
#include "UltraDistance.h"

UltraDistance::UltraDistance(int trigPin, int echoPin)
{
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  _trigPin = trigPin;
  _echoPin = echoPin;
}

int UltraDistance::get()
{
  digitalWrite(_trigPin, LOW);
  delayMicroseconds(2);

  digitalWrite(_trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(_trigPin, LOW);

  return pulseIn(_echoPin, HIGH) * 0.034 / 2;
}
