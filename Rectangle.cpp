#include "Rectangle.h"

Rectangle::Rectangle() {

}

void Rectangle::size(float vertical, float beside) {
	area = vertical * beside;
}

void Rectangle::draw() {
	printf("��`�̖ʐς�%f\n", area);
}