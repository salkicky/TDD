#include "Multiplier.h"

int Multiplier::mul(int a, int b)
{
	return a * b;
}

int Multiplier::getx()
{
	x_ += 2;
	return x_;
}