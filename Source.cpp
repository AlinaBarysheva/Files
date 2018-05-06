РАБОТА С ФАЙЛАМИ
#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>

using namespace std;

string file_name = "old_name.txt";

int main() {
	// Создание и открытие файла.
	ofstream fout(file_name);
	fout << "qwertyuiopasdfghjklzxcvbnm,\n\n\n\n\n\n\nfgsda26456345\n\n\n\n\tnbcvnvbcnvb";
	// Закрытие файла.
	fout.close();

	system("pause");
	cout << endl;

	// Открытие файла для чтения.
	ifstream fin(file_name);
	int count = 0;
	while (!fin.eof()) {
		string str;
		// Чтение строки из файла.
		getline(fin, str);
		cout << str << endl;

		// Прибавляем количество символов строки к счетчику.
		count += str.length();
	}

	system("pause");
	cout << endl;

	// Переименование.
	//int result = rename(file_name.c_str(), "new_name.txt");
	//file_name = "new_name.txt";
	
	system("pause");
	cout << endl;

	// Удаление файла.
	remove(file_name.c_str());

	system("pause");
	return 0;
}
