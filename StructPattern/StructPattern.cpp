//
// Created by root on 17-11-20.
//


#include "Bridged/Abstraction.h"
#include "Bridged/AbstractionImp.h"

#include "Adapter/Adapter.h"
#include "Adapter/ObjAdapter.h"

#include <iostream>
using namespace std;

void BridgePattern()
{
    cout << "---------------------------Bridge" << endl;
    AbstractionImp* imp = new ConcreteAbstractionImpA();
    Abstraction* abs = new RefinedAbstraction(imp);
    abs->Operation();
}
void AdapterPattern()
{
    cout << "---------------------------Adapter" << endl;
    //使用特殊功能类，即适配类
    Target* adt = new Adapter();
    adt->Request();
    //
    ObjAdaptee* objade = new ObjAdaptee;
    ObjTarget* objadt = new ObjAdapter(objade);
    objadt->Request();
}

int main(int argc, char* argv[])
{
    BridgePattern();
    AdapterPattern();
    cin.get();
    return 0;
}

