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

	List<int> list;

	list.push(2);
	list.push(2);

	list.push(2);

	cout << list.getSize();


	if (inputFile.is_open()) {
		while (getline(inputFile, text)) {
			cout << text << endl;
		}

		inputFile.close();
	}





}