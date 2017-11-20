//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_ABSTRACTFACTORY_H
#define DESIGNPATTERN_ABSTRACTFACTORY_H



class AbstractProductA;
class AbstractProductB;


class AbstractFactory
{
public:
    virtual ~AbstractFactory();
    virtual AbstractProductA* ConcreateProductA() = 0;//纯虚函数  接口
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

#endif //DESIGNPATTERN_ABSTRACTFACTORY_H
