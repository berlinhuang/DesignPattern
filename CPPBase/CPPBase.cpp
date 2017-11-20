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
	vfun(&vb1);//VB1::display
	vfun(&vb2);//VB2::display
	vfun(&vb3);//VB3::display
}

//����ת��
//������Ķ����������ת��Ϊ����Ķ���
//...............��ʼ����������
//.......ָ���������ת��Ϊ�����ָ��
void typeCompatibilityRule()
{
	cout << "---------------------------type compatibility rule" << endl;
	B1 b1;
	B2 b2;
	D d;
	fun(&b1);//B1::display()
	fun(&b2);//B1::display()      
	fun(&d);//B1::display()
}

//�����
void virtualBaseClass()
{
	cout << "---------------------------virtual base class" << endl;
	Derived derived(1);//����������ʱ��ָ�������Ϊ��Զ�����࣬D������Զ������
	derived.fund();//"fun of D"
	derived.fun0();//"fun of Base"
}

//���麯�� ������
void abstractClass()
{
	cout << "---------------------------abstract class" << endl;
	//Base1 base1; //�����಻��ʵ����
	ABase2* base2 =  new ABase2(1);
	ADerived *derived = new ADerived(2);
	a_fun(base2);//ABase2::display() 1
	a_fun(derived);//ADerived::display() 2
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

