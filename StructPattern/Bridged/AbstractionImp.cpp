//
// Created by root on 17-11-20.
//
#include "AbstractionImp.h"
#include <iostream>
using namespace std;
AbstractionImp::AbstractionImp()
{
}
AbstractionImp::~AbstractionImp()
{
}
void AbstractionImp::Operation()
{
    cout << "AbstractionImp....imp..." << endl;
}



ConcreteAbstractionImpA::ConcreteAbstractionImpA()
{
}
ConcreteAbstractionImpA::~ConcreteAbstractionImpA()
{
}
void ConcreteAbstractionImpA::Operation()
{
    cout << "ConcreteAbstractionImpA...." << endl;
}
