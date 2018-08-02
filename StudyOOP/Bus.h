#pragma once
#include "Car.h"
#include "PublicTransport.h"

class Bus : public Car, public PublicTransport {
private:
	int label;
public:
	Bus();
	Bus(int, int, string, float, int, float);
	~Bus();

	void show();

protected:

};

