#include <iostream>
#include <vector>
#include <string.h>
#include "Container.h"
#include "Weapon.h"
#include "Handgun.h"
using namespace std;

Container::Container()
{}

void Container::AddElement(Weapon* X)
{
	Case.push_back(X);
}

void Container::RemoveElement(unsigned int Id_)
{
  int i;
	for(i=0;i<Case.size();i++)
	{
		if(Case[i]->GetId()==Id_)
		{
			Case.erase(Case.begin()+i);
			break;
		}
	}
	if(i==(Case.size()-1))
	   cout<<endl<<"Id has not been found!"<<endl<<endl;
}

unsigned int Container::GetCounter()
{
	return Case.size();
}

Container::~Container()
{
	for(int i=0;i<Case.size();i++) delete Case[i];
}

Weapon* Container::operator [] (unsigned int i)
{
	return Case[i];
}
