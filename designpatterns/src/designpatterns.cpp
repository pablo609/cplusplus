//============================================================================
// Name        : designpatterns.cpp
// Author      : pablo609
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <map>
#include "singleton/Singleton.h"
#include "abstractfactory/AbstractFactory.h"
#include "builder/Reader.h"
#include "factorymethod/DocumentXML.h"
#include "factorymethod/DocumentHTML.h"
using namespace std;

int main() {
	srand(time(NULL));

	cout<<"### Factory Method Test ###"<<endl;
	Document* docHtml = Document::makeDocument(Document::HTML, "Document1.html");
	Document* docXml = Document::makeDocument(Document::XML, "Document1.xml");

	docHtml->write("New HTML data");
	docXml->write("New XML data");

	cout<<docHtml->getName()<<" - "<<docHtml->read()<<endl;
	cout<<docXml->getName()<<" - "<<docXml->read()<<endl;

	delete docHtml;
	delete docXml;
	cout<<endl;

	cout<<"### Builder Test ###"<<endl;
	map<string, string> input;
	input["header"] = "Object header";
	input["paragraph"] = "Object paragraph";
	input["footer"] = "Object footer";

	HtmlBuilder html;
	TxtBuilder txt;
	Reader reader;

	reader.setBuilder(&html);
	reader.construct(input);
	html.getResult()->display();
	delete html.getResult();
	reader.setBuilder(&txt);
	reader.construct(input);
	txt.getResult()->display();
	delete txt.getResult();
	cout<<endl;

	cout<<"### Abstract Factory Test ###"<<endl;
	AbstractFactory* factory;
	Product* product[3];

	if(rand() % 2) {
		factory = new WindowsFactory();
	}
	else {
		factory = new UnixFactory();
	}

	product[0] = factory->createProductOne();
	product[1] = factory->createProductTwo();
	product[2] = factory->createProductThree();

	for(int i = 0; i < 3; i++)
	{
		product[i]->display();
		delete product[i];
	}

	delete factory;
	cout<<endl;

	cout<<"### Singleton Test ###"<< endl;
	Singleton* test1;
	Singleton* test2;
	Singleton::setType((rand() % 3));

	test1 = Singleton::getInstance();
	test1->printId();

	test2 = Singleton::getInstance();
	test2->printId();

	return 0;
}
