// CodeLab2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


int main()
{
	float side1;
	float side2;
	float side3;
	float sum;
	float hypo;
	float hypoSquare;

	cout << "Enter the first side of your triangle.\n";
	cin >> side1;
	cout << "Enter the second side of your triangle.\n";
	cin >> side2;
	cout << "Enter the third side of your triangle.\n";
	cin >> side3;
	if (side1 > side2 && side1 > side3) {
		hypo = side1;
		side2 = side2 * side2;
		side3 = side3 * side3;
		hypoSquare = hypo * hypo;
		sum = side2 + side3;
		if (sum == hypoSquare) {
			cout << "Your triangle is a right triangle.\n";
		}
		else {
			cout << "Your triangle is not a right triangle.\n";
		}
	}
	else if (side2 > side1 && side2 > side3) {
		hypo = side2;
		side1 = side1 * side1;
		side3 = side3 * side3;
		hypoSquare = hypo * hypo;
		sum = side1 + side3;
		if (sum == hypoSquare) {
			cout << "Your triangle is a right triangle.\n";
		}
		else {
			cout << "Your triangle is not a right triangle.\n";
		}
	}
	else if (side3 > side1 && side3 > side2) {
		hypo = side3;
		side2 = side2 * side2;
		side1 = side1 * side1;
		hypoSquare = hypo * hypo;
		sum = side2 + side1;
		if (sum == hypoSquare) {
			cout << "Your triangle is a right triangle.\n";
		}
		else {
			cout << "Your triangle is not a right triangle.\n";
		}
	}
	else {
		cout << "Error could not compute what side is hypotonuse.\n";
	}

    return 0;
}

