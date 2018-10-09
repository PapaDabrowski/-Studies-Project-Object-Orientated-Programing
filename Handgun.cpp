#include <string>
#include <iostream>
#include "Handgun.h"
using namespace std;

Handgun::Handgun(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_,
  unsigned int Range_,unsigned int Weight_,unsigned int Silencer_):Weapon(Id_,
  "Handgun",Caliber_,MagSize_,MuzzleVelocity_,Range_,Weight_),Silencer(Silencer_){}

unsigned int Handgun::GetId()
{
Weapon::GetId();
}

std::string& Handgun::GetType()
{
Weapon::GetType();
}

float Handgun::GetCaliber()
{
Weapon::GetCaliber();
}

unsigned int Handgun::GetMuzzleVelocity()
{
Weapon::GetMuzzleVelocity();
}

unsigned int Handgun::GetMagSize()
{
Weapon::GetMagSize();
}

unsigned int Handgun::GetRange()
{
Weapon::GetRange();
}

unsigned int Handgun::GetWeight()
{
Weapon::GetWeight();
}

unsigned int Handgun::GetInfo()
{
  return Silencer;
}
unsigned int Handgun::GetInfo2(){};

void Handgun::Save(std::ofstream& FILE)
{
  Weapon::Save(FILE);
  FILE<<Silencer<<endl;
}

Handgun::~Handgun(){}
