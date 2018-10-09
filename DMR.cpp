#include "DMR.h"
#include <iostream>
using namespace std;

DMR::DMR(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_,
  unsigned int Range_,unsigned int Weight_,unsigned int Rate_,unsigned int Scope_):Weapon(Id_,"DMR",Caliber_,MagSize_,MuzzleVelocity_,Range_,Weight_),
  AssaultRifle(Id_,Caliber_,MagSize_,MuzzleVelocity_,Range_,Weight_, Rate_),SniperRifle(1,1,1,1,1,1,Scope_){}

unsigned int DMR::GetId()
{
  return AssaultRifle::GetId();
}

std::string& DMR::GetType()
{
  return AssaultRifle::GetType();
}

float DMR::GetCaliber()
{
  return AssaultRifle::GetCaliber();
}

unsigned int DMR::GetInfo()
{
  return AssaultRifle::GetInfo();
}

unsigned int DMR::GetMuzzleVelocity()
{
  return AssaultRifle::GetMuzzleVelocity();
}

unsigned int DMR::GetMagSize()
{
  return AssaultRifle::GetMagSize();
}

unsigned int DMR::GetRange()
{
  return AssaultRifle::GetRange();
}

unsigned int DMR::GetWeight()
{
  return AssaultRifle::GetWeight();
}

unsigned int DMR::GetInfo2()
{
  return SniperRifle::GetInfo();
}
void DMR::Save(std::ofstream& FILE)
{
  AssaultRifle::Save(FILE);
  FILE<<SniperRifle::GetInfo()<<endl;
}

DMR::~DMR(){}
