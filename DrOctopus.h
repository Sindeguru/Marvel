#pragma once
#include <iostream>
#include "Fiend.h"
using namespace std;

class DrOctopus : public Fiend
{
public:
	int tentacle;
	DrOctopus(string n, string a, bool al, string enem, int tent) :Fiend(n, a, al, enem)
	{
		tentacle = tent;
	}
	void Print() 
	{
		Fiend::Print();
		cout << "Working tentacles: " << tentacle << endl;
	}
};