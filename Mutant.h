#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

class Mutant : public SuperHero
{
public:
	Mutant(string n, string a, bool al) : SuperHero(n, a, al) {};
	void Print() override
	{
		SuperHero::Print();
		cout << "It is mutant." << endl;
	}
};