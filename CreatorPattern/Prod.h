#ifndef _PROD_H_
#define _PROD_H_
class Prod
{
public:
	Prod();
	~Prod();
	void ProducePart();
protected:
private:

};
/***********************************************/
class ProductPart
{
public:
	ProductPart();
	~ProductPart();
	ProductPart* BuildPart();
protected:
private:

};


#endif
