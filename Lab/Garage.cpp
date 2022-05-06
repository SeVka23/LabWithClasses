#include "Garage.h"
TGarage::TGarage()
{
  carcount = 0;
  cars = nullptr;
}

TGarage::~TGarage()
{
  if (cars != nullptr)
    delete[] cars;
}

void TGarage::Print()
{
  for (int i = 0; i < carcount; i++)
  {
    cars[i]->Print();
  }
}

void TGarage::AddCar(TCars* car)
{
  if (carcount == 0)
  {
    cars = new TCars * [1];
    carcount = 1;
    cars[0] = car;
  }
  else
  {
    TCars** tmp = new TCars*[carcount + 1];
    for (int i = 0; i < carcount; i++)
    {
      tmp[i]=cars[i];
    }
    delete[] cars;
    cars = tmp;
    cars[carcount] = car;
    carcount++;
  }
}
