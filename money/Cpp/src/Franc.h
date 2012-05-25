#pragma once

#include "Money.h"

class Franc : public Money {
public:

	Franc(int amount) {
		this->amount = amount;
	}

	Franc times(int multiplier) {
		Franc ap(this->amount * multiplier);
		return ap;
	}
};