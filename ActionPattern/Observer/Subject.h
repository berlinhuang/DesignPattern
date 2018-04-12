//
// Created by root on 18-4-12.
//

#ifndef DESIGNPATTERN_SUBJECT_H
#define DESIGNPATTERN_SUBJECT_H

#include <list>
#include <string>
using namespace std;
typedef string State;
class Observer;


class Subject
{
public:
    virtual ~Subject();
    virtual void Attach(Observer* obv);
    virtual void Detach(Observer* obv);
    virtual void Notify();

    virtual void SetState(const State& st) = 0;
    virtual State GetState() = 0;
protected:
    Subject();
private:
    list<Observer* >* _obvs; //list持有观察者
};


class ConcreteSubject:public Subject
{
public:
    ConcreteSubject();
    ~ConcreteSubject();

    void SetState(const State& st);
    State GetState();
protected:
private:
    State _st;
};

#endif //DESIGNPATTERN_SUBJECT_H
