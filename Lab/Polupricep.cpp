#include "Polupricep.h"
#include <iostream>
TPolupricep::TPolupricep()
{
  sid = 2;
  wheels = 6;
  doors = 2;
  phars = 8;
  dlina = 13.5;
  height = 2.6;
  gruz = 22;
}

double TPolupricep::GetDlina()
{
  return dlina;
}

double TPolupricep::GetHeight()
{
  return height;
}

void TPolupricep::Print()
{
  std::cout << "Polpricep, height=" << "\t" << this->GetHeight() << "\t" << "dlina="<<"\t" << this->GetDlina() << "\t" << "gruz="<<"\t" << this->GetGruz() << std::endl;
}
