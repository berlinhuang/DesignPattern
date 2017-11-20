#include <iostream>
using namespace std;

class Base//基类Base
{
private:
	int var0;
public:
	Base(int var) :var0(var)//Base类构造函数
	{
		cout << "Member of Base" << endl;
	}
	void fun0()
	{
		cout << "fun of Base" << endl;
	}
};

/****************************************************************/
class Base1 :virtual public Base //Base作为C的虚基类
{
private:
	int var1;
public:
	Base1(int var) :Base(var)//Base1类构造函数，在初始化表中对虚基类初始化·
	{
		cout << "Member of Base1" << endl;
	}
};

/****************************************************************/
class Base2 :virtual public Base //Base作為C的虚基类
{
private:
	int var2;
public:
	Base2(int var) :Base(var)//Base2类构造函数，在初始化表中对虚基类初始化
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
	//（最远）派生类的构造函数的成员初始化列表中必须列出对虚基类构造函数Base(var)的调用
	//如果未列出，则表示使用该虚基类的缺省构造函数
	//Base1,Base2构造函数对虚基类构造函数的调用自动被忽略
	Derived(int var) :Base(var), Base1(var), Base2(var)
	{
		cout << "Member of Derived" << endl;
	}
	void fund()
	{
		cout << "fun of Derived" << endl;
	}
};

