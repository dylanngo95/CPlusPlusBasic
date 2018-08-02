#include "stdafx.h"
#include "Cat.h"


Cat::Cat() {
}

Cat::Cat(string name): Animal(name) {
}

Cat::Cat(string name, int weight, string live, bool isVerterate): Animal(name, weight, live, isVerterate) {
}

Cat::Cat(string name, int weight, string live, bool isVerterate, bool isSwiming): Animal(name, weight, live, isVerterate) {
	Cat::isSwiming = isSwiming;
}

Cat::~Cat() {
	cout << "[Cat]==>" << Cat::getName() << " was destroyed" << endl;
}

void Cat::show() {
	cout << Cat::getName() << " is Cat." << endl;
};
