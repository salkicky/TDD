#pragma once

#include <string>
#include "Money.h"
#include "Expression.h"

using namespace std;

class Bank {
public:
	Bank() {}
	virtual ~Bank() {}

	Money reduce(const Expression &source, string to) {
		return Money::dollar(10);
	}
};