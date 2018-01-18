// a04.cpp : Defines the entry point for the console application.
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
	string name;
	string college;
	string gender;
	string filePath;
	double score;
	vector <double> maleScores;
	vector <double> femaleScores;
	vector <double> ccScores;
	vector <double> unScores;


	cout << "Name the path of the score file.\n";
	cin >> filePath;
	dataFile.open(filePath);
	//output.open("Ch3_Ex6Output.dat");
	while (dataFile.eof() != true) {
		getline(dataFile, inString);
		istringstream iss(inString);
		vector<string> results((istream_iterator<string>(iss)),
			istream_iterator<string>());

		name = results[0];
		college = results[2];
		gender = results[1];
		score = stod(results[3]);

		if (gender == "M") {
			maleScores.push_back(score);
		}
		else if (gender == "F") {
			femaleScores.push_back(score);
		}
		else {
			cout << "Gender Error\n";
		}
		if (college == "UN") {
			unScores.push_back(score);
		}
		else if (college == "CC") {
			ccScores.push_back(score);
		}
		else {
			cout << "College Error\n";
		}
		cout << fixed;
		cout << setprecision(2) << name << " " << college << " " << gender << " " << score << endl;

		//output << fixed;
		//output << setprecision(2) << firstName << " " << lastName << " " << pay << endl;
		results.resize(0);
	}

		

	return 0;
}

