// quadraticsolver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



using namespace std;

int main()
{
	float a, b, c, inside_thing;
	cout << "Enter the three coefficients of your quadratic in decreasing powers of x." << endl;
	cin >> a >> b >> c;
	inside_thing = (b*b) - 4 * a*c;
	if (inside_thing > 0)
		cout << "Root 1 is:" << ((-1 * b) + sqrt(inside_thing)) / (2 * a) << " and root 2 is:" << ((-1 * b) - sqrt(inside_thing)) / (2 * a) << endl;
	else
		cout << "Roots are imaginary sorry about that have a nice day" << endl;

    return 0;
}

