#include "Class.h"
#include <stdio.h>

int main() {
	Pair<int, float> IntAndInt(10, 11.0f);
	printf("%f", IntAndInt.Min());

	return 0;
}