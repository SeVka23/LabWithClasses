#include "Ecl.h"
#include <iostream>
double TEcl::GetDlina()
{
  return dlina;
}

int TEcl::GetPower()
{
  return power;
}

TEcl::TEcl()
{
  sid = 4;
  wheels = 4;
  doors = 4;
  phars = 4;
  dlina = 4.4;
  power = 400;
}

void TEcl::Print()
{
  std::cout << "Ecl, power=" << "\t" << this->GetPower() << "\t" << "dlina="<<"\t" << this->GetDlina() << "\t" << "phars="<< "\t" << this->GetPhars() << std::endl;
}
