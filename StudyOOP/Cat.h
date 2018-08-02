#pragma once
#include "Animal.h"
class Cat : public Animal {
private:

public:
	Cat();
	Cat(string);
	Cat(string, int, string, bool);
	Cat(string, int, string, bool, bool);
	~Cat();

	bool isSwiming;
	void show();
	
protected:

};

