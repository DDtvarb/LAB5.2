#include "Header.h"

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "������� ���������� ���������: ";
	cin >> n;

	Abonent abonents[100];

	inputAbonents(abonents, n);

	string maxDepartment = findMaxDepartment(abonents, n);

	cout << endl << "������� � ������������ ����������� ����: " << maxDepartment << endl;

	return 0;
}