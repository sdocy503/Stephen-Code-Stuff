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


double math(double one, double two, double three, double time) {
	double price;

	price = one + two;
	price += three * time;

	return price;
}
void openFile(ifstream &data, ofstream &out, string inFile, string outFile) {
	data.open(inFile);
	out.open(outFile);
}

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
	string inFile;
	string outFile;

	cout << "What is the location of your input file?\n";
	cin >> inFile;
	cout << "What is the location of your output file?\n";
	cin >> outFile;

	openFile(dataFile, output, inFile, outFile);

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

		cost[0] = math(initialPrice, secondPrice, afterRate, 12);

		cost[1] = math(initialPrice, secondPrice, afterRate, 27);

		cost[2] = math(initialPrice, secondPrice, afterRate, 42);

		cost[3] = math(initialPrice, secondPrice, afterRate, 57);

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
		output << setprecision(2) << fromCity << "      " << toCity << "    " << cost[0] << "       " << cost[1] << "      " << cost[2] << "      " << cost[3] << endl;
		results.resize(0);
	}
	output.open("output.dat");
	dataFile.close();
	cout << "Check the output file now.\n";
	return 0;
}

