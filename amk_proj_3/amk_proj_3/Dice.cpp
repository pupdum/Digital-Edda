#include "stdafx.h"
#include "Dice.h"

using std::cout;
using std::endl;

Dice::Dice() : difficulty(1)
{
}



Dice::Dice(int diff) : difficulty(diff)
{
	cout << "Difficulty = ";
	switch (diff)
	{
	case 0:
		cout << "Easy ( Dice are slightly loaded )" << endl;
		break;
	case 1:
		cout << "Medium ( No adjustments to die rolls )" << endl;
		break;
	case 2: 
		cout << "Hard ( The RNG gods do not look down favorably upon you. Be warned )" << endl;
		break;
	default:
		cout << "Defaulting to medium because you put in something very wrong." << endl;
		break;
	}
}

Dice::~Dice()
{
}

int Dice::playerRoll()
{
	int d_out;
	d_out = rand() % 100 + 1;

	if (this->difficulty == 0) { //if easy
		if (d_out < 75) {
			d_out += (int)d_out * 0.5; //when roll is gonna be less than 75, bump it up by half of whatever it was. Not gonna make everything succeeed, but will greatly improve chances of it.
		}

	}
	else if (this->difficulty == 2) { //if hard
		if (d_out > 60) {
			d_out -= (int)d_out * 0.5; //when roll is gonna be > than 60, drop it down by half of whatever it was. Not gonna make everything fail, but will greatly improve chances of it.
		}
	}
	


	return d_out;
	
}

int Dice::npcRoll() {
	int d_out;
	d_out = rand() % 100 + 1;
	return d_out;
}