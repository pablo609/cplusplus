/*
 * SingletonTwo.h
 *
 *  Created on: Jun 2, 2016
 *      Author: pawel
 */

#ifndef SINGLETONTWO_H_
#define SINGLETONTWO_H_

#include "Singleton.h"

class SingletonTwo: public Singleton {
	friend Singleton;
public:
	virtual void printId();

private:
	SingletonTwo();
	SingletonTwo(SingletonTwo& instance) {};
	virtual ~SingletonTwo();
};

#endif /* SINGLETONTWO_H_ */
