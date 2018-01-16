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
using namespace std;


int main() {
	ifstream dataFile;
	ofstream output;
	vector<string> in;
	string inString;
	vector<string> words;
	string firstName;
	string lastName;
	double percent;
	double pay;


	dataFile.open("Ch3_Ex6Data.txt");
	output.open("Ch3_Ex6Output.dat");
	while (dataFile.eof() != true) {
		getline(dataFile, inString);
		in.push_back(inString);

		while (in.size() > 0) {
			//cout << in.back() << endl;
			//in.resize(in.size() - 1);

			istringstream iss(in.back());
			vector<string> results((istream_iterator<string>(iss)),
				istream_iterator<string>());
			//cout << results.back() << endl;
			firstName = results[1];
			lastName = results[0];
			//string payString = results[2];
			//string percentString = results[3];
			pay = stod(results[2]);
			percent = stod(results[3]);
			if (percent >= 6.0) {
				pay = pay + 1000.0;
			}
			output << firstName << " " << lastName << " " << pay << endl;
			results.resize(0);
			
			in.resize(in.size() - 1);
		}
	}

	return 0;
}

