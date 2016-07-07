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
	friend SingletonDestroyer;

public:
	static Singleton* getInstance();
	static void setType(int type);
	virtual void printId();

private:
	static Singleton* _instance;
	static SingletonDestroyer _destroyer;
	static int _type;
	int _id;

protected:
	Singleton();
	Singleton(Singleton& instance) {};
	virtual ~Singleton();
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
