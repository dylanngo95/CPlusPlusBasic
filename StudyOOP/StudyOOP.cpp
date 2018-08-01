// StudyOOP.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "Person.h"

using namespace std;
Person *persons;
int length;

void initPerson() {
	Person tinhngo("Tinh Ngo", 66);
	Person *tuananh = new Person("Tuan Anh", 70);
	Person *sonnguyen, person("Son Nguyen", 69);
	sonnguyen = &person;

	delete tuananh;
};

void inputPerson() {
	cout << "Enter person max: ";
	cin >> length;

	persons = new Person[length];
	for (int i = 0; i < length; i++) {
		string name;
		int weight;
		cout << "Enter person name: ";
		cin >> name >> weight;
		

		Person person(name, weight);
		persons[i] = person;

	}

};

void outputPerson() {
	cout << "==================>" << endl;
	for (int i = 0; i < length; i++) {
		cout << "Person Name: " << persons[i].name << " Weight: " << persons[i].weight << endl;
	}
};

int main()
{
	//initPerson();

	inputPerson();


	cout << "<===================>" << endl;
	delete [] persons;

	outputPerson();


	cout << "Stop Program." << endl;
	system("pause");
    return 0;
};
