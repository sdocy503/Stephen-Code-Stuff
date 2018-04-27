#include <iostream>
#include <string>

using namespace std;

string removeVowel(string input);
int main() {
	string word;
	string oldWord;

	cout << "Please enter a string and i will translate the word.\n";
	cin >> word;
	oldWord = word;
	word = removeVowel(word);
	if (oldWord != word) {
		cout << "Your word in pig latin is " << word << ".\n";
	}
	else {
		cout << "That's not a word, it has no vowels.\n";
	}
	cin >> word;

	return 0;
}

string removeVowel(string input) {
	string final = input;
	string begin;
	int x = input.length();
	int i = 0;
	if (x == 2 && input[1] == 'y') {
		begin = input[0];
		input.erase(0, 1);
		input += begin + "ay";
		i += x;
	}
	if (input[0] == 'a' || input[0] == 'e' || input[0] == 'i' || input[0] == 'o' || input[0] == 'u' || input[0] == 'A' || input[0] == 'E' || input[0] == 'I' || input[0] == 'O' || input[0] == 'U') {
		input += "yay";
		i += x;
	}
	while (i < x) {
		if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u' || input[i] == 'A' || input[i] == 'E' || input[i] == 'I' || input[i] == 'O' || input[i] == 'U') {
			begin = input.substr(0, i);
			input.erase(0, i);
			input += begin + "ay";
			i += x;
		}
		else {
			i++;
		}
	}
	return input;
}