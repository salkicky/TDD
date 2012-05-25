#pragma once

#include "Money.h"

class Dollar : private Money {
public:
	Dollar() {amount = 0;}

	Dollar(int amount) {
		this->amount = amount;
	}

	Dollar times(int multiplier) {
		Dollar ap(this->amount * multiplier);
		return ap;
	}

	bool equals(Dollar &object) {
		Money *money = &object;
		return amount == money->amount;
	}
};