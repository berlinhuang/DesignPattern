#include "stdafx.h"
#include "Singleton.h"
#include <iostream>
using namespace std;

Singleton *Singleton::_instance = NULL;
Singleton::Singleton()
{
	cout << "Singleton..." << endl;
}

Singleton* Singleton::getInstance()
{
	if (_instance == NULL)
	{
		_instance = new Singleton();
	}
	return _instance;
}


