#include "stdafx.h"
#include "Director.h"
#include "Builder.h"


//Builder( Builder <- ConcreteBuilder )
Director::Director(Builder* bld)//指挥者构建，可以指挥Builder的对象
{
	_bld = bld;
}

Director::~Director()
{

}

void Director::Construct()//指挥一个使用Builder接口的对象_bld
{
	_bld->BuildPartA("user-defined");
	_bld->BuildPartB("user-defined");
	_bld->BuildPartC("user-defined");
}

