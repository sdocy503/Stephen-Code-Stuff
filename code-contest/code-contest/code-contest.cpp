// code-contest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
using namespace std;


int main()
{
	float weightOne;
	float costOne;
	float weightTwo;
	float costTwo;
	float pricePerPoundOne;
	float pricePerPoundTwo;
	float pricePerOunceOne;
	float pricePerOunceTwo;

		
	cin >> weightOne;
	cin >> costOne;
	cin >> weightTwo;
	cin >> costTwo;
	pricePerOunceOne = costOne / weightOne;
	pricePerOunceTwo = costTwo / weightTwo;
	pricePerPoundOne = pricePerOunceOne * 16;
	pricePerPoundTwo = pricePerOunceTwo * 16;
	if (pricePerPoundOne < pricePerPoundTwo) {
		cout << "item 1 is a better buy.  Item 1 is $" << pricePerOunceOne << " per ounce.  Item 2 is $" << pricePerOunceTwo << " per ounce.";
	}
	else if (pricePerPoundTwo < pricePerPoundOne) {
		cout << "item 2 is a better buy.  Item 1 is $" << pricePerOunceOne << " per ounce.  Item 2 is $" << pricePerOunceTwo << " per ounce.";
	}
	else if (pricePerPoundOne == pricePerPoundTwo) {
		cout << "item 1 and item 2 cost the same.  Item 1 is $" << pricePerOunceOne << " per ounce.  Item 2 is $" << pricePerOunceTwo << " per ounce.";
	}
	else {
		cout << "Error";
	}
    return 0;
}

