#pragma once
#include "Item.h"
#include <string>
using std::string;

class Weapon :
	public Item
{
protected:
	double inhAcc; //inherent accuracy factor
	double bDamage; //base damage
	int handsToWield; // how many hands does it take to wield?
	double range; // For a melee weapon, it is how far you can reach. For a ranged weapon, it is how far it shoots/ throws/ whatever.

	int strToWield; //what your *strength* must be to use this item

public:
	Weapon();
	~Weapon();

	double getinhAcc();
	void setinhAcc(double);

	double getbDamage();
	void setbDamage(double);

	double getRange();
	void setRange(double);

	int getstrToWield();
	void setstrToWield(int);
};

