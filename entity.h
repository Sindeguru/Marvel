#pragma once
#include <iostream>
#include "Nothing.h"
using namespace std;

class Entity: public Nothing
{
public:
	Entity()
	{
		name = "none";
		alive = true;
	}
	Entity(string n, bool al)
	{
		SetName(n);
		alive = al;
	}

	bool alive;
	string name;

	string GetName()
	{
		return name;
	}
	void SetName(string n)
	{
		name = n;
	}

	void Print() override
	{
		cout << "Name: " << name << ". Vital statistics: ";
		if (alive == false)
			cout << "Dead.(Or lost)" << endl;
		else
			cout << "Alive." << endl;
	}
};