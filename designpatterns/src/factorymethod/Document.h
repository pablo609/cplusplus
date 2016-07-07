/*
 * Document.h
 *
 *  Created on: Jul 7, 2016
 *      Author: pawel
 */

#ifndef DOCUMENT_H_
#define DOCUMENT_H_

#include <iostream>

using namespace std;

class Document {
public:
	enum DocType { XML, HTML };

	static Document* makeDocument(DocType type, string name);
	string getName();
	string read();
	virtual void write(string data) = 0;
	virtual ~Document();

protected:
	string name;
	string data;

	Document(string name);
};

#endif /* DOCUMENT_H_ */
