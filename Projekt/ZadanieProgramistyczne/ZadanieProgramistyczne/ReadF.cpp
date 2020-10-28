#include "ReadF.h"

int ReadF::count()
{

	ifstream file;
	file.open("readF.txt", ios::in);
	string word;

	while (file >> word) {
		++words;
	}
	return words;

}

int ReadF::tablica()
{
	int a = this->words;
	int* array = new int [a];
	for (int i = 0; i < a; i++) {
		cout << array[i] << endl;
	}
	
	return 0;
}
