// StructPattern.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Abstraction.h"
#include "AbstractionImp.h"

#include "Adapter.h"
#include "ObjAdapter.h"

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

int _tmain(int argc, _TCHAR* argv[])
{
	BridgePattern();
	AdapterPattern();
	cin.get();
	return 0;
}

