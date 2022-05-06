#include "Gruzovye.h"
#include <iostream>
int TGruzovye::GetGruz()
{
  return gruz;
}

int TGruzovye::GetSid()
{
  return sid;
}

TGruzovye::TGruzovye()
{
  gruz = 10;
  wheels = 6;
  doors = 2;
  sid = 3;
}

void TGruzovye::Print()
{
  std::cout <<"Gruzovye, doors="<<"\t"<< this->GetDoors() << std::endl;
}
