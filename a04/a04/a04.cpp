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
	double maleAverage;
	double femaleAverage;
	double ccAverage;
	double unAverage;
	double average;
	double maleCounter = 1;
	double femaleCounter = 1;
	double ccCounter = 1;
	double unCounter = 1;
	double counter;
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
	dataFile.close();
	cout << endl;

	//cout << maleScores.size() << endl << femaleScores.size() << endl;
	double counterOther = 0;
	average = maleScores.front();
	counter = 1;
	while (counter < maleScores.size()) {
		average = average + maleScores[counter];
		counter++;
		counterOther++;
		//cout << "Male Score Loop" << endl;
	}
	counter = 0;
	while (counter < femaleScores.size()) {
		average = average + femaleScores[counter];
		counter++;
		counterOther++;
		//cout << "Female Score Loop" << endl;
	}
	average = average / counterOther;

	maleAverage = maleScores.back();
	maleScores.resize(maleScores.size() - 1);
	while (maleScores.size() > 0) {
		maleAverage = maleAverage + maleScores.back();
		maleScores.resize(maleScores.size() - 1);
		maleCounter++;
	}
	femaleAverage = femaleScores.back();
	femaleScores.resize(femaleScores.size() - 1);
	while (femaleScores.size() > 0) {
		femaleAverage = femaleAverage + femaleScores.back();
		femaleScores.resize(femaleScores.size() - 1);
		femaleCounter++;
	}
	ccAverage = ccScores.back();
	ccScores.resize(ccScores.size() - 1);
	while (ccScores.size() > 0) {
		ccAverage = ccAverage + ccScores.back();
		ccScores.resize(ccScores.size() - 1);
		ccCounter++;
	}
	unAverage = unScores.back();
	unScores.resize(unScores.size() - 1);
	while (unScores.size() > 0) {
		unAverage = unAverage + unScores.back();
		unScores.resize(unScores.size() - 1);
		unCounter++;
	}
	maleAverage = maleAverage / maleCounter;
	femaleAverage = femaleAverage / femaleCounter;
	ccAverage = ccAverage / ccCounter;
	unAverage = unAverage / unCounter;

	cout << setprecision(2) << "Male Average " << maleAverage << endl << "Female Average " << femaleAverage << endl;
	cout << setprecision(2) << "Community College Average " << ccAverage << endl << "University Average " << unAverage << endl;
	cout << setprecision(2) << "Average of All " << average << endl;
		
	return 0;
}

