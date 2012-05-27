#pragma once

#include "Money.h"

class Dollar : public Money {
public:

	Dollar(int amount) : Money(amount) {}

	Dollar times(int multiplier) {
		Dollar ap(this->amount * multiplier);
		return ap;
	}

};