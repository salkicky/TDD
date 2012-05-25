#pragma once

class Money {
protected:
	int amount;

public:
	Money() {}
	virtual ~Money() {}

	bool equals(Money &money) {
		return amount == money.amount;
	}
};