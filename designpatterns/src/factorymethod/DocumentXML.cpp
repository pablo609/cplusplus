/*
 * DocumentXML.cpp
 *
 *  Created on: Jul 7, 2016
 *      Author: pawel
 */

#include "DocumentXML.h"

void DocumentXML::write(string data) {
	this->data = "<xml>" + data + "</xml>";
}

DocumentXML::~DocumentXML() {
}

DocumentXML::DocumentXML(string name) : Document(name) {
}
