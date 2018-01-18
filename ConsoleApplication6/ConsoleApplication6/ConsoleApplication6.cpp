// ConsoleApplication6.cpp : Defines the entry point for the console application.
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
	string firstName;
	string lastName;
	double percent;
	double pay;


	dataFile.open("Ch3_Ex6Data.txt");
	output.open("Ch3_Ex6Output.dat");
	while (dataFile.eof() != true) {
		getline(dataFile, inString);
		istringstream iss(inString);
		vector<string> results((istream_iterator<string>(iss)),
			istream_iterator<string>());
		//cout << results.back() << endl;
		cout << results[2] << endl;
		firstName = results[1];
		lastName = results[0];
		//string payString = results[2];
		//string percentString = results[3];
		pay = stod(results[2]);
		percent = stod(results[3]);
			
		//pay = 80000.75f;
		cout << fixed;
		cout << setprecision(2) << firstName << " " << lastName << " " << pay << " " << percent << endl;
		if (percent >= 6.0) {
			pay = pay + 1000.0;
		}
		output << fixed;
		output << setprecision(2) << firstName << " " << lastName << " " << pay << endl;
		results.resize(0);
		
	}

	return 0;
}

