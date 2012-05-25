#pragma once

class Money {
protected:
	int amount;

public:
	Money() : amount(0) {}
	virtual ~Money() {}

	bool equals(Money &money) {
		return amount == money.amount;
	}
};