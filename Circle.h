#pragma once
#include "IShape.h"

class Circle :public IShape
{
public:
	Circle();
	~Circle();

	void size(float radius1, float radius2)override;
	void draw()override;
private:

};