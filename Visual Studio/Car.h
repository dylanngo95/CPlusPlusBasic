#pragma once
#include "Engine.h"
#include <string>
#include <iostream>

using namespace std;

class Car : public virtual Engine {
	int speed;
	string mark;
	float price;

private:

public:
	Car();
	Car(int, string, float);
	virtual ~Car();

	void show();
	int getSpeed();
	string getMark();
	float getPrice();


protected:

};

