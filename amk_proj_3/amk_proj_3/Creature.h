#pragma once
#include <iostream>
#include <string>

using std::string;
class Creature
{
protected:

	//basic characteristics HERE
	string name; //Name of creature, can be an actual name or just species I guess
	double weight; //weight of the damn thing, may be used in certain calculations
	double height; // in meters! Propably not used except in damage calculations.
	string desc; // main description of creature.

	int status; // 0 = dead; 1 = unconcho; 2 = alive, awake, alert, enthusiastic, 3 = asleep

	//RPG type statistics HERE -----------------------------------------------------------

	const int level; // const int level, only can increase by const functions!
	
	//BASE STATS----------------------------------------------------- max value is 20, average is 10 - can increase over levels or with certain items.
	int strength; //Are you big and burly?
	int coordination; //Are you quick on your feet? Can you hit the golf ball and not scoop up turf? hand eye coordination and agility/dex basically
	int acumen; //Not necessarily how smart you are, but how quickly you pick up on things - kinda a combo of intelligence, wisdom, and perception - could be useful for magic and stuff if that gets implemented
	int moxie; //How tough you are! Are you likely to stay on your feet even when bonked on the head by a giant? Are you gonna be a glass cannon or a bruiser? 
	int swagger; //Do you have an easy time controlling people? Are you naturally easy to get along with? basically Charisma in other systems. Affects dialogue, persuasion, and how your reputation changes (if implemented)

	//Derived stats--------------------------------------------------
	double baseHealth; //Derived from Strength and Moxie
	double currentHealth;
	double damReduction; // derived from any armor, Moxie, and such forth.
	int movementPoints; // controls how many actions can be taken per combat turn, drived from COORDINATION, weight, and height?? -- might depend on species too

	virtual void calcBaseHealth(); //called on creation + level up to calculate new base health. Will be virtual function type thing tbh.
	virtual void calcDamRed(); //calculates base DR and stuff during creation and + level up. 
	virtual void calcmovementPoints(); // derp

	
public:
	Creature();
	virtual ~Creature();

	virtual string showFullStats() = 0; //gives FULL statistics and everything on the creature - do not use except for player's character sheet


	//getters and setters for basic characteristics

	void setName(string);
	double getWeight();
	void setWeight(double);
	string getDesc();
	void setDesc(string);

	double getHeight();
	void setHeight(double);

	int getStatus();
	void setStatus(int);

	//getters and setters for RPG stuff...
	const int getLevel();
	const void setLevel(int);

	//base stats
	int getStr();
	int getCoord();
	int getAcum();
	int getMox();
	int getSwag();

	void setStr(int);
	void setCoord(int);
	void setAcum(int);
	void setMox(int);
	void setSwag(int);

	//functions to modify derived stats

	void modHealth(double); //takes arg double: positive increases health, - decreases health
	void modDamRed(double); // same but with damage reduction!

};

