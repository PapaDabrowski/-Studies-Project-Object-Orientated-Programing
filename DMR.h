#pragma once
#include "Weapon.h"
#include "SniperRifle.h"
#include "AssaultRifle.h"
#include <string>

class DMR:public AssaultRifle,public SniperRifle
{
public:
  DMR(unsigned int,float,unsigned int,unsigned int,
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
  virtual ~DMR();
};
