#pragma once
#include "Cars.h"
class TGarage
{
public:
  TGarage();
  ~TGarage();
  void Print();
  void AddCar(TCars* car);
private:
  TCars** cars;
  int carcount;
};