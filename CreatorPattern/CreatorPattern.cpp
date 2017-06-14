// CreatorPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

#include "Singleton.h"

#include "Factory.h"
#include "Product.h"

#include "AbstractFactory.h"
#include "AbstractProduct.h"

#include "Builder.h"
#include "Prod.h"
#include "Director.h"

#include "Prototype.h"

#include <iostream>
using namespace std;

void FactoryPattern()
{
	cout << "---------------------------Factory Pattern" << endl;
	Factory* fac = new ConcreateFactory();
	Product* p = fac->CreateProduct();
}

void AbstractFactoryPattern()
{
	cout << "---------------------------AbstractFactory Pattern" << endl;
	AbstractFactory* cf1 = new ConcreateFactory1();//����������
	cf1->ConcreateProductA();
	cf1->ConcreateProductB();
	AbstractFactory* cf2 = new ConcreateFactory2();//����������
	cf2->ConcreateProductA();
	cf2->ConcreateProductB();
}


void SingletonPattern()
{
	cout << "---------------------------Singleton Pattern" << endl;
	Singleton *singleton = Singleton::getInstance();
}

void BuilderPattern()
{
	cout << "---------------------------Builder Pattern" << endl;
	//1.new ConcreteBuilder ��ѡ������
	//2.new Director ����ָ����
	//3.d->Construct() �����Ʒ
	//1.b->GetProduct() ��ȡԤ�ȶ���õĲ�Ʒ
	Builder *b = new ConcreteBuilder();
	Director *d = new Director(b);
	d->Construct();
	Prod *prod = b->GetProduct();
}

void PrototypePattern()
{
	cout << "---------------------------Prototype Pattern" << endl;
	Prototype *pt = new ConcretePrototype1();
	Prototype* p1 = pt->Clone();
}
int _tmain(int argc, _TCHAR* argv[])
{
	FactoryPattern();
	AbstractFactoryPattern();
	SingletonPattern();
	BuilderPattern();
	PrototypePattern();
	cin.get();
	return 0;
}

