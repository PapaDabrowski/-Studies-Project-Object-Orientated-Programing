#include "PDW.h"
#include <iostream>
using namespace std;

PDW::PDW(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_,unsigned int Range_,
  unsigned int Weight_,unsigned int Rate_,unsigned int Silencer_):Weapon(Id_,"PDW",Caliber_,MagSize_,MuzzleVelocity_,Range_,Weight_),
  AssaultRifle(Id_,Caliber_,MagSize_,MuzzleVelocity_,Range_,Weight_,Rate_),Handgun(1,1,1,1,1,1,Silencer_){}

unsigned int PDW::GetId()
{
return AssaultRifle::GetId();
}

std::string& PDW::GetType()
{
  return AssaultRifle::GetType();
}

float PDW::GetCaliber()
{
  return AssaultRifle::GetCaliber();
}

unsigned int PDW::GetInfo()
{
  return AssaultRifle::GetInfo();
}

unsigned int PDW::GetMuzzleVelocity()
{
  return AssaultRifle::GetMuzzleVelocity();
}

unsigned int PDW::GetMagSize()
{
  return AssaultRifle::GetMagSize();
}

unsigned int PDW::GetRange()
{
  return AssaultRifle::GetRange();
}

unsigned int PDW::GetWeight()
{
  return AssaultRifle::GetWeight();
}

unsigned int PDW::GetInfo2()
{
  return Handgun::GetInfo();
}
void PDW::Save(std::ofstream& FILE)
{
  AssaultRifle::Save(FILE);
  FILE<<Handgun::GetInfo()<<endl;
};

PDW::~PDW(){}
