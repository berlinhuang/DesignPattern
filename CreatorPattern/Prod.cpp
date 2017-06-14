#include "stdafx.h"
#include "Prod.h"
#include <iostream>
using namespace std;

Prod::Prod()
{
	ProducePart();
	cout << "return a product" << endl;
}

Prod::~Prod()
{

}

void Prod::ProducePart()
{
	cout << "build part of product.." << endl;
}
/**************************************************/
ProductPart::ProductPart()
{
	cout << "build productpart" << endl;
}

ProductPart::~ProductPart()
{

}

ProductPart* ProductPart::BuildPart()
{
	return new ProductPart();
}

