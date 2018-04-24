#pragma once
#include "Creature.h"
#include "Container.h"

class Humanoid :
	public Creature
{
protected:
	/*some code here that implements body parts, or at least tries to*/

	 //inventory = new vector(); // some kind of inventory implementation, maybe declare some kind of container class that players can loot
	Container inventory;

	 //equipped items - armor, clothes, tools, weapons, whatever

	 Item onHead; //headgear, will probably change types to hat
	 Item onTorso; //probably change type to shirt
	 Item onLegs; //probably change type to pants
	 Item onShoes; //probably change type to shoes 

	 Item inLeftHand; //weapon, shield, other item
	 Item inRightHand; //so you can go into fights literally just holding your pants I guess...




	//Race of humanoid - probably not gonna affect much right now

	//SKILLS - defaults for NPCs and adjustable for PLAYER
public:
	Humanoid();
	~Humanoid();

	string showFullStats();
	void showInventory();
	void removeFromInventory();
};

