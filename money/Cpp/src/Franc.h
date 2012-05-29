#pragma once

#include <string>
#include "Money.h"

using namespace std;

class Franc : public Money {
public:

	Franc(int amount) : Money(amount, "FRN") {}

};