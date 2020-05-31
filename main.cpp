#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

//todo: Путь стартует из папки билда, поэтому такой путь
const string input = "input.txt";
const string output = "output.txt";

int main() {
	string text;

	ifstream inputFile(input, ios::in);

	if (inputFile.is_open()) {
		while (getline(inputFile, text)) {
			cout << text << endl;
		}

		inputFile.close();
	}

}