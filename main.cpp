#include <iostream>
#include <string.h>
#include <fstream>

using namespace std;

//todo: Относительный путь почему-то не работает
const string input = "/Users/Victor/CLionProjects/prog_2.1.12/input.txt";
const string output = "output.txt";

int main() {
	string text;

	ifstream inputFile(input, ios::in);

	if (inputFile.is_open()) {
		while (getline(inputFile, text)) {
			cout << text << endl;
		}
	}

	inputFile.close();
}