
#include "stdafx.h"
#include "Person.h"
#include <iostream>

using namespace std;

Person::Person() {
};

Person::Person(string name, int weight) {
	Person::name = name;
	Person::weight = weight;
	cout << "Object: " << name << " is instance." << endl;
};


Person::~Person() {
	cout << "Object: " << name << " is destroy." << endl;
};

