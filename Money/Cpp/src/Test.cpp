#include <gtest/gtest.h>
#include "Dollar.h"
#include "Franc.h"

TEST(TestMultiplication, Test) {
	Dollar five(5);
	ASSERT_TRUE(Dollar(10) == five.times(2));
	ASSERT_TRUE(Dollar(15) == five.times(3));
}

TEST(TestEquqlity, Test) { 
	ASSERT_TRUE( Dollar(5).equals(Dollar(5)) );
}

TEST(TestFrancMultiplication, Test) {
	Franc five(5);
	ASSERT_TRUE(Franc(10) == five.times(2));
	ASSERT_TRUE(Franc(15) == five.times(3));
}