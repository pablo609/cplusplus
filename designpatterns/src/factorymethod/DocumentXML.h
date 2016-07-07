/*
 * DocumentXML.h
 *
 *  Created on: Jul 7, 2016
 *      Author: pawel
 */

#ifndef DOCUMENTXML_H_
#define DOCUMENTXML_H_

#include "Document.h"

class DocumentXML : public Document {
public:
	virtual void write(string data);
	virtual ~DocumentXML();

	DocumentXML(string name);
};

#endif /* DOCUMENTXML_H_ */
