//
// Created by root on 17-11-20.
//
#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;

Factory::Factory()
{

}

Factory::~Factory()
{

}
/***************************************************************/
ConcreateFactory::ConcreateFactory()
{
    cout << "ConcreateFactory..." << endl;
}

ConcreateFactory::~ConcreateFactory()
{

}

Product* ConcreateFactory::CreateProduct()
{
    return new ConcreateProduct();
}
