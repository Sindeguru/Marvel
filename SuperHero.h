#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

class SuperHero : public Entity
{
public:
	SuperHero()
	{
		sAbility = "None";
	}
	SuperHero(string n, string a, bool al) :Entity(n, al)
	{
		SetAbility(a);
	}
	////////////////////////////////////
	string sAbility;
	string GetAbility()
	{
		return sAbility;
	}

	void SetAbility(string a)
	{
		sAbility = a;
	}

	void Print() override
	{
		Entity::Print();
		cout << "Ability: " << sAbility << endl;
	}

};