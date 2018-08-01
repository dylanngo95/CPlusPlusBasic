#pragma once
#include <string>

using namespace std;

class Animal {

private:
	string name;

public:
	Animal();
	Animal(string);
	Animal(string, int, string);
	Animal(string, int, string, bool);

	~Animal();

	int weight;
	string live;

	void setName(string name);
	string getName();

protected:
	bool isVerterate;
};

