#include "ReadFile.h"

int ReadFile::count()
{
	ifstream file("FileToRead.txt");
	string word;
	int words = 0;

	while (file >> word) {
		++words;
	}
	file.close();
	return words;

}

string* ReadFile::load(int w) {
	int a = w, i=0;
	string* array = new string[a];
	ifstream file;
	file.open("FileToRead.txt");
	while (!file.eof()) {
		file >> array[i];
		//cout << array[i]<<endl;
		i++;
	}
	file.close();
	return array;
}

void ReadFile::write(string* wypisz, int a) {
	for (int i = 0; i < a; i++) {
		cout << wypisz[i]<<endl;
	}
}

string* ReadFile::wpisz(int w, string* file)
{
	ofstream zapisz;
	zapisz.open("FileToWrite.txt");
	for (int i = 0; i < w; i++) {
		zapisz << file[i]<<" ";
	}

	zapisz.close();
	return 0;
}

void ReadFile::moreData()
{
	int* losowe=new int[dane] ;
	srand(time(NULL));
	for (int j = 0; j < dane; j++) {
		losowe[j] = rand() % 1000;
	}
	ofstream dopisz;
	dopisz.open("Test.txt");
	for (int i = 0; i < dane; i++) {
		dopisz << losowe[i] << " ";
	}

	dopisz.close();
	delete[] losowe;
}

string* ReadFile::load_2()
{
	int a = dane, i = 0;
	string* array = new string[dane];
	ifstream file;
	file.open("Test.txt");
	while (!file.eof()) {
		file >> array[i];
		//cout << array[i]<<endl;
		i++;
	}
	file.close();
	return array;
}

void ReadFile::pytanie() {
	char T;
	cout << "Potrzeba wiecej danych?" << endl << "wpisz t jeœli tak, wpisz cokolwiek innego, a wy³¹czysz program: ";
	cin >> T;
	if (T == 't' || T == 'T');
	else exit(0);
}

string* ReadFile::wpisz_2( string* file)
{
	ofstream zapisz;
	zapisz.open("Test_1.txt");
	for (int i = 0; i < 1000; i++) {
		zapisz << file[i] << " ";
	}

	zapisz.close();
	return 0;
}