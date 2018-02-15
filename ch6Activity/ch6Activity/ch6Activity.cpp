// ch6Activity.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include <cmath>
using namespace std;

int func1(int x, double y) {
	x += y;
	return x;
}
string join(string one, string two) {
	one = one + " " + two;
	return one;
}
bool number2(double first, double second, double third) {
	first = pow(first, second);
	if (first == third) {
		return true;
	}
	else {
		return false;
	}
}
int mystery(int num) {
	int y = 1;
	if (num == 0) {
		return 1;
	}
	else if (num < 0) {
		return -1;
	}
	else {
		for (int count = 1; count < num; count++) {
			y = y * (num - count);
		}
	}
	return y;
}

int main()
{
	int answer;
	string joinAnswer;
	int numbers;

	answer = func1 (3, 8.5); //Put numbers here to test problem #1 F
	cout << answer << endl;
	joinAnswer = join("John", "Project Manager"); //Put names here to test problem #1 G
	cout << joinAnswer << endl;
	numbers = number2(2, 2, 4); //Put numbers here for testing problem #2
	if (numbers == true) {
		cout << "True" << endl;
	}
	else {
		cout << "False" << endl;
	}
	cout << mystery(6) << endl << mystery(0) << endl << mystery(-5) << endl << mystery(10) << endl;
	return 0;
}



