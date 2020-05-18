#pragma once
#include "Mutant.h"

class Storm : public Mutant
{
public:
	string universe;
	Storm(string n, string a, bool al, string unv) :Mutant(n, a, al)
	{
		universe = unv;
	}
	void Print() override
	{
		Mutant::Print();
		cout << "Unvierse: " << universe << endl;
	}
};