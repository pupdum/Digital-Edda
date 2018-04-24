#pragma once
#include <cmath>
#include <iostream>

class Dice
{
private:
	int difficulty; //0 = easy, 1 = normal/med, 2 = hard

public:
	Dice();
	Dice(int diff);
	~Dice();
	int playerRoll();
	int npcRoll();


};

