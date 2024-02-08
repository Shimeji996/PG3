#pragma once
#include "IShape.h"

class Rectangle :public IShape
{
public:
	Rectangle();
	~Rectangle();

	void size(float vertical, float beside)override;
	void draw()override;
private:

};