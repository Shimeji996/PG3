#include <stdio.h>
#include "Rectangle.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {
	IShape* Ishape[2];
	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			Ishape[i] = new Circle;
		}
		else {
			Ishape[i] = new Rectangle;
		}
	}

	for (int i = 0; i < 2; i++) {
		Ishape[i]->size(10, 10);
	}

	for (int i = 0; i < 2; i++) {
		Ishape[i]->draw();
	}
	return 0;
}