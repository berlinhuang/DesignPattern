#include <iostream>
using namespace std;


//		 B1
//		 |	---> public
//		 B2
//		 |  ---> public
//		 D 


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
	void display() const //����
	{
		cout << "B2::dispaly()" << endl;
	}

};
/**********************************************/

class D:public B2
{
public:
	void display() const //����
	{
		cout << "D::dispaly()" << endl;
	}
};
/**********************************************/

void fun(B1 * ptr)
{
	ptr->display();//�����������Ϳ�����Ϊ����Ķ���ʹ�ã���ֻ��ʹ�ôӻ���̳еĳ�Ա
}