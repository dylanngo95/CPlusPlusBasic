#pragma once
#include <string>
#include <iostream>

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

	void show();

protected:
	bool isVerterate;
};

