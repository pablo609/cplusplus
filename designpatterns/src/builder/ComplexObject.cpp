/*
 * ComplexObject.cpp
 *
 *  Created on: Jun 16, 2016
 *      Author: pawel
 */

#include "ComplexObject.h"
#include <iostream>

using namespace std;

void ComplexObject::setHeader(string header) {
	_object["header"] = header;
}

void ComplexObject::setParagraph(string paragraph) {
	_object["paragraph"] = paragraph;
}

void ComplexObject::setFooter(string footer) {
	_object["footer"] = footer;
}

void ComplexObject::display() {
	cout<<_object["header"]<<endl;
	cout<<_object["paragraph"]<<endl;
	cout<<_object["footer"]<<endl;
}

ComplexObject::~ComplexObject() {
	_object.clear();
}
