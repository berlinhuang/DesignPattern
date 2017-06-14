//



// Abstraction.h
// ���󲿷� abstraction


#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_


class AbstractionImp;

//������ӿ�
class Abstraction
{
public:
	virtual ~Abstraction();
	virtual void Operation() = 0;
protected:
	Abstraction();
private:
};



class RefinedAbstraction :public Abstraction
{
public:
	RefinedAbstraction(AbstractionImp* imp);
	~RefinedAbstraction();
	void Operation();//���߲�εĲ����ӿ�
protected:
private:
	AbstractionImp* _imp;//ά��һ��ָ��Implementor���Ͷ���ָ��
};

#endif