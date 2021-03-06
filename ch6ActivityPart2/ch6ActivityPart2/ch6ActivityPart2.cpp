// ch6ActivityPart2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<iomanip>
#include <vector>
using namespace std;

double numbers[3];

void traceMe(double x, double y) {
	double z;
	if (x != 0)
		z = sqrt(y) / x;
	else
	{
		cout << "Enter a nonzero number: ";
		cin >> x;
		cout << endl;
		z = floor(pow(y, x));
	}
	//cout << fixed << showpoint << setprecision(2);
	//cout << x << ", " << y << ", " << z << endl;
	numbers[1] = x;
	numbers[2] = y;
	numbers[3] = z;
}

int main()
{
	double one, two;
	vector <double> xyz;
	cout << "Enter two numbers: ";
	cin >> one >> two;
	cout << endl;
	traceMe(one, two);
	cout << fixed << showpoint << setprecision(2);
	cout << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << endl;
	traceMe(two, one);
	cout << numbers[0] << ", " << numbers[1] << ", " << numbers[2] << endl;
	return 0;
}
