/*
 * Builder.cpp
 *
 *  Created on: Jun 16, 2016
 *      Author: pawel
 */

#include "Builder.h"

void HtmlBuilder::buildHeader(string header) {
	_result->setHeader("HTML - " + header);
}

void HtmlBuilder::buildParagraph(string paragraph) {
	_result->setParagraph("HTML - " + paragraph);
}

void HtmlBuilder::buildFooter(string footer) {
	_result->setFooter("HTML - " + footer);
}

void TxtBuilder::buildHeader(string header) {
	_result->setHeader("TXT - " + header);
}

void TxtBuilder::buildParagraph(string paragraph) {
	_result->setParagraph("TXT - " + paragraph);
}

void TxtBuilder::buildFooter(string footer) {
	_result->setFooter("TXT - " + footer);
}
