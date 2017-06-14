#include "stdafx.h"
#include "Prototype.h"

#include <iostream>
using namespace std;

Prototype::Prototype()
{

}

Prototype::~Prototype()
{

}

Prototype* Prototype::Clone() const
{
	return 0;
}
/**************************************************/
ConcretePrototype1::ConcretePrototype1()
{

}
ConcretePrototype1::~ConcretePrototype1()
{

}

ConcretePrototype1::ConcretePrototype1(const ConcretePrototype1& cp)
{
	cout << "ConcretePrototype1 copy..." << endl;
}

Prototype* ConcretePrototype1::Clone() const
{
	return new ConcretePrototype1(*this);//call copy constructor fun
}

/**************************************************/
ConcretePrototype2::ConcretePrototype2()
{

}
ConcretePrototype2::~ConcretePrototype2()
{

}

ConcretePrototype2::ConcretePrototype2(const ConcretePrototype2& cp)
{
	cout << "ConcretePrototype2 copy..." << endl;
}

Prototype* ConcretePrototype2::Clone() const
{
	return new ConcretePrototype2(*this);//call copy constructor fun
}
