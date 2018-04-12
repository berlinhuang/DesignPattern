//
// Created by root on 18-4-12.
//

#include "Observer/Observer.h"
#include "Observer/Subject.h"
#include <iostream>
using namespace std;

void ObserverPattern()
{
    // State _st;
    // Derive from Subject
    ConcreteSubject* sub = new ConcreteSubject();

    // ConcreteObserverA derive from Observer
    // ConcreteObserverA has Subject point _sub
    Observer* o1 = new ConcreteObserverA(sub);
    Observer* o2 = new ConcreteObserverB(sub);

    sub->SetState("old");
    sub->Notify();

    sub->SetState("new"); //也可以由 Observer 调用
    sub->Notify();
}

int main()
{
    ObserverPattern();
    cin.get();
    return 0;
}