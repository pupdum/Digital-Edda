// amk_proj_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "Game.h"
#include <fstream>


using std::cout;
using std::cin;
using std::endl;
using std::ofstream;
using std::ifstream;

enum WorldMenu { IGM = 0, LOOK = 1, INTERACT_CONT, INTERACT_CREA, CHAR_SHEET, };
enum InGameMenu { EXIT_GAME = 0, SAVE_GAME = 1, LOAD_GAME, CHAR_SHEET, READ_STORY};
int main()
{
	srand(rand());
	
	int start_game;
START_MENU:

	start_game = start_menu();
	int save_num = 0;

	switch (start_game) {
	case 1: //NEW GAME CASE

		//call some functions here that creates everything from scratch except the stuff that would get loaded from the story modules...

		//create die


		//create character --- explain concept beforehand!


		/*Begin story:
		1. Invocation to Muse
		i) Character takes a walk in the countryside, unarmed as one does - give no clue as to which era this could possibly be. Suddenly, a noise or something, screen cuts to:
		2. Show the chapter title, aka Book I chapter I etc
		3. Wake up in a cave, being strapped to a table (either a slab or a card table )
		*/

		//load environment
		//leave this switch
		break;

	case 2: //LOAD GAME CASE

		cout << "\nsave1, save2, or save3? ";
		cin >> save_num;
		//Load from save 1, 2, or 3  the file ok?!?!
		//Then initialize with these values and leave this switch to go play.
		break;

	default:
		cout << "You somehow managed to get an invalid choice from the main menu, so it will try again...\n\n";
		goto START_MENU;
	}

	//this is where the interactive world stuff comes into play





	


    return 0;
}

