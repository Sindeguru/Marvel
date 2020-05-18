#pragma once
#include <iostream>
#include "Antihero.h"

using namespace std;

class Deadpool: public AntiHero 
{
public:
	int restored;
	Deadpool ();
	Deadpool (string n, string a, bool al, string lp, int rest) :AntiHero(n, a, al, lp)
	{
		restored = rest;
	}
	void Print() override
	{
		AntiHero::Print();
		cout << "Restored: " << restored << "/100. " << endl;
	}
};