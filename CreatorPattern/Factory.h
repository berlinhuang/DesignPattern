#ifndef _FACTORY_H_
#define _FACTORY_H_
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





#endif