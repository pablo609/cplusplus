/*
 * Product.cpp
 *
 *  Created on: Jun 9, 2016
 *      Author: pawel
 */

#include "Product.h"

ProductOne::ProductOne(string platform) {
	setPlatform(platform);
}

ProductOne::~ProductOne() {
	setPlatform("");
}

void ProductOne::display() {
	cout<<"ProductOne on platform "<<getPlatform()<<endl;
}

ProductTwo::ProductTwo(string platform) {
	setPlatform(platform);
}

ProductTwo::~ProductTwo() {
	setPlatform("");
}

void ProductTwo::display() {
	cout<<"ProductTwo on platform "<<getPlatform()<<endl;
}

ProductThree::ProductThree(string platform) {
	setPlatform(platform);
}

ProductThree::~ProductThree() {
	setPlatform("");
}

void ProductThree::display() {
	cout<<"ProductThree on platform "<<getPlatform()<<endl;
}
