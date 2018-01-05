#include "stdafx.h"
#include "iostream"
#include "string"
#include <vector>
using namespace std;

int main()
{
	vector< double > odd;
	vector< double > even;
	string input;
	double numInput;
	double remainderNum;
	bool loop = true;
	int evenSize;
	int oddSize;
	int backNum;
	int evenTotal = 0;
	int oddTotal = 0;

	while (loop == true) {
		cin >> input;
		if (input == "stop") {
			loop = false;
		}
		else {
			numInput = stod(input);
			remainderNum = remainder(numInput, 2);
			//cout << remainderNum << endl;
			if (remainderNum == 1 || remainderNum == -1) {
				//cout << "Number is odd" << endl;
				odd.push_back(numInput);
			}
			else if (remainderNum == 0) {
				//cout << "Number is even" << endl;
				even.push_back(numInput);
			}
			else {
				cout << "Error";
			}
		}
	}
	evenSize = even.size();
	oddSize = odd.size();
	//cout << "The size of the even vector is " << even.size() << endl;
	//cout << "The size of the odd vecotor is " << odd.size() << endl;
	//cout << even.back() << endl << odd.back() << endl;
	while (evenSize > 0) {
		backNum = even.back();
		evenTotal = evenTotal + backNum;
		even.resize(evenSize - 1);
		evenSize = evenSize - 1;
	}
	while (oddSize > 0) {
		backNum = odd.back();
		oddTotal = oddTotal + backNum;
		odd.resize(oddSize - 1);
		oddSize = oddSize - 1;
	}
	cout << "Total of even numbers is " << evenTotal << endl;
	cout << "Total of odd numbers is " << oddTotal << endl;
    return 0;
}