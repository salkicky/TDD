#pragma once

class Money {
public:
	int amount;

public:
	Money() {}
	virtual ~Money() {}

	bool equals(Money &money) {
		return amount == money.amount;
	}
};