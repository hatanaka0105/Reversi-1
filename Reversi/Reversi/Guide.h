#ifndef ___Class_Guide
#define ___Class_Guide

#include "DrawObject.h"

class Guide : public DrawObject
{
public:
	void DrawHorizontal();
	void DrawVertical(int numberOfVertical);
};

#endif
