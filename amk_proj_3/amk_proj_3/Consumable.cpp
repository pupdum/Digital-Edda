#include "stdafx.h"
#include "Consumable.h"


Consumable::Consumable() //makes a default small health potion
{
	name = "Cheap Health Potion";
	weight = 0.25; //lbs
	value = 5.00; //dollarydooos I dunno what unit I'll use yet.
	desc = "Adds 15 to your current health when imbibed.";
	effectValue = 15.0;

}

Consumable::Consumable(string, double)
{
}


Consumable::Consumable(int quick_potion)
{
	weight = 0.25; //lbs

	switch (quick_potion)
	{
	case 3:
		name = "Healing Powder";
		value = 15.00; //dollarydooos I dunno what unit I'll use yet.
		desc = "A small (presumably plastic or goat bladder) bag of a white-ish powder. You don't think it is FDA approved. Adds 60 to your current health when ingested.";
		effectValue = 60.0;
		break;
	case 2:
		name = "Some lightly expired painkillers";
		value = 10.00; //dollarydooos I dunno what unit I'll use yet.
		desc = "Adds 30 to your current health when ingested. The packet says to not take more than 6 in 24 hours, but there are only three pills left.";
		effectValue = 30.0;
		break;
	case 1:
	default:
		name = "Cheap health potion";
		value = 5.00; //dollarydooos I dunno what unit I'll use yet.
		desc = "A small metal can, painted red. It's unclear what is in it, but you feel a little better when you drink it. Adds 15 to your current health when imbibed.";
		effectValue = 15.0;
		break;
	}
}

Consumable::~Consumable()
{
}

double Consumable::useEffect()
{
	return 0.0;
}

void Consumable::consumedItem()
{
	quantity--;
	if (quantity <= 0) {
		cout << "\n\nYou have no more " << name << "(s)!" << endl;
	}
	else {
		cout << "\n\nYou have " << quantity << " " << name << "(s) remaining!" << endl;
	}
}


