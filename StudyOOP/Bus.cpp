#include "stdafx.h"
#include "Bus.h"

Bus::Bus() {
}

Bus::Bus(int label, int speed, string mark, float price, int power, float ticket) : Engine(power), Car(speed, mark, price), PublicTransport(ticket) {
	Bus::label = label;
}

Bus::~Bus() {
	cout << "[Bus]: is destroy." << endl;
}

void Bus::show() {
	cout << "Bus is line " << label 
		<< " speed " << getSpeed()
		<< " power " << getPower()
		<< " mark " << getMark()
		<< " price " << getPrice()
		<< " ticket " << getTicket() << endl;
}
