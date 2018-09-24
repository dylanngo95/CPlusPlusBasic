#pragma once
#include "Animal.h"

class Dog : public Animal {
private:
	int legs;
public:
	Dog();
	Dog(int);
	Dog(int, int, string, bool);
	Dog(int, string, int, string, bool);
	~Dog();

	int getLegs();
	bool getVerherate();
protected: 
	bool isHair;
};

