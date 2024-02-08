#include "Rectangle.h"

Rectangle::Rectangle() {

}

void Rectangle::size(float vertical, float beside) {
	area = vertical * beside;
}

void Rectangle::draw() {
	printf("‹éŒ`‚Ì–ÊÏ‚Í%f\n", area);
}