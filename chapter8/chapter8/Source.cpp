#include <iostream>
#include <string>

using namespace std;

void three();
void six();
void five();


int main() {
	string input;
	while (true) {
		cout << "What problem would you like to view?\n3, 6, or 5?\n";
		cin >> input;
		if (input == "3") {
			three();
		}
		else if (input == "6") {
			six();
		}
		else if (input == "5") {
			five();
		}

	}
	return 0;
}

void three() {
	double beta[20];

	for (int y = 0; y < 20; y++) {
		beta[y] = 0;
	}
	cout << beta[5] << endl;
	beta[9] = 70.5;
	beta[12] = 4 * beta[8] - 15;
	for (int i = 0; i < 20; i++) {
		if (i % 3 == 0) {
			cout << beta[i] << endl;
		}
	}
	cout << beta[19] << endl;
	for (int x = 0; x < 20; x++) {
		cout << beta[x];
		if (x != 0 && (x + 1) % 10 == 0) {
			cout << endl;
		}
	}
}

void six() {
	double heights[10] = { 5.2, 6.3, 5.8, 4.9, 5.2, 5.7, 6.7, 7.1, 5.10, 6.0 };
	int weights[7] = { 120, 125, 137, 140, 150, 180, 210 };
	char specialSymbols[7] = { '$', '#', '%', '@', '&', '! ', '^' };
	string seasons[4] = { "fall", "winter", "spring", "summer" };

}

void five() {
	int myList[10];
	for (int i = 0; i < 10; i++) {
		myList[i] = i;
		cout << myList[i] << endl;
	}
}

