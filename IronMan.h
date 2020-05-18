#pragma once
#include "SuperHero.h"
#include <iostream>
using namespace std;

class IronMan : public SuperHero
{
public:
	bool in_custume;
	IronMan();
	IronMan(string n, string a, bool alive, bool cust) :SuperHero(n, a, alive)
	{
		in_custume = cust;
	}

	void Print() override
	{
		SuperHero::Print();
		cout << "In custume?: ";
		if (in_custume == true)
			cout << "Yes." << endl;
		else
			cout << "No." << endl;
	}
	void ReSuit()
	{
		if (in_custume == true)
			in_custume = false;
		else
			in_custume = true;
	}
};