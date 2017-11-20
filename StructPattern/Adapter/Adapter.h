//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_ADAPTER_H
#define DESIGNPATTERN_ADAPTER_H

//适配器模式

class Target //目标标准接口
{
public:
    Target();
    virtual ~Target();
    virtual void Request();
protected:
private:
};


class Adaptee //被适配类
{
public:
    Adaptee();
    ~Adaptee();
    void SpecificRequest();//具体的特殊功能
protected:
private:
};


//适配器类，继承了被适配类，实现标准接口
class Adapter :public Target, private Adaptee
{
public:
    Adapter();
    ~Adapter();
    void Request();
protected:
private:
};

#endif //DESIGNPATTERN_ADAPTER_H
