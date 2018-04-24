#pragma once
#include <string>

using std::string;
class Item
{
protected:
	string name;
	double weight;
	double value;
	string desc;
	int quantity;
public:
	Item();
	~Item();
	string getName();
	void setName(string);
	double getWeight();
	void setWeight(double);
	double getValue();
	void setValue(double);

	string getDesc();
	void setDesc(string);

	int getQuantity();
	void setQuantity(int);

	int operator++(int);
	int operator--(int);
};



