#include <gtest/gtest.h>
#include "Dollar.h"

TEST(TestMultiplication, Test) {
	Dollar five(5);
	Dollar product = five.times(2);
	ASSERT_EQ(10, product.amount);
	product = five.times(3);
	ASSERT_EQ(15, product.amount);
}