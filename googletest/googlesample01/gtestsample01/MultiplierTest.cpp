#include "stdafx.h"
#include "Multiplier.h"
#include <gtest/gtest.h>


TEST(TestCaseMul1, TestMulSimple)
{
	Multiplier m;

	EXPECT_EQ(2, m.mul(1,2));
}

TEST(TestCaseMul2, TestMulEQ)
{
	Multiplier m;

	EXPECT_EQ(1, m.mul(1,1));
}

TEST(TestCaseMul3, TestMulEX)
{
	Multiplier m;

	ASSERT_EQ(3, m.mul(1,4)) << "‚±‚±‚ÅŽ¸”s‚·‚é";
}