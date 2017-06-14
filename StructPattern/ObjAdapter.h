//Adapter.h
#ifndef _OBJADAPTER_H_
#define _OBJADAPTER_H_
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
#endif //~_ADAPTER_H_