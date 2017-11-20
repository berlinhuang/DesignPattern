//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_DIRECTOR_H
#define DESIGNPATTERN_DIRECTOR_H

class Builder;
class Director
{
public:
    Director(Builder* bld);
    ~Director();
    void Construct();
protected:
private:
    Builder* _bld;
};


#endif //DESIGNPATTERN_DIRECTOR_H
