#pragma once

#include <iostream>
#include <string>

using namespace std;

class Person {
	private:

	public:
		Person();
		Person(string name, int weight);
		~Person();

		string name;
		int weight;

};

