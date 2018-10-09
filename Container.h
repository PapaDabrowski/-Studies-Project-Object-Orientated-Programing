#pragma once
#include "Weapon.h"
#include "SniperRifle.h"
#include "AssaultRifle.h"
#include "Handgun.h"
#include "PDW.h"
#include "LMG.h"
#include "DMR.h"
#include <string>
#include <vector>
class Container
{
private:
	std::vector<Weapon*>Case;
public:
	Container();
	void AddElement(Weapon*);
	void RemoveElement(unsigned int);
	unsigned int GetCounter();
  Weapon* operator[](unsigned int);
	~Container();
};
