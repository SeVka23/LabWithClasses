#pragma once
#include "Legkovye.h"
class TEcl :public TLegkovye
{
public:
  double GetDlina();
  int GetPower();
  TEcl();
  virtual void Print();
protected:
  double dlina;
  int power;
};