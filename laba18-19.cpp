#include <stdio.h>
#include <iostream>
#include <fstream>
#include <cstdalign>
#include <ctime>
#include <random>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	//—оздание файла
	string file_in, word_in, word_fn;
	ofstream file;
	file.open("test.txt", ios::out | ios::app);
	if (!file) {
		cout << "Oшибка файла - невозможно открыть дл€ записи данных!";
		cin.sync(); cin.get(); return 1;
	}

	// ¬вод слов в файл
	file << "to" << endl << "be" << endl << "or" << endl << "not" << endl << "to" << endl << "be" << endl;


	file.close();
	ifstream file2;
	file2.open("test.txt", ios::in);
	if (!file2) {
		cout << "Oшибка файла - невозможно открыть дл€ записи данных!";
		cin.sync(); cin.get(); return 2;
	}
	// ¬вод слова пользователем и поиск его в файле
	cout << "¬ведите слово: ";
	cin >> word_fn;

	while (file2 >> word_in)
		if (word_in == word_fn)
		{
			cout << "—лово '" << word_in << "' найдено.\n";
			system("PAUSE");
			file2.close();
			return 0;
		}
	if (word_in != word_fn)
	{
		cout << "—лово '" << word_fn << "' не найдено\n";

		system("PAUSE");
		file2.close();
		return 0;
	}
}