/*
 * SingletonOne.h
 *
 *  Created on: Jun 2, 2016
 *      Author: pawel
 */

#ifndef SINGLETONONE_H_
#define SINGLETONONE_H_

#include "Singleton.h"

class SingletonOne: public Singleton {
	friend Singleton;
public:
	virtual void printId();

private:
	SingletonOne();
	SingletonOne(SingletonOne& instance) {};
	virtual ~SingletonOne();
};

#endif /* SINGLETONONE_H_ */
