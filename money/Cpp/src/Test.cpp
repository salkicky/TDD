#include <gtest/gtest.h>
#include "Money.h"
#include "Dollar.h"
#include "Franc.h"

TEST(TestMultiplication, Test) {
	Dollar five(5);
	ASSERT_TRUE(Dollar(10).equals(five.times(2)));
	ASSERT_TRUE(Dollar(15).equals(five.times(3)));
}

TEST(TestEquqlity, Test) { 
	ASSERT_TRUE( Dollar(5).equals(Dollar(5)) );
	ASSERT_FALSE( Dollar(5).equals(Dollar(6)) );
	ASSERT_TRUE( Franc(5).equals(Franc(5)) );
	ASSERT_FALSE( Franc(5).equals(Franc(6)) );
	ASSERT_FALSE( Franc(5).equals(Dollar(5)) );
}

TEST(TestFrancMultiplication, Test) {
	Franc five(5);
	ASSERT_TRUE(Franc(10).equals(five.times(2)));
	ASSERT_TRUE(Franc(15).equals(five.times(3)));
}

