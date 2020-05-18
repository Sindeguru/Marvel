#pragma once
#include <iostream>
#include "SuperHero.h"

#include "entity.h"
using namespace std;


class SpiderMan :public SuperHero
{
public:
	string universe;
	SpiderMan(string n, string a, bool alive, string univ) :SuperHero(n, a, alive)
	{
		universe = univ;
	}
	void Print() override
	{
		SuperHero::Print();
		cout << "Universe: " << universe << endl;
	}
};