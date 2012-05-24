#include <iostream>

class Dollar {
public:
	int amount;

	Dollar() {amount = 0;}

	Dollar(int amount) {
		this->amount = amount;
	}


	Dollar times(int multiplier) {
		Dollar ap(this->amount * multiplier);
		return ap;
	}
};