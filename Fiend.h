#pragma once
#include <iostream>
#include "entity.h"
using namespace std;

class Fiend : public SuperHero
{
public:
	Fiend() {};
	Fiend(string n, string a, bool al, string enem) : SuperHero(n,  a, alive)
	{
		enemies = enem;
	}
	void Print() override
	{
		SuperHero::Print();
		cout << "Enemies: " << enemies << endl;
	}
	string enemies;
};