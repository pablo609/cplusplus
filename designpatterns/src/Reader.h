/*
 * Reader.h
 *
 *  Created on: Jun 16, 2016
 *      Author: pawel
 */

#ifndef READER_H_
#define READER_H_

#include "Builder.h"

class Reader {
public:
	void setBuilder(Builder* builder);
	void construct(map<string, string>& input);

private:
	Builder* _builder;
};

#endif /* READER_H_ */
