#pragma once
#include <stdio.h>

class IShape {
public:
	virtual void size(float value1, float value2) = 0;
	virtual void draw() = 0;
protected:
	float area;
};