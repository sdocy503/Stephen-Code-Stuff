// Chapter5Part2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	int i;
	bool isPrime = true;

	cout << "Enter a positive number\n";
	cin >> n;

	for (i = 2; i <= n / 2; ++i){
		if (n % i == 0){
			isPrime = false;
			break;
		}
	}
	if (isPrime) {
		cout << "This is a prime number\n";
	}
	else if (isPrime == false){
		cout << "This is not a prime number\n";
	}
	else {
		cout << "Error\n";
	}
	return 0;
}

