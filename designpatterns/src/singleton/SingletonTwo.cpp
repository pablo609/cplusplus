/*
 * SingletonTwo.cpp
 *
 *  Created on: Jun 2, 2016
 *      Author: pawel
 */

#include "SingletonTwo.h"
#include <iostream>

SingletonTwo::SingletonTwo() : Singleton() {
	std::cout<<"This is SingletonTwo"<<std::endl;
}

SingletonTwo::~SingletonTwo() {
	std::cout<<"Deleting the instance of the SingletonTwo"<<std::endl;
}

void SingletonTwo::printId() {
	Singleton::printId();
	std::cout<<"This is SingletonTwo"<<std::endl;
}
