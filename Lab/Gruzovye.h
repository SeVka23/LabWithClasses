#pragma once
#include "Cars.h"
class TGruzovye :public TCars
{
public:
  int GetGruz();
  int GetSid();
  TGruzovye();
  virtual void Print();
protected:
  int gruz;
  int sid;
};