#include <iostream>
#include <Windows.h>
#include "Testing.h"

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� ������������ ������������ ���������� �� ������� �� 10.000 �����:\n";
	Testing::DisplayTestTableProceduralApplication(1e4, 10);

	system("pause");
	return 0;
}