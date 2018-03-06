// amk_proj1.cpp : Defines the entry point for the console application.
//
/*
	Author: August Koehler
	Date: 2/16/18
	Description: Main file for this project, controls everything else.
*/

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <vector>
#include "Testfunctions.h"
#include "Halley.h"


using namespace std;

int main()
{
	int keep_going = 1;
	double g1, g2;
	while (keep_going) {
		cout << "Please enter a guess for the root of function F(x) = x^2 -5x + 6 : ";
		cin >> g1;
		cout << "\n\nPlease enter a guess for the root of function F(x) = cos( 2x ) : ";
		cin >> g2;
		int wow = 0;
		//cout << "\nRecursive result for F(x) = x^2 -5x + 6 and guess " << g1 << " is: " << HalleyRecursiveA(g1);
		//cout << "\nIterative result for F(x) = x^2 -5x + 6 and guess " << g1 << " is: " << HalleyIterativeA(g1) << endl;

		//cout << "\nRecursive result for F(x) = cos( 2x ) and guess " << g2 << " is: " << HalleyRecursiveB(g2);
		//cout << "\nIterative result for F(x) = cos( 2x ) and guess " << g2 << " is: " << HalleyIterativeB(g2) << endl;
		std::vector<double>* v = new std::vector<double>();
		std::vector<double>  resIA(1), resIB(1); //creates vectors to make it easy to generate the lists

		cout << "Iteration # Recursive Halley's Method Root # Iterative Halley's Method Root" << endl; //table header
		v = hRA(g1); //initializes first element to the very first run through of halley's
		resIA.at(0) = HIA(g1); // ditto

		cout << "  1   #  " << v->at(0) << "     #  " << resIA[0] << endl; //starts the table


		for (int i = 1; i < (int) v->size(); i++) {
			resIA.push_back( HIA(resIA[i-1])); //ditto
			
			if ((*v)[i] != (*v)[i - 1]) { // controls how the table is printed. Seems like recursive takes a few more iterations so I'm using it to control the overall thingy.

				if ((resIA[i] - resIA[i - 1] >= 0.0001) || (resIA[i] - resIA[i - 1] <= -0.0001)) { // if the iterative is still "going", it will print new outputs

					cout << " " << i + 1 << "   #    " << v->at(i) << "  #  " << resIA[i] << endl; // prints next row in table
					wow = i + 1; // works to stop the iterative one from going any further while it loops through the recursive results 
					continue;
				}

				else {

					cout << "  " << i + 1 << "   #  " << v->at(i) << " #  " << resIA[wow] << endl; //will print the same value for iterative each time through until recursive hits the boundary
					continue;
				}
			}
			else { //when recursive meets the boundaries, it will skip a few lines and exit the loop!
				cout << "\n\n" << endl;
				break;
			}
		}
		

		

		std::vector<double>* y = new std::vector<double>();

		cout << "Iteration # Recursive Halley's Method Root # Iterative Halley's Method Root" << endl; //table header
		y = hRB(g2); //initializes first element to the very first run through of halley's
		resIB.at(0) = HIB(g2); // ditto

		cout << "  1   #  " << y->at(0) << "    #  " << resIB[0] << endl; //starts the table


		for (int i = 1; i < (int) y->size(); i++) {
			resIB.push_back(HIB(resIB[i - 1])); //ditto

			if ((*y)[i] != (*y)[i - 1]) { // controls how the table is printed. Seems like recursive takes a few more iterations so I'm using it to control the overall thingy.

				if ((resIB[i] - resIB[i - 1] >= 0.0001) || (resIB[i] - resIB[i - 1] <= -0.0001)) { // if the iterative is still "going", it will print new outputs

					cout << "  " << i + 1 << "   #  " << y->at(i) << " #  " << resIB[i] << endl; // prints next row in table
					wow = i + 1; // works to stop the iterative one from going any further while it loops through the recursive results 
					continue;
				}

				else {

					cout << "  " << i + 1 << "   #  " << y->at(i) << " #  " << resIB[wow] << endl; //will print the same value for iterative each time through until recursive hits the boundary
					continue;
				}
			}
			else { //when recursive meets the boundaries, it will skip a few lines and exit the loop!
				cout << "\n\n" << endl;
				break;
			}
		}

		


		cout << "Enter '1' to continue or '0' to quit...  ";
		cin >> keep_going;
	}
    return 0;
}

