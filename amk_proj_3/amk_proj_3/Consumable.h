#pragma once
#include "Item.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;
using std::string;
class Consumable :
	public Item
{
protected:

	double effectValue;


public:
	//default constructor; makes cheap health potion
	Consumable();

	//standard constructor, takes name of effect, value of effect, then yadda yadda; don't use it unless you have to
	Consumable(string, double);
	//takes an integer value as reference to quickly make a 1,2,3 level health potion or 4,5,6 for the three tiers of another kind and so on. Will flesh out later.
	Consumable(int quick_potion);
	~Consumable();
	//function that is probably not even gonna be necessary tbh
	double useEffect();

	void consumedItem();



};

