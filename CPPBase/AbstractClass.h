#include <iostream>
using namespace std;

//     		           ABase1	
//			         	 |   public
//   				   ABase2 
//   				     |   public
//					  ADerived


//������     ���д��麯������
class ABase1{
protected:
	int b;
public:
	ABase1(int b = 0){
		this->b = b;
	};
	virtual void display() const = 0;//���麯��   ֻ����������ʵ��
};


class ABase2 :public ABase1{
public:
	ABase2(int num) :ABase1(num){};
	void display() const; //���ǻ�����麯��
};
void ABase2::display() const
{
	cout << "ABase2::dispaly()" << " " << this->b << endl;
}


class ADerived :public ABase2{//�̳�ABase1Ҳһ��
public:
	ADerived(int num) :ABase2(num){};
	void display() const; //���ǻ�����麯��
};
void ADerived::display() const
{
	cout << "ADerived::dispaly()"<<" "<< this->b << endl;
}

void a_fun(ABase1 * ptr){
	ptr->display();
}
