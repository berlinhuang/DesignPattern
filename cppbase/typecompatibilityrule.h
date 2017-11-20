//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_TYPECOMPATIBILITYRULE_H
#define DESIGNPATTERN_TYPECOMPATIBILITYRULE_H

#include <iostream>
using namespace std;

class B1
{
public:
    void display() const
    {
        cout << "B1::dispaly()" << endl;
    }

};
/**********************************************/

class B2:public B1
{
public:
    void display() const //覆盖
    {
        cout << "B2::dispaly()" << endl;
    }

};
/**********************************************/

class D:public B2
{
public:
    void display() const //覆盖
    {
        cout << "D::dispaly()" << endl;
    }
};
/**********************************************/

void fun(B1 * ptr)
{
    ptr->display();//替代后，派生类就可以作为基类的对象使用，但只能使用从基类继承的成员
}


#endif //DESIGNPATTERN_TYPECOMPATIBILITYRULE_H
