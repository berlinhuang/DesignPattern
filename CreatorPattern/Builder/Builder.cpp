//
// Created by root on 17-11-20.
//
#include "Builder.h"
#include "Prod.h"

#include <iostream>
using namespace std;

Builder::Builder()
{

}

Builder::~Builder()
{

}
/***********************************************************/
ConcreteBuilder::ConcreteBuilder()
{

}
ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuildPartA(const string& buildPara)
{
    cout << "Step1:Build PartA..." << buildPara << endl;
}

void ConcreteBuilder::BuildPartB(const string& buildPara)
{
    cout << "Step1:Build PartB..." << buildPara << endl;
}

void ConcreteBuilder::BuildPartC(const string& buildPara)
{
    cout << "Step1:Build PartC..." << buildPara << endl;
}


Prod* ConcreteBuilder::GetProduct()
{
    BuildPartA("pre-defined");
    BuildPartB("pre-defined");
    BuildPartC("pre-defined");
    return new Prod();
}


