#include "stdafx.h"
#include "Animal.h"
#include <iostream>

Animal::Animal()
{
};

Animal::Animal(string name) {
	Animal::name = name;
};

Animal::Animal(string name, int weight, string live) {
	Animal::name = name;
	Animal::weight = weight;
	Animal::live = live;
};

Animal::Animal(string name, int weight, string live, bool isVerterate) {
	Animal::name = name;
	Animal::weight = weight;
	Animal::live = live;
	Animal::isVerterate = isVerterate;
};


Animal::~Animal(){
	cout << "[Animal]==>" << Animal::name << " was destroyed." << endl;
};

void Animal::setName(string name) {
	Animal::name = name;
};

string Animal::getName() {
	return Animal::name;
};

void Animal::show() {
	cout << Animal::name << " is Animal." << endl;
};
