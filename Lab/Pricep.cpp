#include "Pricep.h"
#include <iostream>
TPricep::TPricep()
{
  sid = 2;
  wheels = 6;
  doors = 2;
  phars = 6;
  dlina = 5;
  height = 1.8;
  gruz = 12;
}

double TPricep::GetDlina()
{
  return dlina;
}

double TPricep::GetHeight()
{
  return height;
}

void TPricep::SetHeight(double _height)
{
  if (_height >= 0)
    height = _height;
}

void TPricep::Print()
{
  std::cout << "Pricep, dlina=" << "\t" << this->GetDlina() << "\t" << "gruz="<<"\t" << this->GetGruz() << "\t" << "height="<<"\t" << this->GetHeight() << std::endl;
}
