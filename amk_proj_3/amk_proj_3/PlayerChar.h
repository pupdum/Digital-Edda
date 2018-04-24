#pragma once
#include "Humanoid.h"
#include <vector>

class PlayerChar :
	public Humanoid
{
private:
	double maxInvWeight;
public:
	PlayerChar();
	~PlayerChar();

	string showFullStats();
};

