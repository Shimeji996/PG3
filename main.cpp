﻿#include "Ant.h"
#include "Elephant.h"
#include "Base.h"

int main() {
	Base* Charactor[2];
	Charactor[0] = new Ant();
	Charactor[1] = new Elephant();

	Charactor[0]->Size();
	Charactor[1]->Size();

	return 0;
}