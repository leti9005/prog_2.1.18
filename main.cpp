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

			if (word.getSize() != 0) {
				if (word.isLastLetterVowel()) {
					vowels.push(word);
				} else {
					consonants.push(word);
				}
			}

		}

		inputFile.close();
	}


	int i = 0;
	for (i; i < consonants.getSize(); i++) {
		Word elem = consonants.getElement(i);
		cout << elem.getValue() << ' ' << elem.lettersRatio() << endl;
	}

	cout << endl << endl;
	consonants.sort();

	i = 0;
	for (i; i < consonants.getSize(); i++) {
		Word elem = consonants.getElement(i);
		cout << elem.getValue() << ' ' << elem.lettersRatio() << endl;
	}
}