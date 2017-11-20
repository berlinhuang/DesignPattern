//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_PROTOTYPE_H
#define DESIGNPATTERN_PROTOTYPE_H

// 抽象原形类
class Prototype
{
public:
    virtual ~Prototype();
    virtual Prototype* Clone() const = 0;
protected:
    Prototype();
private:

};


// 具体原形类1
class ConcretePrototype1:public Prototype
{
public:
    ConcretePrototype1();
    ConcretePrototype1(const ConcretePrototype1& cp);
    ~ConcretePrototype1();
    Prototype* Clone() const;
protected:
private:

};

//具体原形类2
class ConcretePrototype2 :public Prototype
{
public:
    ConcretePrototype2();
    ConcretePrototype2(const ConcretePrototype2& cp);
    ~ConcretePrototype2();
    Prototype* Clone() const;
protected:
private:

};

#endif //DESIGNPATTERN_PROTOTYPE_H
