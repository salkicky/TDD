#pragma once

#include "Money.h"

class Franc : private Money {
public:
	Franc() {amount = 0;}

	Franc(int amount) {
		this->amount = amount;
	}

	Franc times(int multiplier) {
		Franc ap(this->amount * multiplier);
		return ap;
	}

	bool equals(Franc &object) {
		Money *money = &object;
		return amount == money->amount;
	}
};