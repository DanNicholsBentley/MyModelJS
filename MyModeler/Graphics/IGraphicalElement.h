#pragma once
#include <string>

class IGraphicalElement
{
public:

	virtual std::string getId() = 0;

	// make a virtual destructor in case we delete an IGraphicalElement pointer, so the proper derived destructor is called
	~IGraphicalElement() {};
};

