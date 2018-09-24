#include "stdafx.h"
#include "Engine.h"
#include <iostream>

using namespace std;

Engine::Engine() {
	cout << "[Engine]: is instance." << endl;
}

Engine::Engine(int power) {
	Engine::power = power;
	cout << "[Engine]: is instance." << endl;

}

Engine::~Engine() {
	cout << "[Engine]: is destroy." << endl;
}

void Engine::show() {
	cout << "This is an engine having a power of " << Engine::power << " KWH " << endl;
}

int Engine::getPower() {
	return Engine::power;
}
