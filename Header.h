#pragma once
#ifndef HEADER1_H 
#define HEADER1_H 

#include <iostream> 
#include <string> 
using namespace std;
struct Abonent {
	string fio;
	string department;
	int booksTaken;
};
void inputAbonents(Abonent abonents[], int n);
string findMaxDepartment(Abonent abonents[], int n);

#endif