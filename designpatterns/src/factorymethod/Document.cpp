/*
 * Document.cpp
 *
 *  Created on: Jul 7, 2016
 *      Author: pawel
 */

#include "DocumentXML.h"
#include "DocumentHTML.h"

Document* Document::makeDocument(DocType type, string name) {
	if(type == Document::XML) {
		return new DocumentXML(name);
	}

	if(type == Document::HTML) {
		return new DocumentHTML(name);
	}

	return 0;
}

string Document::getName() {
	return name;
}

string Document::read() {
	return data;
}

Document::~Document() {
	name.clear();
	data.clear();
}

Document::Document(string name) {
	this->name = name;
}
