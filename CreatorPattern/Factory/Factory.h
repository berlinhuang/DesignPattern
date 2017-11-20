//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_FACTORY_H
#define DESIGNPATTERN_FACTORY_H


#include "Product.h"
class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product *CreateProduct() = 0;
protected:
    Factory();
private:

};
/***************************************************************/
class ConcreateFactory: public Factory
{
public:
    ConcreateFactory();
    ~ConcreateFactory();
    Product* CreateProduct();
protected:

private:

};


#endif //DESIGNPATTERN_FACTORY_H
