#include <iostream>
using namespace std;
//�麯�� virtaul type func(param...);

class VB1
{
public:
	virtual void display() const;//�麯��
};

void VB1::display() const
{
	cout << "VB1::display" << endl;
}

/**********************************************/

class VB2:public VB1 //����������
{
public:
	virtual void display() const; //���ǻ�����麯��
};

void VB2::display() const
{
	cout << "VB2::display" << endl;
}

/**********************************************/

class VB3:public VB2
{
public:
	virtual void display() const;
};

void VB3::display() const
{
	cout << "VB3::display" << endl;
}

/**********************************************/

void vfun(VB1 *ptr)
{
	ptr->display();
}
