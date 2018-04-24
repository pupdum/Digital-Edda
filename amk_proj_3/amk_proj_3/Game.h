#pragma once
#include "Dice.h"
#include "Item.h"
#include "Consumable.h"
#include "Ammo.h"
#include "Weapon.h"
#include "RangedWep.h"
#include "Creature.h"
#include "Humanoid.h"
#include "PlayerChar.h"
#include "World.h"

class Game
{
protected:
	Dice game_die;
	PlayerChar game_player;
	World game_world;




	int gameState;
public:
	Game();
	Game(Dice&, PlayerChar&, World& );
	Game(save_file); //game constructor, takes arg of a save file to read and copy values from!
	~Game();
	
	void loadSave(); //Takes an argument of save file name or something! 
};

//HELPER NONMEMBER FUNCTIONS FOR MAIN AND OTHER THINGS

int start_menu();

int igm();

int world_menu();