#include <iostream>
using namespace std;

class Base//����Base
{
private:
	int var0;
public:
	Base(int var) :var0(var)//Base�๹�캯��
	{
		cout << "Member of Base" << endl;
	}
	void fun0()
	{
		cout << "fun of Base" << endl;
	}
};

/****************************************************************/
class Base1 :virtual public Base //Base��ΪC�������
{
private:
	int var1;
public:
	Base1(int var) :Base(var)//Base1�๹�캯�����ڳ�ʼ�����ж�������ʼ����
	{
		cout << "Member of Base1" << endl;
	}
};

/****************************************************************/
class Base2 :virtual public Base //Base����C�������
{
private:
	int var2;
public:
	Base2(int var) :Base(var)//Base2�๹�캯�����ڳ�ʼ�����ж�������ʼ��
	{
		cout << "Member of Base2" << endl;
	}
};

/****************************************************************/
class Derived :public Base1, public Base2
{
private:
	int var;
public:
	//����Զ��������Ĺ��캯���ĳ�Ա��ʼ���б��б����г�������๹�캯��Base(var)�ĵ���
	//���δ�г������ʾʹ�ø�������ȱʡ���캯��
	//Base1,Base2���캯��������๹�캯���ĵ����Զ�������
	Derived(int var) :Base(var), Base1(var), Base2(var)
	{
		cout << "Member of Derived" << endl;
	}
	void fund()
	{
		cout << "fun of Derived" << endl;
	}
};

