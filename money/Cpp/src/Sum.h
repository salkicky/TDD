#pragma once

#include "Expression.h"

class Sum {
public:
	Money augend;
	Money addend;

	Sum() {}
	Sum(Money augend, Money addend) : augend(augend), addend(addend) {}
	~Sum() {}
};