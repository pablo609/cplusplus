/*
 * Builder.h
 *
 *  Created on: Jun 16, 2016
 *      Author: pawel
 */

#ifndef BUILDER_H_
#define BUILDER_H_

#include "ComplexObject.h"

class Builder {
public:
	Builder() { _result = new ComplexObject; }
	virtual void buildHeader(string header) = 0;
	virtual void buildParagraph(string paragraph) = 0;
	virtual void buildFooter(string footer) = 0;
	ComplexObject* getResult() {
		return _result;
	}

protected:
	ComplexObject* _result;
};

class HtmlBuilder : public Builder {
public:
	virtual void buildHeader(string header);
	virtual void buildParagraph(string paragraph);
	virtual void buildFooter(string footer);
};

class TxtBuilder : public Builder {
public:
	virtual void buildHeader(string header);
	virtual void buildParagraph(string paragraph);
	virtual void buildFooter(string footer);
};

#endif /* BUILDER_H_ */
