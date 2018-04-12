//
// Created by root on 18-4-12.
//

#ifndef PROJECT_OBSERVER_H
#define PROJECT_OBSERVER_H


#include "Subject.h"
#include <string>
using namespace std;
typedef string State;


class Observer
{
public:
    virtual ~Observer();
    virtual void Update(Subject* sub) = 0;
    virtual void PrintInfo() = 0;
protected:
    Observer();
    State _st;
private:
};


class ConcreteObserverA:public Observer
{
public:
    ConcreteObserverA(Subject* sub);
    virtual ~ConcreteObserverA();

    virtual Subject* GetSubject();

    void Update(Subject* sub);//传入 Subject 作为参数，这样可以让一个 View 属于多个的 Subject。
    void PrintInfo();
protected:
private:
    Subject* _sub;
};


class ConcreteObserverB:public Observer
{
public:
    ConcreteObserverB(Subject* sub);
    virtual ~ConcreteObserverB();

    virtual Subject* GetSubject();

    void Update(Subject* sub);//传入 Subject 作为参数，这样可以让一个 View 属于多个的 Subject。
    void PrintInfo();
protected:
private:
    Subject* _sub;
};


#endif //PROJECT_OBSERVER_H
