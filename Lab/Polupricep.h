#pragma once
#include "Gruzovye.h"
class TPolupricep :public TGruzovye
{
public:
  TPolupricep();
  double GetDlina();
  double GetHeight();
  virtual void Print();
protected:
  double height;
  double dlina;
};
