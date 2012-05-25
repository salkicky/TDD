#pragma once

#include "Money.h"

class Dollar : public Money {
public:
	Dollar() {amount = 0;}

	Dollar(int amount) {
		this->amount = amount;
	}

	Dollar times(int multiplier) {
		Dollar ap(this->amount * multiplier);
		return ap;
	}

	bool equals(Money &money) {
		return amount == money.amount;
	}
};