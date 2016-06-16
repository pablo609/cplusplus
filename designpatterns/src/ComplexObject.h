/*
 * ComplexObject.h
 *
 *  Created on: Jun 16, 2016
 *      Author: pawel
 */

#ifndef COMPLEXOBJECT_H_
#define COMPLEXOBJECT_H_

#include <map>
#include <string>

using namespace std;

class ComplexObject {
public:
	void setHeader(string header);
	void setParagraph(string paragraph);
	void setFooter(string footer);
	void display();
	~ComplexObject();

private:
	map<string, string> _object;
};

#endif /* COMPLEXOBJECT_H_ */
