#include "Dcl.h"
#include <iostream>
double TDcl::GetDlina()
{
    return dlina;
}
int TDcl::GetPower()
{
    return power;
}

TDcl::TDcl()
{
  sid = 4;
  wheels = 4;
  doors = 4;
  phars = 4;
  dlina = 4.5;
  power = 245;
}

void TDcl::Print()
{
  std::cout << "Dcl, sid=" << "\t" << this->GetSid() << "\t" << "power="<<"\t" << this->GetPower() << "\t" <<"year="<<"\t" << this->GetYear()<<std::endl;
}
