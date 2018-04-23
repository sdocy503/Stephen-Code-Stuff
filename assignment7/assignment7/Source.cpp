#include <iostream>
#include <string>

using namespace std;

string removeVowel(string input);
int main() {
	string word;
	cout << "Please enter a string and i will remove the vowels.\n";
	cin >> word;
	word = removeVowel(word);
	cout << "Your word without vowels is " << word << endl;
	cin >> word;

	return 0;
}

string removeVowel(string input) {
	string final = input;;
	int x = input.length();
	int i = 0;
	//cout << x;
	while(i < x) {
		x = input.length();
		//cout << i << endl;
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
			input.erase(i, 1);
			//cout << "removed" << endl;
		}
		else {
			i++;
		}
	}
	return input;
}