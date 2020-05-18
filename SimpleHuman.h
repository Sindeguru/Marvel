#pragma once
#include <iostream>
#include "entity.h"

using namespace std;

class SimpleHuman : public Entity
{
	string job;
public:
	SimpleHuman(string n, bool al, string jb) :Entity(n, al)
	{
		job = jb;
	}
	void Print() override
	{
		Entity::Print();
		cout << "Job: " << job << endl;
	}
};