#include "stdafx.h"
#include "Game.h"


Game::Game() //NEW GAME CONSTRUCTOR
{

}

Game::Game(save_file)
{
}


Game::~Game()
{
}

int start_menu()
{
	int start_menu_l = 0, start_men_choice = 0;
	cout << "\n\n\n\n\n\n" << "Welcome to your very own Digital Edda\n\n" << endl;

	while (start_menu_l == 0) {
		cout << "Would you like to:\n\n" << "  1) START a new game?\n  2)LOAD a saved game? (not yet implemented)\n"
			<< "  3) READ credits?\n  0) EXIT the game?\n\n" << endl;
		cin >> start_men_choice;

		switch (start_men_choice)
		{
		case 1: cout << "Starting NEW GAME" << endl;
			
			start_menu_l = 1;
			return 1;
			break;

		case 2:
			cout << "Load which game?" << endl;
			//call some function here that initializes and creates everything from FILE
			start_menu_l = 2;
			return 2;
			break;

		case 3:
			cout << "This game was made by August Koehler" << endl;
			break;

		case 0:
			cout << "Please play again!" << endl;
			exit(EXIT_SUCCESS);
			break;

		default:
			cout << " Please enter a valid input." << endl;
			break;
		}

	}
}

int igm()
{
	
	int choice;

	cout << "\n\n 1) SAVE game" << endl
		<< " 2) LOAD game" << endl
		<< " 3) open CHARACTER SHEET and INVENTORY" << endl
		<< " 4) READ the story so far" << endl
		<< " 0) EXIT game (Save first!)" << endl
		<< "? ";

	cin >> choice;

	return choice;
}

int world_menu()
{
	int choice;

	cout << "\n\n 1) LOOK" << endl
		<< " 2) INTERACT with CONTAINER" << endl
		<< " 3) INTERACT with CREATURE" << endl
		<< " 4) open CHARACTER SHEET and INVENTORY" << endl
		<< " 0) open MENU" << endl
		<< "? ";

	cin >> choice;


	return choice;
}
