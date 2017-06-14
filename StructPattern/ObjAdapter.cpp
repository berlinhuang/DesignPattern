//Adapter.cpp
#include "stdafx.h"
#include "ObjAdapter.h"
#include <iostream>
ObjTarget::ObjTarget()
{
}
ObjTarget::~ObjTarget()
{
}
void ObjTarget::Request()
{
	std::cout << "ObjTarget::Request" << std::endl;
}

/**********************************************************/
ObjAdaptee::ObjAdaptee()
{
}
ObjAdaptee::~ObjAdaptee()
{
}
void ObjAdaptee::SpecificRequest()
{
	std::cout << "ObjAdaptee::SpecificRequest"
		<< std::endl;
}

/**********************************************************/
ObjAdapter::ObjAdapter(ObjAdaptee* objade)
{

	this -> _objade = objade;
}
ObjAdapter::~ObjAdapter()
{
}
void ObjAdapter::Request()
{
	_objade->SpecificRequest();
}