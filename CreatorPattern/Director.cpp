#include "stdafx.h"
#include "Director.h"
#include "Builder.h"


//Builder( Builder <- ConcreteBuilder )
Director::Director(Builder* bld)//ָ���߹���������ָ��Builder�Ķ���
{
	_bld = bld;
}

Director::~Director()
{

}

void Director::Construct()//ָ��һ��ʹ��Builder�ӿڵĶ���_bld
{
	_bld->BuildPartA("user-defined");
	_bld->BuildPartB("user-defined");
	_bld->BuildPartC("user-defined");
}

