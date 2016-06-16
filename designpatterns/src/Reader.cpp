/*
 * Reader.cpp
 *
 *  Created on: Jun 16, 2016
 *      Author: pawel
 */

#include "Reader.h"

void Reader::setBuilder(Builder* builder) {
	_builder = builder;
}

void Reader::construct(map<string, string>& input) {
	map<string, string>::iterator iter = input.begin();
	for(; iter != input.end(); ++iter)
	{
		if((iter->first).compare("header") == 0)
			_builder->buildHeader(iter->second);
		else if((iter->first).compare("paragraph") == 0)
			_builder->buildParagraph(iter->second);
		else if((iter->first).compare("footer") == 0)
			_builder->buildFooter(iter->second);
	}
}
