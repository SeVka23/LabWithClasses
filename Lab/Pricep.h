#pragma once
#include "Gruzovye.h"
class TPricep :public TGruzovye
{
public:
  TPricep();
  double GetDlina();
  double GetHeight();
  void SetHeight(double _height);
  virtual void Print();
protected:
  double height;
  double dlina;
};