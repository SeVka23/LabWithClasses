#include "Legkovye.h"
#include <iostream>
int TLegkovye::GetSid()
{
    return sid;
}
TLegkovye::TLegkovye()
{
  sid = 4;
  wheels = 4;
  doors = 4;
  phars = 4;
}

void TLegkovye::Print()
{
  std::cout << "Legkovye, wheels=" << "\t" <<this->GetWheels() << std::endl;
}
