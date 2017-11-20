//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_PROD_H
#define DESIGNPATTERN_PROD_H

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



#endif //DESIGNPATTERN_PROD_H
