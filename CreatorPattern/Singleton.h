#ifndef __SINGLETON_H_
#define __SINGLETON_H_
#include <iostream>
//Singleton Pattern
class Singleton
{
private:
	static Singleton* _instance;
protected:
	Singleton();
public:
	static Singleton* getInstance();
	~Singleton()
	{
		if (_instance != NULL)
			delete _instance;
	}
};

#endif