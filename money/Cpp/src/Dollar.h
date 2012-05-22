#include <iostream>

class Dollar {
public:
	int amount;

	Dollar(int amount) {
		this->amount = amount;
	}

	void times(int multiplier) {
		this->amount *= multiplier;
	}
};