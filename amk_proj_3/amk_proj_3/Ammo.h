#pragma once
#include "Consumable.h"
using std::string;
class Ammo :
	public Consumable
{
protected:
	double ammoAcc;
	double damMult;

	string ammoType; //what ammo does it use/is it thrown? - appended to desc
	int rangedType; // 0 for thrown, 1 for crossbow, 2 for bow, 3 for firearm, etc...

public:
	Ammo();
	~Ammo();
};

