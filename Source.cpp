#include <iostream>
#include <fstream>
#include <string>
#include <cerrno>

using namespace std;

string file_name = "old_name.txt";

int main() {
	// �������� � ��������.
	ofstream fout(file_name);
	fout << "qwertyuiopasdfghjklzxcvbnm,\n\n\n\n\n\n\nfgsda26456345\n\n\n\n\tnbcvnvbcnvb";
	// �������� �����.
	fout.close();

	system("pause");
	cout << endl;

	// �������� ����� ��� ������.
	ifstream fin(file_name);
	int count = 0;
	while (!fin.eof()) {
		string str;
		// ������ ������ �� �����.
		getline(fin, str);
		cout << str << endl;

		// ���������� ���������� �������� ������ � ��������.
		count += str.length();
	}

	system("pause");
	cout << endl;

	// ��������������.
	//int result = rename(file_name.c_str(), "new_name.txt");
	//file_name = "new_name.txt";
	
	system("pause");
	cout << endl;

	// �������� �����.
	remove(file_name.c_str());

	system("pause");
	return 0;
}