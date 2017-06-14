//AbstractionImp.h
// 实现部分 implementation
#ifndef _ABSTRACTIONIMP_H_
#define _ABSTRACTIONIMP_H_


class AbstractionImp
{
public:
	virtual ~AbstractionImp();
	virtual void Operation() = 0;
protected:
	AbstractionImp();
private:
};

/**********************************************************************/
class ConcreteAbstractionImpA :public AbstractionImp
{
public:
	ConcreteAbstractionImpA();
	~ConcreteAbstractionImpA();
	virtual void Operation();//定义一个基本的操作接口
protected:
private:
};


class ConcreteAbstractionImpB :public AbstractionImp
{
public:
	ConcreteAbstractionImpB();
	~ConcreteAbstractionImpB();
	virtual void Operation();
protected:
private:
};
#endif //~_ABSTRACTIONIMP_H_