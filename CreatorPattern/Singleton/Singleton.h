//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_SINGLETON_H
#define DESIGNPATTERN_SINGLETON_H
#include <iostream>
//Singleton Pattern
class Singleton
{
private:
    static Singleton* _instance;
protected:
    Singleton();
public:
    static Singleton* getInstance();
    ~Singleton()
    {
        if (_instance != NULL)
            delete _instance;
    }
};


#endif //DESIGNPATTERN_SINGLETON_H
