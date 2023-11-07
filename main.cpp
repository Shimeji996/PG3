﻿#include "Rectangle.h"
#include "Circle.h"

int main(void) {

	Base* rectangle;
	Base* circle;

	rectangle = new Rectangle(2.0f);
	circle = new Circle(2.0f);

	rectangle->size();
	circle->size();

	rectangle->draw();
	circle->draw();

	return 0;
}