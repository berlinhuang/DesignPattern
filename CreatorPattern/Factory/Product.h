//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_PRODUCT_H
#define DESIGNPATTERN_PRODUCT_H

//抽象类：含有纯虚拟函数的类称为
// 1.抽象类不完整，包含未实现的方法声明，可以包含成员变量，只能作为基类
// 2.抽象类不能直接实例化，但可以定义指针
// 3.派生类必须实现未实现的方法
// 4.抽象类用来进行类型隐藏和充当全局变量的角色
class Product
{
private:

protected:
    Product();
public:
    virtual ~Product() = 0;//纯虚函数 派生类中必须重写
};

/***************************************************************/
class  ConcreateProduct:public Product
{
private:

protected:

public:
    ConcreateProduct();
    ~ ConcreateProduct();


};





#endif //DESIGNPATTERN_PRODUCT_H
