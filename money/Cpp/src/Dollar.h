#pragma once

#include <string>
#include "Money.h"

using namespace std;

class Dollar : public Money {
public:

	Dollar(int amount) : Money(amount) {}

	Dollar times(int multiplier) {
		Dollar ap(this->amount * multiplier);
		return ap;
	}

	string currency() {
		return "USD";
	}

};