#include "Rectangle.h"

void Rectangle::size() {
	area = (radius * 2) * (radius * 2);
}

void Rectangle::draw() {
	printf("’ZŒ`‚Ì–ÊÏ‚Í%f\n", area);
}