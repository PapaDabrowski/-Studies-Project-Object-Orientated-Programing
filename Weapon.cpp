#include <iostream>
#include <string>
#include <ostream>
#include "Weapon.h"
using namespace std;

Weapon::Weapon(unsigned int Id_,std::string Type_,float Caliber_,
  unsigned int MagSize_,unsigned int MuzzleVelocity_, unsigned int Range_,unsigned int Weight_)
{
 Id=Id_;
 Type=Type_;
 MagSize=MagSize_;
 MuzzleVelocity=MuzzleVelocity_;
 Caliber=Caliber_;
 Range=Range_;
 Weight=Weight_;
}

unsigned int Weapon::GetId()
{
return Id;
}

std::string& Weapon::GetType()
{
return Type;
}

float Weapon::GetCaliber()
{
  return Caliber;
}

unsigned int Weapon::GetInfo(){}

unsigned int Weapon::GetMuzzleVelocity()
{
  return MuzzleVelocity;
}

unsigned int Weapon::GetMagSize()
{
  return MagSize;
}

unsigned int Weapon::GetRange()
{
  return Range;
}
unsigned int Weapon::GetInfo2(){};

unsigned int Weapon::GetWeight()
{
  return Weight;
}
void Weapon::Save(std::ofstream& FILE)
{
  FILE<<Type<<endl;
  FILE<<Id<<endl;
  FILE<<Caliber<<endl;
  FILE<<MagSize<<endl;
  FILE<<MuzzleVelocity<<endl;
  FILE<<Range<<endl;
  FILE<<Weight<<endl;
}
Weapon::~Weapon(){}
