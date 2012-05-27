#pragma once

#include <typeinfo>

class Money {
protected:
	int amount;

public:
	Money() : amount(0) {}
	Money(int amount) : amount(amount) {}
	virtual ~Money() {}

	bool equals(Money &money) {
		return amount == money.amount
			&& typeid(*this).name() == typeid(money).name();
	}

};