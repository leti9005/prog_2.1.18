#include <iostream>
#include <string.h>
#include <fstream>

#include "List.h"
#include "Word.h"

using namespace std;

//todo: Путь стартует из папки билда, поэтому такой путь
const string input = "input.txt";
const string output = "output.txt";

int main() {
	string text;

	ifstream inputFile(input, ios::in);

	List<Word> vowels;
	List<Word> consonants;

	if (inputFile.is_open()) {
		string text;

		while (inputFile >> text) {
			Word word(text);

			if (word.isVowel()) {
				vowels.push(word);
			} else {
				consonants.push(word);
			}
		}

		inputFile.close();
	}

	string a = vowels.getElement(0).getValue();

	cout << a << endl;
//	cout << consonants.getElement(0)->value << endl;
}