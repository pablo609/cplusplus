//============================================================================
// Name        : designpatterns.cpp
// Author      : pablo609
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Singleton.h"
#include "AbstractFactory.h"
using namespace std;

int main() {
	srand(time(NULL));

	cout<<"### Abstract Factory Test ###"<<endl;
	AbstractFactory* factory;
	Product* product[3];
	if(rand() % 2) {
		factory = new WindowsFactory();
	}
	else {
		factory = new UnixFactory();
	}
	product[0] = factory->createProductOne();
	product[1] = factory->createProductTwo();
	product[2] = factory->createProductThree();
	for(int i = 0; i < 3; i++)
	{
		product[i]->display();
	}

	cout<<"### Singleton Test ###"<< endl;
	Singleton* test1;
	Singleton* test2;
	Singleton::setType((rand() % 3));

	test1 = Singleton::getInstance();
	test1->printId();

	test2 = Singleton::getInstance();
	test2->printId();

	return 0;
}
