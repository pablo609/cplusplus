/*
 * AbstractFactory.h
 *
 *  Created on: Jun 9, 2016
 *      Author: pawel
 */

#ifndef ABSTRACTFACTORY_H_
#define ABSTRACTFACTORY_H_

#include "Product.h"

class AbstractFactory {
public:
	virtual Product* createProductOne() = 0;
	virtual Product* createProductTwo() = 0;
	virtual Product* createProductThree() = 0;
	virtual ~AbstractFactory() {};
};

class WindowsFactory : public AbstractFactory {
public:
	virtual Product* createProductOne();
	virtual Product* createProductTwo();
	virtual Product* createProductThree();
	virtual ~WindowsFactory();
};

class UnixFactory : public AbstractFactory {
public:
	virtual Product* createProductOne();
	virtual Product* createProductTwo();
	virtual Product* createProductThree();
	virtual ~UnixFactory();
};

#endif /* ABSTRACTFACTORY_H_ */
