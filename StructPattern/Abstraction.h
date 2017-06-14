//



// Abstraction.h
// 抽象部分 abstraction


#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_


class AbstractionImp;

//抽象类接口
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
	void Operation();//更高层次的操作接口
protected:
private:
	AbstractionImp* _imp;//维护一个指向Implementor类型对象指针
};

#endif