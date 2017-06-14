// CPPBase.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "TypeCompatibilityRule.h"
#include "VirtualBaseClass.h"
#include "VirtualFun.h"
#include "AbstractClass.h"
#include <iostream>
using namespace std;

//�麯��
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

//����ת��
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

//�����
void virtualBaseClass()
{
	cout << "---------------------------virtual base class" << endl;
	Derived derived(1);//����������ʱ��ָ�������Ϊ��Զ�����࣬D������Զ������
	derived.fund();//"fun of D"
	derived.fun0();//"fun of Base"
}

void abstractClass()
{
	cout << "---------------------------abstract class" << endl;
	//Base1 base1; //�����಻��ʵ����
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

