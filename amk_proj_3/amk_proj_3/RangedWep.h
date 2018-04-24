#pragma once
#include "Weapon.h"
#include <string>
using std::string;

class RangedWep :
	public Weapon
{
protected:
	string ammoType; //what ammo does it use/is it thrown? - appended to desc
	int rangedType; // 0 for thrown, 1 for crossbow, 2 for bow, 3 for firearm, etc...


public:
	RangedWep();
	~RangedWep();

	void wepLoad();
	void wepUnload();

	double fire();
};

