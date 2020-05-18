#include <iostream>
#include "entity.h"
#include "Antihero.h"
#include "Fiend.h"
#include "IronMan.h"
#include "Mutant.h"
#include "SpiderMan.h"
#include "Storm.h"
#include "SuperHero.h"
#include "Symbiote.h"
#include "DrOctopus.h"
#include "SimpleHuman.h"
using namespace std;

int main()
{
	Entity studient("Vicktor", true);
	studient.Print();
	cout << endl;

	SuperHero Denis("Denis", "Super-smart studient", true);
	Denis.Print();
	cout << endl;

	SpiderMan Piter("Peter Parker", "standart spider-man", false, "Ultimate");
	SpiderMan Mails("Miles Morales", "spider-man + invisability + ultrasync", true, "Ultimate");
	Piter.Print();
	cout << '\n';
	Mails.Print();
	cout << endl;

	IronMan Stark("Tony Stark", "Philanhropist, billionaire, genius, has a Iron-Custume", true, true);
	Stark.Print();
	cout << endl;
	Stark.ReSuit();
	Stark.Print();
	cout << endl;
	////////////////
	SuperHero* SupHero = &Stark; //Полиморфизм. Предположим, меняются телами
	Stark.Print();
	cout << endl;
	SupHero = &Piter;
	Piter.Print();
	cout << endl;
	////////////////
	Symbiote Venom("Venom", "Simbiot standart Venom", true, "Eat bad boys", 0);
	Venom.Print();
	cout << endl;

	Storm St("Storm", "Stihii kr4", true, "Giant - Size X - Men");
	St.Print();
	cout << endl;

	DrOctopus Octav("Dr Octavius", "Genius, trantacles", true, "Spider-Man", 4);
	Octav.Print();
	cout << endl;


	SimpleHuman JJJ("J. Jonah Jameson", true, "Jurnalist");
	JJJ.Print();

	return 0;
}