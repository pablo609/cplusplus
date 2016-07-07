/*
 * AbstractFactory.cpp
 *
 *  Created on: Jun 9, 2016
 *      Author: pawel
 */

#include "AbstractFactory.h"

Product* WindowsFactory::createProductOne() {
	return new ProductOne("Windows");
}

Product* WindowsFactory::createProductTwo() {
	return new ProductTwo("Windows");
}

Product* WindowsFactory::createProductThree() {
	return new ProductThree("Windows");
}

WindowsFactory::~WindowsFactory() {
}

Product* UnixFactory::createProductOne() {
	return new ProductOne("Unix");
}

Product* UnixFactory::createProductTwo() {
	return new ProductTwo("Unix");
}

Product* UnixFactory::createProductThree() {
	return new ProductThree("Unix");
}

UnixFactory::~UnixFactory() {
}
