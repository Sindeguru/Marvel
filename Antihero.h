#pragma once
#include <iostream>
#include "SuperHero.h"
using namespace std;

class AntiHero : public SuperHero
{
	public:
	string lifePrinc;
	AntiHero()
	{
		lifePrinc = "killing bad guys.";
	}
	AntiHero(string n, string a, bool al, string lp) :SuperHero(n, a, al)
	{
		lifePrinc = lp;
	}
	
};