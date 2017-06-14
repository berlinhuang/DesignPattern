// CPPBase.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "TypeCompatibilityRule.h"
#include "VirtualBaseClass.h"
#include "VirtualFun.h"
#include "AbstractClass.h"
#include <iostream>
using namespace std;

//虚函数
void virtualFun()
{
	cout << "--------------------------virtual fun" << endl;
	VB1 vb1;
	VB2 vb2;
	VB3 vb3;
	vfun(&vb1);
	vfun(&vb2);
	vfun(&vb3);
}

//类型转换
void typeCompatibilityRule()
{
	cout << "---------------------------type compatibility rule" << endl;
	B1 b1;
	B2 b2;
	D d;
	fun(&b1);
	fun(&b2);
	fun(&d);
}

//虚基类
void virtualBaseClass()
{
	cout << "---------------------------virtual base class" << endl;
	Derived derived(1);//將建立对象时所指定的类称为最远派生类，D就是最远派生类
	derived.fund();//"fun of D"
	derived.fun0();//"fun of Base"
}

void abstractClass()
{
	cout << "---------------------------abstract class" << endl;
	//Base1 base1; //抽象类不能实例化
	ABase2* base2 =  new ABase2(1);
	ADerived *derived = new ADerived(2);
	a_fun(base2);
	a_fun(derived);
}


int _tmain(int argc, _TCHAR* argv[])
{
	virtualFun();
	typeCompatibilityRule();
	virtualBaseClass();
	abstractClass();
	cin.get();
	return 0;
}

