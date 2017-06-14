#include "stdafx.h"
#include "AbstractFactory.h"
#include "AbstractProduct.h"

#include <iostream>
using namespace std;

AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}
/**************************************************/
ConcreateFactory1::ConcreateFactory1()
{

}

ConcreateFactory1::~ConcreateFactory1()
{

}


AbstractProductA* ConcreateFactory1::ConcreateProductA()// �ӿ�ʵ��
{
	return new ProductA1();
}

AbstractProductB* ConcreateFactory1::ConcreateProductB()
{
	return new ProductB1();
}
/**************************************************/
ConcreateFactory2::ConcreateFactory2()
{

}

ConcreateFactory2::~ConcreateFactory2()
{

}


AbstractProductA* ConcreateFactory2::ConcreateProductA()// �ӿ�ʵ��
{
	return new ProductA2();
}

AbstractProductB* ConcreateFactory2::ConcreateProductB()
{
	return new ProductB2();
}