/*
 * Product.h
 *
 *  Created on: Jun 9, 2016
 *      Author: pawel
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include <iostream>

using namespace std;

class Product {
public:
	virtual void display() = 0;
	virtual ~Product() {} ;
protected:
	void setPlatform(string platform) { _platform = platform; };
	string getPlatform() { return _platform; };
private:
	string _platform;
};

class ProductOne : public Product {
public:
	ProductOne(string platform);
	virtual ~ProductOne();
	virtual void display();
};

class ProductTwo : public Product {
public:
	ProductTwo(string platform);
	virtual ~ProductTwo();
	virtual void display();
};

class ProductThree : public Product {
public:
	ProductThree(string platform);
	virtual ~ProductThree();
	virtual void display();
};

#endif /* PRODUCT_H_ */
