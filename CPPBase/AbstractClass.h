#include <iostream>
using namespace std;

//     		           ABase1	
//			         	 |   public
//   				   ABase2 
//   				     |   public
//					  ADerived


//抽象类     带有纯虚函数的类
class ABase1{
protected:
	int b;
public:
	ABase1(int b = 0){
		this->b = b;
	};
	virtual void display() const = 0;//纯虚函数   只能由派生类实现
};


class ABase2 :public ABase1{
public:
	ABase2(int num) :ABase1(num){};
	void display() const; //覆盖基类的虚函数
};
void ABase2::display() const
{
	cout << "ABase2::dispaly()" << " " << this->b << endl;
}


class ADerived :public ABase2{//继承ABase1也一样
public:
	ADerived(int num) :ABase2(num){};
	void display() const; //覆盖基类的虚函数
};
void ADerived::display() const
{
	cout << "ADerived::dispaly()"<<" "<< this->b << endl;
}

void a_fun(ABase1 * ptr){
	ptr->display();
}
