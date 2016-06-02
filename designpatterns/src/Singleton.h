/*
 * Singleton.h
 *
 *  Created on: Jun 2, 2016
 *      Author: pawel
 */

#ifndef SINGLETON_H_
#define SINGLETON_H_

class SingletonDestroyer;

class Singleton {
public:
	static Singleton* getInstance();
	void printId();

private:
	static Singleton* _instance;
	static SingletonDestroyer _destroyer;
	int _id;

private:
	Singleton();
	Singleton(Singleton& instance) {};
	~Singleton();

friend SingletonDestroyer;
};

class SingletonDestroyer
{
public:
	void setSingleton(Singleton* instance);
	~SingletonDestroyer();

private:
	Singleton* _instance;
};

#endif /* SINGLETON_H_ */
