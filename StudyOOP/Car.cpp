#include "stdafx.h"
#include "Car.h"

Car::Car() {
}

Car::Car(int speed, string mark, float price) {
	Car::speed = speed;
	Car::mark = mark;
	Car::price = price;
}

Car::~Car() {
	cout << "[Car]: is destroy." << endl;
}

void Car::show() {
	cout << "This a " << mark << " having a speed of " << speed << " power is " << power << " price: " << price << endl;
}

int Car::getSpeed() {
	return speed;
}

string Car::getMark(){
	return Car::mark;
}

float Car::getPrice() {
	return price;
}


