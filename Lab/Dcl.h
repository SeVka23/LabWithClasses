#pragma once
#include "Legkovye.h"
class TDcl :public TLegkovye
{
public:
  double GetDlina();
  int GetPower();
  TDcl();
  virtual void Print();
protected:
  double dlina;
  int power;
};