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
	//�������� �����
	string file_in, word_in, word_fn;
	ofstream file;
	file.open("test.txt", ios::out | ios::app);
	if (!file) {
		cout << "O����� ����� - ���������� ������� ��� ������ ������!";
		cin.sync(); cin.get(); return 1;
	}

	// ���� ���� � ����
	file << "to" << endl << "be" << endl << "or" << endl << "not" << endl << "to" << endl << "be" << endl;


	file.close();
	ifstream file2;
	file2.open("test.txt", ios::in);
	if (!file2) {
		cout << "O����� ����� - ���������� ������� ��� ������ ������!";
		cin.sync(); cin.get(); return 2;
	}
	// ���� ����� ������������� � ����� ��� � �����
	cout << "������� �����: ";
	cin >> word_fn;

	while (file2 >> word_in)
		if (word_in == word_fn)
		{
			cout << "����� '" << word_in << "' �������.\n";
			system("PAUSE");
			file2.close();
			return 0;
		}
	if (word_in != word_fn)
	{
		cout << "����� '" << word_fn << "' �� �������\n";

		system("PAUSE");
		file2.close();
		return 0;
	}
}