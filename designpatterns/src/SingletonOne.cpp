/*
 * SingletonOne.cpp
 *
 *  Created on: Jun 2, 2016
 *      Author: pawel
 */

#include "SingletonOne.h"
#include <iostream>

SingletonOne::SingletonOne() : Singleton() {
	std::cout<<"This is SingletonOne"<<std::endl;
}

SingletonOne::~SingletonOne() {
	std::cout<<"Deleting the instance of the SingletonOne"<<std::endl;
}

void SingletonOne::printId() {
	Singleton::printId();
	std::cout<<"This is SingletonOne"<<std::endl;
}
