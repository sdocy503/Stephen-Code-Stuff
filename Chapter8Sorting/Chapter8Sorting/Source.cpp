#include <iostream>
#include <string>

using namespace std;

void problemOne();
void problemSeven();
void print(int rows, int array[][7]);
int main() {
	string input;
	while (true) {
		cout << "What problem do you want to view?\nOne or Seven?\n";
		cin >> input;
		if (input == "one" || input == "One") {
			problemOne();
		}
		else if (input == "seven" || input == "Seven") {
			problemSeven();
		}
		else {
			cout << "Please enter a valid choice.\n";
		}
	}
	return 0;
}

void problemOne() {
	int numbers[10] = { 36, 55, 17, 35, 63, 85, 12, 48, 3, 66 };
	int currentNumber;
	bool numberFound;
	int position;
	for (int counter = 0; counter < sizeof(numbers) / sizeof(numbers[0]); counter++) {
		currentNumber = numbers[counter];
		numberFound = false;
		for (int i = 0; i + counter < sizeof(numbers) / sizeof(numbers[0]); i++) {
			if (currentNumber > numbers[i + counter]) {
				currentNumber = numbers[i + counter];
				position = i + counter;
				numberFound = true;
			}
		}
		if (numberFound == true) {
			numbers[position] = numbers[counter];
			numbers[counter] = currentNumber;
		}
		for (int x = 0; x < sizeof(numbers) / sizeof(numbers[0]); x++) {
			cout << numbers[x] << " ";
		}
		cout << "\n";
	}

	cin >> currentNumber;
}

void problemSeven() {
	int times[30][7];
	int speed[15][7];
	int trees[100][7];
	int students[50][7];

	print(50, students);
	print(100, trees);
	print(15, speed);
	print(30, times);
}
void print(int rows, int array[][7]) {
	for (int i = 0; i < rows; i++) {
		for (int x = 0; x < 7; x++) {
			cout << array[i][x] << "\n";
		}
	}
}