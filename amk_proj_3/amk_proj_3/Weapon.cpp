#include "stdafx.h"
#include "Weapon.h"


Weapon::Weapon()
{
}


Weapon::~Weapon()
{
}


double Weapon::getinhAcc()
{
	return inhAcc;
}

void Weapon::setinhAcc(double u)
{
	inhAcc = u;
}

double Weapon::getbDamage()
{
	return bDamage;
}

void Weapon::setbDamage(double u)
{
	bDamage = u;
}

double Weapon::getRange()
{
	return range;
}

void Weapon::setRange(double)
{
}

int Weapon::getstrToWield()
{
	return 0;
}

void Weapon::setstrToWield(int)
{
}
