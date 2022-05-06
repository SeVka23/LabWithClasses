#include "Polupricep.h"
#include "Pricep.h"
#include "Dcl.h"
#include "Ecl.h"
#include "Garage.h"
#include <iostream>
int main()
{
  TDcl bmw;
  TEcl mers;
  TPricep tonar;
  TPolupricep fura;
  TGarage garage;
  garage.AddCar(&bmw);
  garage.AddCar(&mers);
  garage.AddCar(&tonar);
  garage.AddCar(&fura);
  garage.Print();
  return 0;
}