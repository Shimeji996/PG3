#pragma once
#include "Creature.h"
#include <stdio.h>

class Elephant : public Creature
{
public:
	Elephant();
	~Elephant();

	void Size()override;

private:
};

