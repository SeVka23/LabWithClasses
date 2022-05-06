#pragma once
class TCars
{
public:
  int GetYear();
  int GetWheels();
  int GetDoors();
  int GetPhars();
  void SetWheels(int _wheels);
  void SetDoors(int _doors);
  void SetPhars(int _phars);
  TCars();
  virtual void Print() = 0;
protected:
  int wheels;
  int doors;
  int phars;
private:
  int year;
};