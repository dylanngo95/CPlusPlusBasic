#include <iostream>

#include <hello.h>

using namespace std;

Hello::Hello() {
    Hello::name = "Name default";
}

void Hello::sayHello() {
    cout << "Hello " << Hello::name << endl;
}
