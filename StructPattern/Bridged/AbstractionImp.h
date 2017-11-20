//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_ABSTRACTIONIMP_H
#define DESIGNPATTERN_ABSTRACTIONIMP_H



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


#endif //DESIGNPATTERN_ABSTRACTIONIMP_H
