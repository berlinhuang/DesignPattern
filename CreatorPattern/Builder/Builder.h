//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_BUILDER_H
#define DESIGNPATTERN_BUILDER_H

#include "Prod.h"
#include <string>
using namespace std;

class Builder
{
public:
    virtual ~Builder();
    //虚函数接口
    virtual void BuildPartA(const string& buildPara) = 0;
    virtual void BuildPartB(const string& buildPara) = 0;
    virtual void BuildPartC(const string& buildPara) = 0;
    virtual Prod* GetProduct() = 0;
protected:
    Builder();

private:

};

class ConcreteBuilder: public Builder
{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void BuildPartA(const string& buildPara);
    void BuildPartB(const string& buildPara);
    void BuildPartC(const string& buildPara);

    Prod* GetProduct();
protected:
private:

};

#endif //DESIGNPATTERN_BUILDER_H
