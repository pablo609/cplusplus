/*
 * Singleton.cpp
 *
 *  Created on: Jun 2, 2016
 *      Author: pawel
 */

#include "Singleton.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Singleton* Singleton::_instance = NULL;
SingletonDestroyer Singleton::_destroyer;

Singleton::Singleton() {
	std::cout<<"Creating the first instance of the Singleton"<<std::endl;
	_id = rand();
}

Singleton* Singleton::getInstance() {
	if(_instance == NULL)
	{
		srand(time(NULL));
		_instance = new Singleton;
		_destroyer.setSingleton(_instance);
	}

	return _instance;
}

void Singleton::printId()
{
	std::cout<<"The singleton id is: "<<_id<<std::endl;
}

Singleton::~Singleton()
{
	std::cout<<"Deleting the instance of the Singleton"<<std::endl;
	_instance = NULL;
}

void SingletonDestroyer::setSingleton(Singleton* instance)
{
	_instance = instance;
}

SingletonDestroyer::~SingletonDestroyer()
{
	delete _instance;
}
