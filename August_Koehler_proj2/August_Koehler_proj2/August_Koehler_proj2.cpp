// August_Koehler_proj2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include "Matrix.h"

using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

int main()
{
	//char dims_error[] = "Operand matrices do not have correct dimensions for operation to succeed. Please try again with equal dimensions. Thank you.";
	const char * cat_picture = R"cat(







)cat";

	/*int carry_on = 1;

	while (carry_on) {






	}*/
	// insert code here...
	std::cout << "Hello, World!\n";

	Matrix m = Matrix(2, 2);
	cin >> m;

	Matrix n = Matrix(2, 2);

	Matrix z = Matrix(2, 2);

	n = m;

	n = n + m;

	z = n * m;

	//cout << m << "\n\n" << n;

	cout << z;

	system("PAUSE");

	return 0;
}

