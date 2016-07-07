/*
 * Singleton.cpp
 *
 *  Created on: Jun 2, 2016
 *      Author: pawel
 */

#include "Singleton.h"
#include "SingletonOne.h"
#include "SingletonTwo.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Singleton* Singleton::_instance = NULL;
SingletonDestroyer Singleton::_destroyer;
int Singleton::_type = 0;

Singleton::Singleton() {
	std::cout<<"Creating the first instance of the Singleton"<<std::endl;
	_id = rand();
}

Singleton* Singleton::getInstance() {
	if(_instance == NULL)
	{
		srand(time(NULL));

		switch(_type)
		{
		case 1:
			_instance = new SingletonOne;
			break;
		case 2:
			_instance = new SingletonTwo;
			break;
		default:
			_instance = new Singleton;
			break;
		}

		_destroyer.setSingleton(_instance);
	}

	return _instance;
}

void Singleton::setType(int type)
{
	_type = type;
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
