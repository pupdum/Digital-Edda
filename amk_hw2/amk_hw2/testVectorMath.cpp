// amk_hw2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include "VectorMath.h"
using namespace std;

int main()
{
	int going = 1;
	int no_comp, selector;
	char gniog;
	double v1[3];
	double v2[3];

	while (going) {
		cout << "Enter number of Vector Components: ";
		cin >> no_comp;
		cout << "\nOperations Available: \n(0) Addition \n(1) Subtraction \n(2) Magnitude \n(3) Dot Product \n(4) Cross Product" << "\n\nPlease Select an Operation: ";
		cin >> selector;

		
		cout << "Enter Component Values of Vector 1" << endl;
		if (no_comp = 1) {
				cout << "i: ";
				cin >> v1[0];
		} else if (no_comp = 2) {
				cout << "i: ";
				cin >> v1[0];
				cout << "\nj:";
				cin >> v1[1];
		} else {
				cout << "i: ";
				cin >> v1[0];
				cout << "\nj: ";
				cin >> v1[1];
				cout << "\nk: ";
				cin >> v1[2];
		}
		if (selector != 2) {
			if (no_comp = 1) {
				cout << "i: ";
				cin >> v2[0];
			}
			else if (no_comp = 2) {
				cout << "i: ";
				cin >> v2[0];
				cout << "\nj:";
				cin >> v2[1];
			}
			else {
				cout << "i: ";
				cin >> v2[0];
				cout << "\nj: ";
				cin >> v2[1];
				cout << "\nk: ";
				cin >> v2[2];
			}
		}
		

		switch (selector) {
		case 0: 
			break; //select and executes addition function
		case 1:
			break; //selects and executes subtraction
		case 2:
			break; // Magnitude
		case 3: 
			break; // *Product
		case 4:
			break; // X-Product!!
		default: cout << "\n\nInvalid operation, please enter 0, 1, 2, 3, or 4\n" << endl;
			continue; //restarts loop if given invalid inputs because I don't wanna make a mess.
		}
		cout << "Try New (Y/N)? ";
		cin >> gniog;
		switch (gniog) {
		case 'y':
		case 'Y': 
			break; //if y or Y, will just exit switch and start loop over
		case 'n':
		case 'N': going = 0;
			break; //if n or N, will set the loop variable to be false, thusly quitting the program
		}
	}
	cout << "XXxx_Pr0gR4m__T3rMin4t3d" << endl;
    return 0;
}

