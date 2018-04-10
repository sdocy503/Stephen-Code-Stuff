#include <iostream>
#include <string>

using namespace std;

int largest();
void numberCount(int number, int& oddCount, int& evenCount, int& zeroCount);

int main() {
	string input;
	int answer;
	bool loop = true;
	int oddCount;
	int evenCount;
	int zeroCount;
	int checkNumber;

	while (loop) {
		cout << "Welcome to my program! Please choose one of the following:\n(a) Find the largest number from a list of positives (-1 to quit)\n";
		cout << "(b) Given positive a number displays the number of even, odd, and zero digits\n(c) Quit program\n";
		cin >> input;
		if (input == "a") {
			answer = largest();
			cout << "The largest number is " << answer << endl;
		}
		else if (input == "b") {
			cout << "What number would you like to check?\n";
			cin >> checkNumber;
			numberCount(checkNumber, oddCount, evenCount, zeroCount);
			cout << "Odd Numbers: " << oddCount << " Even Numbers: " << evenCount << " Zeros: " << zeroCount << endl;
		}
		else {
			loop = false;
		}
	}
	return 0;
}

int largest() {
	int biggestNumber = 0;
	int currentNumber;
	while (true) {
		cout << "Enter a number\n";
		cin >> currentNumber;
		if (currentNumber == -1) {
			return biggestNumber;
		}
		else if (currentNumber > biggestNumber) {
			biggestNumber = currentNumber;
		}
	}
}

void numberCount(int number, int& oddCount, int& evenCount, int& zeroCount) {
	zeroCount = 0;
	oddCount = 0;
	evenCount = 0;
	int digit;
	bool loopyLoop = true;

	while (loopyLoop) {
		digit = number % 10;
		if (digit % 2 == 1.0) {
			oddCount++;
		}
		else if (digit == 0) {
			zeroCount++;
		}
		else if (digit % 2 == 0){
			evenCount++;
		}
		if (number >= 10) {
			number -= digit;
			number /= 10;
		}
		else {
			loopyLoop = false;
		}
		cout << digit << " " << digit % 2 << " " << number << endl;
	}
}