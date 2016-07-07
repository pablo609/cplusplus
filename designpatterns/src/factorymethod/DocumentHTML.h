/*
 * DocumentHTML.h
 *
 *  Created on: Jul 7, 2016
 *      Author: pawel
 */

#ifndef DOCUMENTHTML_H_
#define DOCUMENTHTML_H_

#include "Document.h"

class DocumentHTML : public Document {
public:
	virtual void write(string data);
	virtual ~DocumentHTML();

	DocumentHTML(string name);
};

#endif /* DOCUMENTHTML_H_ */
