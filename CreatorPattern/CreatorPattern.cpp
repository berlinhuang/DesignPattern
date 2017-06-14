// CreatorPattern.cpp : 定义控制台应用程序的入口点。
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
	AbstractFactory* cf1 = new ConcreateFactory1();//声明派生类
	cf1->ConcreateProductA();
	cf1->ConcreateProductB();
	AbstractFactory* cf2 = new ConcreateFactory2();//声明派生类
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
	//1.new ConcreteBuilder 挑选构造者
	//2.new Director 创建指挥者
	//3.d->Construct() 构造产品
	//1.b->GetProduct() 获取预先定义好的产品
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

