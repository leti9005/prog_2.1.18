#include <iostream>
#include <string.h>
#include <fstream>

#include "List.h"
#include "Word.h"

using namespace std;

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

	vowels.sort();
	consonants.sort();

	ofstream outputFile(output);
	if (outputFile.is_open()) {
		outputFile << "Согласные: " << endl << endl;

		for (int i = 0; i < consonants.getSize(); i++) {
			Word elem = consonants.getElement(i);
			outputFile << elem.getValue() << ' ' << elem.lettersRatio() << endl;
		}

		outputFile << endl;

		outputFile << "Гласные: " << endl << endl;

		for (int i = 0; i < vowels.getSize(); i++) {
			Word elem = vowels.getElement(i);
			outputFile << elem.getValue() << ' ' << elem.lettersRatio() << endl;
		}

		outputFile.close();
	}
}