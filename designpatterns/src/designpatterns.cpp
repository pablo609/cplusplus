//============================================================================
// Name        : designpatterns.cpp
// Author      : pablo609
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Singleton.h"
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
	cout<<"#### Singleton Test ####"<< endl;
	Singleton* test1;
	Singleton* test2;
	srand(time(NULL));
	Singleton::setType((rand() % 3));

	test1 = Singleton::getInstance();
	test1->printId();

	test2 = Singleton::getInstance();
	test2->printId();

	return 0;
}
