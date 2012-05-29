#include <gtest/gtest.h>
#include "Money.h"
#include "Dollar.h"
#include "Franc.h"

TEST(TestMultiplication, Test) {
	Money five = Money::dollar(5);
	ASSERT_TRUE(Money::dollar(10).equals(five.times(2)));
	ASSERT_TRUE(Money::dollar(15).equals(five.times(3)));
}

TEST(TestEquqlity, Test) { 
	ASSERT_TRUE( Dollar(5).equals(Dollar(5)) );
	ASSERT_FALSE( Dollar(5).equals(Dollar(6)) );
	ASSERT_TRUE( Franc(5).equals(Franc(5)) );
	ASSERT_FALSE( Franc(5).equals(Franc(6)) );
	ASSERT_FALSE( Franc(5).equals(Dollar(5)) );
}

TEST(TestCurrency, Test) {
	ASSERT_STREQ("USD", Dollar(5).currency().c_str());
	ASSERT_STREQ("FRN", Franc(5).currency().c_str());
}

