#include <gtest/gtest.h>
#include "Money.h"
#include "Bank.h"

TEST(TestMultiplication, Test) {
	Money five = Money::dollar(5);
	ASSERT_TRUE(Money::dollar(10).equals(five.times(2)));
	ASSERT_TRUE(Money::dollar(15).equals(five.times(3)));
}

TEST(TestEquqlity, Test) { 
	ASSERT_TRUE(  Money::dollar(5).equals(Money::dollar(5)) );
	ASSERT_FALSE( Money::dollar(5).equals(Money::dollar(6)) );
	ASSERT_FALSE( Money::franc(5).equals( Money::dollar(5)) );
}

TEST(TestCurrency, Test) {
	ASSERT_STREQ("USD", Money::dollar(5).currency().c_str());
	ASSERT_STREQ("CHF", Money::franc(5).currency().c_str());
}

TEST(TestSimpleAddition, Test) {
	Money five = Money::dollar(5);
	Expression sum = five.plus(five);
	Bank bank;
	Money reduced = bank.reduce(sum, "USD");
	ASSERT_TRUE(Money::dollar(10).equals(reduced));
}

TEST(TestPlusReturnsSum, Test) {

	Money five = Money::dollar(5);
	Expression result = five.plus(five);

	Sum sum = (Sum)result;

	ASSERT_TRUE(five.equals(sum.augend));
	ASSERT_TRUE(five.equals(sum.addend));
}