#include "stdafx.h"
#include "Animal.h"


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


Animal::~Animal()
{
};

void Animal::setName(string name) {
	Animal::name = name;
};

string Animal::getName() {
	return Animal::name;
};
