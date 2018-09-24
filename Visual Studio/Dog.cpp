#include "stdafx.h"
#include "Dog.h"
#include <iostream>

Dog::Dog() {
};


Dog::Dog(int legs) {
	Dog::legs = legs;
};

Dog::Dog(int legs, int weight, string live, bool isVerterate) {
	Dog::legs = legs;
	Dog::weight = weight;
	Dog::live = live;
	Dog::isVerterate = isVerterate;
};

Dog::Dog(int legs, string name, int weight, string live, bool isVerterate) : Animal(name, weight, live, isVerterate) {
	Dog::legs = legs;
};


Dog::~Dog() {
	cout << "[Dog]==>" << Dog::getName() << " was destroyed." << endl;
};

int Dog::getLegs() {
	return Dog::legs;
};

bool Dog::getVerherate() {
	return Dog::isVerterate;
};
