#pragma once

#include <string>
#include "Money.h"

using namespace std;

class Dollar : public Money {
public:

	Dollar(int amount) : Money(amount, "USD") {}

};