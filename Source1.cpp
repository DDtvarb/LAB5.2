#include "Header.h"

int main() {
	setlocale(LC_ALL, "RU");
	int n;
	cout << "Введите количество абонентов: ";
	cin >> n;

	Abonent abonents[100];

	inputAbonents(abonents, n);

	string maxDepartment = findMaxDepartment(abonents, n);

	cout << endl << "Кафедра с максимальным количеством книг: " << maxDepartment << endl;

	return 0;
}