#pragma once
#include <string>
#include <iostream>
#include <fstream>

class Weapon
{
protected:
  unsigned int Id;
  std::string Type;
  float Caliber;
  unsigned int MuzzleVelocity;
  unsigned int MagSize;
  unsigned int Range;
  unsigned int Weight;
public:
  Weapon();
  Weapon(unsigned int ,std::string,float,unsigned int,unsigned int,
    unsigned int,unsigned int);
  virtual unsigned int GetId()=0;
  virtual std::string& GetType()=0;
  virtual float GetCaliber()=0;
  virtual unsigned int GetMuzzleVelocity()=0;
  virtual unsigned int GetMagSize()=0;
  virtual unsigned int GetRange()=0;
  virtual unsigned int GetWeight()=0;
  virtual unsigned int GetInfo()=0;
  virtual unsigned int GetInfo2()=0;
  virtual void Save(std::ofstream&)=0;
  virtual  ~Weapon();
};
