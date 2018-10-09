#include <iostream>
#include "SniperRifle.h"
using namespace std;

SniperRifle::SniperRifle(unsigned int Id_,float Caliber_,unsigned int MagSize_,unsigned int MuzzleVelocity_
  ,unsigned int Range_ ,unsigned int Weight_ ,unsigned int Scope_):Weapon(Id_,"SniperRifle",Caliber_,MagSize_
  ,MuzzleVelocity_,Range_,Weight_),Scope(Scope_){}

unsigned int SniperRifle::GetId()
{
Weapon::GetId();
}

std::string& SniperRifle::GetType()
{
Weapon::GetType();
}

float SniperRifle::GetCaliber()
{
Weapon::GetCaliber();
}

unsigned int SniperRifle::GetInfo()
{
return Scope;
}

unsigned int SniperRifle::GetMuzzleVelocity()
{
Weapon::GetMuzzleVelocity();
}

unsigned int SniperRifle::GetMagSize()
{
Weapon::GetMagSize();
}

unsigned int SniperRifle::GetRange()
{
Weapon::GetRange();
}

unsigned int SniperRifle::GetWeight()
{
Weapon::GetWeight();
}
unsigned int SniperRifle::GetInfo2(){}

void SniperRifle::Save(std::ofstream& FILE)
{
Weapon::Save(FILE);
FILE<<Scope<<endl;
}

SniperRifle::~SniperRifle(){};
