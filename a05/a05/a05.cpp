// a05.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <iomanip>
using namespace std;


int main() {
	ifstream dataFile;
	ofstream output;
	string inString;
	string fromCity;
	string toCity;
	double initialPrice;
	double secondPrice;
	double afterRate;
	double finalPrice = 0;
	double cost [4] = {};

	dataFile.open("input.txt");
	output.open("output.dat");
	output << "City From    City To    15 mins    30 mins    45 mins    60 mins" << endl << endl;
	while (dataFile.eof() != true) {
		getline(dataFile, inString);
		istringstream iss(inString);
		vector<string> results((istream_iterator<string>(iss)),
			istream_iterator<string>());

		fromCity = results[0];
		toCity = results[1];
		initialPrice = stod(results[2]);
		secondPrice = stod(results[3]);
		afterRate = stod(results[4]);

		finalPrice = initialPrice + secondPrice;
		finalPrice += afterRate * 12;
		cost[0] = finalPrice;

		finalPrice = initialPrice + secondPrice;
		finalPrice += afterRate * 27;
		cost[1] = finalPrice;

		finalPrice = initialPrice + secondPrice;
		finalPrice += afterRate * 42;
		cost[2] = finalPrice;

		finalPrice = initialPrice + secondPrice;
		finalPrice += afterRate * 57;
		cost[3] = finalPrice;

		if (toCity == "Delhi") {
			toCity = "Delhi  ";
		}
		else if (toCity == "London") {
			
			toCity = "London ";
		}
		else if (toCity == "Bombay") {
			toCity = "Bombay ";
		}

		output << fixed;
		output << setprecision(2) << fromCity << "      " << toCity << "      " << cost[0] << "      " << cost[1] << "      " << cost[2] << "      " << cost[3] << endl;
		results.resize(0);
	}
	output.open("output.dat");
	dataFile.close();
	return 0;
}

