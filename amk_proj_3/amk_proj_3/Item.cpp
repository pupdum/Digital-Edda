#include "stdafx.h"
#include "Item.h"


Item::Item() : name("Generic_Item"), value(1), weight(1)
{
}


Item::~Item()
{
}

string Item::getName()
{
	return name;
}

void Item::setName(string s)
{
	name = s;
}

double Item::getWeight()
{
	return weight;
}

void Item::setWeight(double w)
{
	weight = w;
}

double Item::getValue()
{
	return value;
}

void Item::setValue(double v)
{
	value = v;
}

string Item::getDesc()
{
	return desc;
}

void Item::setDesc(string nDesc)
{
	desc = nDesc;
}




