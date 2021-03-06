// mathFunctions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

void addition();
void sphere();
void sum();
void triangle();
void naturalLog();

int main()
{
	string whatFunction;
	bool loop = true;

	while (loop == true) {
		cout << "What would you like to do:\n1. Add two number\n2. Calculate volume of a sphere\n3. Calculate the sum of the series\n4. Caclulate the hypotenuse\n5. Natural Log\n6. Quit\n";
		cin >> whatFunction;
		if (whatFunction == "1") {
			addition();
		}
		if (whatFunction == "2") {
			sphere();
		}
		if (whatFunction == "3") {
			sum();
		}
		if (whatFunction == "4") {
			triangle();
		}
		if (whatFunction == "5") {
			naturalLog();
		}
		if (whatFunction == "6") {
			loop = false;
		}
	}
    return 0;
}

void addition() {
	double x = 0;
	double y = 0;

	cout << "What is the first number you want to add?\n";
	cin >> x;
	cout << "What is the second number you want to add?\n";
	cin >> y;
	x += y;
	cout << "The answer is: " << x << endl;
}
void sphere() {
	double x = 0;

	cout << "What is the radius of your sphere?\n";
	cin >> x;
	x = pow(x, 3);
	x = (4.0 / 3.0) * M_PI * x;
	cout << "The answer is: " << x << endl;
}
void sum() {
	double x = 0;

	x += 1 + 2 + 3 + 4 + 5;
	cout << "The answer is: " << x << endl;
}
void triangle() {
	double x = 0;
	double y = 0;

	cout << "What is the first side?\n";
	cin >> x;
	cout << "What is the second side?\n";
	cin >> y;
	x = pow(x, 2);
	y = pow(y, 2);
	x += y;
	x = sqrt(x);
	cout << "The answer is: " << x << endl;
}
void naturalLog() {
	double x = 0;

	cout << "Enter a number bigger than 0.5.\n";
	cin >> x;
	cout << "The answer is: " << log(x) << endl;
}
