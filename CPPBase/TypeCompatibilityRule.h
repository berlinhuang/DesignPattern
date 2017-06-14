#include <iostream>
using namespace std;

class B1
{
public:
	void display() const
	{
		cout << "B1::dispaly()" << endl;
	}

};
/**********************************************/

class B2:public B1
{
public:
	void display() const //림맨
	{
		cout << "B2::dispaly()" << endl;
	}

};
/**********************************************/

class D:public B2
{
public:
	void display() const //림맨
	{
		cout << "D::dispaly()" << endl;
	}
};
/**********************************************/

void fun(B1 * ptr)
{
	ptr->display();
}
