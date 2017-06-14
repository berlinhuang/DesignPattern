#ifndef _ABSTRACTFACTORY_H_
#define _ABSTRACTFACTORY_H_

class AbstractProductA;
class AbstractProductB;


class AbstractFactory
{
public:
	virtual ~AbstractFactory();
	virtual AbstractProductA* ConcreateProductA() = 0;//´¿Ðéº¯Êý  ½Ó¿Ú
	virtual AbstractProductB* ConcreateProductB() = 0;
protected:
	AbstractFactory();
private:

};

class ConcreateFactory1 : public AbstractFactory
{
public:
	ConcreateFactory1();
	~ConcreateFactory1();
	AbstractProductA* ConcreateProductA();
	AbstractProductB* ConcreateProductB();
protected:
private:
};

class ConcreateFactory2 : public AbstractFactory
{
public:
	ConcreateFactory2();
	~ConcreateFactory2();
	AbstractProductA* ConcreateProductA();
	AbstractProductB* ConcreateProductB();
protected:
private:
};
#endif