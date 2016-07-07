/*
 * DocumentHTML.cpp
 *
 *  Created on: Jul 7, 2016
 *      Author: pawel
 */

#include "DocumentHTML.h"

void DocumentHTML::write(string data) {
	this->data = "<html>" + data + "</html>";
}

DocumentHTML::~DocumentHTML() {
}

DocumentHTML::DocumentHTML(string name) : Document(name) {
}
