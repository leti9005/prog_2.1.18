#include <iostream>
#include <string.h>
#include <fstream>

#include "List.h"

using namespace std;

//todo: Путь стартует из папки билда, поэтому такой путь
const string input = "input.txt";
const string output = "output.txt";

//class Word {
//	public:
//		string get() {
//			return this->word;
//		}
//
//		Word(string word) {
//			this->word = word;
//		}
//
//	private:
//		string word;
//};



int main() {
	string text;

	ifstream inputFile(input, ios::in);

	List<string> list;

	if (inputFile.is_open()) {
		string word;

		while (inputFile >> word) {
			list.push(word);
		}

		inputFile.close();
	}

	cout << list.getElement(10);
}