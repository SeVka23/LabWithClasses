#pragma once
#include "Cars.h"
class TLegkovye :public TCars
{
public:
  int GetSid();
  TLegkovye();
  virtual void Print();
protected:
  int sid;
};