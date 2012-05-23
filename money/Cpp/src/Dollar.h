#include <iostream>

class Dollar {
public:
	int amount;

	Dollar(int amount) {
		this->amount = amount;
	}

	Dollar times(int multiplier) {
		this->amount *= multiplier;
		return NULL;
	}
};