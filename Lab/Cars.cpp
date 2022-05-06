#include "Cars.h"
#include <iostream>
TCars::TCars()
{
  doors = 4;
  wheels = 4;
  phars = 4;
  year = 2019;
}

int TCars::GetYear()
{
  return year;
}

int TCars::GetWheels()
{
  return wheels;
}

int TCars::GetDoors()
{
  return doors;
}

int TCars::GetPhars()
{
  return phars;
}

void TCars::SetWheels(int _wheels)
{
  if (_wheels >= 0)
    wheels = _wheels;
}

void TCars::SetDoors(int _doors)
{
  if (_doors >= 0)
    doors = _doors;
}

void TCars::SetPhars(int _phars)
{
  if (_phars >= 0)
    phars = _phars;
}
