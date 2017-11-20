//
// Created by root on 17-11-20.
//

#ifndef DESIGNPATTERN_OBJADAPTER_H
#define DESIGNPATTERN_OBJADAPTER_H
class ObjTarget
{
public:
    ObjTarget();
    virtual ~ObjTarget();
    virtual void Request();
protected:
private:
};


class ObjAdaptee
{
public:
    ObjAdaptee();
    ~ObjAdaptee();
    void SpecificRequest();
protected:
private:
};



class ObjAdapter :public ObjTarget
{
public:
    ObjAdapter(ObjAdaptee* objade);
    ~ObjAdapter();
    void Request();
protected:
private:
    ObjAdaptee* _objade;
};

#endif //DESIGNPATTERN_OBJADAPTER_H
