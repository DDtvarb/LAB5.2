#include "Header.h"

void inputAbonents(Abonent abonents[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "¬ведите фамилию абонента #" << i + 1 << ": ";
		cin >> abonents[i].fio;

		cout << "¬ведите кафедру абонента #" << i + 1 << ": ";
		cin >> abonents[i].department;

		cout << "¬ведите количество книг, вз€тых абонентом #" << i + 1 << ": ";
		cin >> abonents[i].booksTaken;
	}
}

string findMaxDepartment(Abonent abonents[], int n) {
	string maxDepartment;
	int maxBooks = 0;

	for (int i = 0; i < n; i++) {
		if (abonents[i].booksTaken > maxBooks) {
			maxBooks = abonents[i].booksTaken;
			maxDepartment = abonents[i].department;
		}
	}

	return maxDepartment;
}

