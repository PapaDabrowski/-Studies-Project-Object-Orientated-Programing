#include <iostream>
#include <string>
#include <fstream>
#include "AssaultRifle.h"
#include "Weapon.h"
using namespace std;

AssaultRifle::AssaultRifle(unsigned int Id_,float Caliber_,unsigned int MagSize_,
  unsigned int MuzzleVelocity_, unsigned int Range_,unsigned int Weight_,
  unsigned int Rate_):Weapon(Id_,"AssaultRifle",Caliber_,MagSize_,MuzzleVelocity_,Range_,Weight_),RateOfFire(Rate_){}

unsigned int AssaultRifle::GetInfo2(){}

unsigned int AssaultRifle::GetId()
{
Weapon::GetId();
}

std::string& AssaultRifle::GetType()
{
Weapon::GetType();

}

float AssaultRifle::GetCaliber()
{
Weapon::GetCaliber();
}

unsigned int AssaultRifle::GetInfo()
{
return RateOfFire;
}

unsigned int AssaultRifle::GetMuzzleVelocity()
{
Weapon::GetMuzzleVelocity();
}

unsigned int AssaultRifle::GetMagSize()
{
Weapon::GetMagSize();
}

unsigned int AssaultRifle::GetRange()
{
Weapon::GetRange();
}

unsigned int AssaultRifle::GetWeight()
{
Weapon::GetWeight();
}
void AssaultRifle::Save(std::ofstream &FILE)
{
Weapon::Save(FILE);
FILE<<RateOfFire<<endl;
}
AssaultRifle::~AssaultRifle(){};
