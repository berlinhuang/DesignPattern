#ifndef _BUILDER_H_
#define _BUILDER_H_
#include "Prod.h"
#include <string>
using namespace std;

class Builder
{
public:
	virtual ~Builder();
	//Ðéº¯Êý½Ó¿Ú
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


#endif