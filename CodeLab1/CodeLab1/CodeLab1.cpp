// CodeLab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


int main()
{
	int input;
	char outputChar;
	int outputInt;
	int x = 0;
	cout << "Enter your number between 0 and 35\n";
	while (x == 0) {
		cin >> input;
		if (input >= 10 && input <= 35) {
			outputChar = input + 87;
			cout << outputChar << endl;
			x = 1;
		}
		else if (input < 10) {
			outputInt = input;
			cout << outputInt << endl;
			x = 1;
		}
		else {
			cout << "Your choice is not valid, try again.\n";
		}

	}
	//cout << output;
    return 0;
}

