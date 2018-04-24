#pragma once
#include "World.h"
#include <string>
using std::string;
class Map
{
private:
	string roomName; //name of the room!


	// Descriptions of what is in what direction
	string toNorth; //description of that direction
	string toSouth;
	string toEast;
	string toWest;

	string quickDesc; //description as you walk into the room



public:
	Map(string& rN, string& tN, string& tS, string& tE, string& tW, string& qD);
	~Map();

	string lookToN(); //outputs what is in that direction. Might want to have it return void and be a cout in the first place
	string lookToS();
	string lookToE();
	string lookToW();

	string quickLook();

	void openDoor(Map&); //opens the door to another map and the player goes through it...
};

