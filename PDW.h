#pragma once
#include "Weapon.h"
#include "AssaultRifle.h"
#include "Handgun.h"
#include <iostream>
#include <string>

class PDW:public AssaultRifle,public Handgun
{
public:
  PDW(unsigned int ,float,unsigned int,unsigned int,
    unsigned int,unsigned int,unsigned int,unsigned int);
  virtual unsigned int GetInfo();
  virtual unsigned int GetInfo2();
  virtual unsigned int GetId();
  virtual std::string& GetType();
  virtual float GetCaliber();
  virtual unsigned int GetMuzzleVelocity();
  virtual unsigned int GetMagSize();
  virtual unsigned int GetRange();
  virtual unsigned int GetWeight();
  virtual void Save(std::ofstream&);
  virtual ~PDW();
};
