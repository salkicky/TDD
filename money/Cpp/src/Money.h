#pragma once

#include <string>
#include <typeinfo>

using namespace std;

class Money {
protected:
	int amount;
	string curr;

public:
	Money() : amount(0) {}
	Money(int amount, string curr) : amount(amount), curr(curr) {}
	virtual ~Money() {}

	bool equals(Money &money) {
		return amount == money.amount
			&& curr == money.curr;
	}

	string currency() {
		return curr;
	}

	static Money dollar(int amount) {
		return Money(amount, "USD");
	}

	static Money franc(int amount) {
		return Money(amount, "CHF");
	}

	Money times(int multiplier) {
		Money ap(this->amount * multiplier, curr);
		return ap;
	}
};