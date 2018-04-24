#pragma once
#include <vector>
#include "Item.h"

using std::vector;
class Container
{
protected:
	vector<Item> contents;
	double cweight;
public:
	Container();
	~Container();

	void addTo();
	void removeFrom();
	void showContents();
};

