#pragma once
#include <iostream>
#include "Antihero.h"

using namespace std;

class Symbiote : public AntiHero //Пусть будет версия с фильма
{
public:
	int hunger;
	Symbiote();
	Symbiote(string n, string a, bool al, string lp, int hun) :AntiHero(n, a, al, lp)
	{
		hunger = hun;
	}
	void Print() override
	{
		AntiHero::Print();
		cout << "Hunger: " << hunger << "/100. " << endl;
	}
};