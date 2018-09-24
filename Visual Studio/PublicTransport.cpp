#include "stdafx.h"
#include "PublicTransport.h"
#include <iostream>

using namespace std;

PublicTransport::PublicTransport() {
}

PublicTransport::PublicTransport(int power, float ticket) : Engine(power){
	PublicTransport::ticket = ticket;
}

PublicTransport::PublicTransport(float ticket) : Engine(){
	PublicTransport::ticket = ticket;
}

PublicTransport::~PublicTransport() {
	cout << "[PublicTransport]: is destroy." << endl;
}

float PublicTransport::getTicket() {
	return PublicTransport::ticket;
};

void PublicTransport::show() {
	cout << "This is public transport a ticket of " << ticket << " and power is " << getPower() << endl;
};
