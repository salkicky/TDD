#include <gtest/gtest.h>
#include "Dollar.h"

TEST(TestMultiplication, Test) {
	Dollar five(5);
	five.times(2);
	ASSERT_EQ(10, five.amount) << five.amount << std::endl;
}