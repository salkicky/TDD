#include <gtest/gtest.h>
#include "Dollar.h"

TEST(TestMultiplication, Test) {
	Dollar five(5);
	Dollar product = five.times(2);
	ASSERT_EQ(Dollar(10), product);
	product = five.times(3);
	ASSERT_EQ(Dollar(15), product);
}

TEST(TestEquqlity, Test) { 
	ASSERT_TRUE( Dollar(5).equals(Dollar(5)) );
}