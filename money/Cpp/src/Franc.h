#pragma once

#include <string>
#include "Money.h"

using namespace std;

class Franc : public Money {
public:

	Franc(int amount) : Money(amount) {}

	Franc times(int multiplier) {
		Franc ap(this->amount * multiplier);
		return ap;
	}

	string currency() {
		return "FRN";
	}
};