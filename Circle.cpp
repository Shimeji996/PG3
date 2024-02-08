#include "Circle.h"

Circle::Circle() {

}

void Circle::size(float value1, float value2) {
	area = value1 * value2 * 3.14f;
}

void Circle::draw() {
	printf("â~ÇÃñ êœÇÕ%f\n", area);
}