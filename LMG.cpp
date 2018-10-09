#include <iostream>
#include "LMG.h"
using namespace std;

LMG::LMG(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_,
  unsigned int Range_,unsigned int Weight_,unsigned int Rate_):Weapon(Id_,"Light Machine Gun",Caliber_,MagSize_,MuzzleVelocity_,
  Range_,Weight_),AssaultRifle(Id_,Caliber_,MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_){}

unsigned int LMG::GetId()
{
  return AssaultRifle::GetId();
}

std::string& LMG::GetType()
{
  return AssaultRifle::GetType();
}

float LMG::GetCaliber()
{
  return AssaultRifle::GetCaliber();
}

unsigned int LMG::GetInfo()
{
  return AssaultRifle::GetInfo();
}

unsigned int LMG::GetMuzzleVelocity()
{
  return AssaultRifle::GetMuzzleVelocity();
}

unsigned int LMG::GetMagSize()
{
  return AssaultRifle::GetMagSize();
}

unsigned int LMG::GetRange()
{
  return AssaultRifle::GetRange();
}

unsigned int LMG::GetWeight()
{
  return AssaultRifle::GetWeight();
}
unsigned int LMG::GetInfo2(){};

void LMG::Save(std::ofstream& FILE)
{
   AssaultRifle::Save(FILE);
}

LMG::~LMG()
{}
