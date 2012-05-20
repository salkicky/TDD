// gtestsample01.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <gtest/gtest.h>


//int _tmain(int argc, _TCHAR* argv[])
//{
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}


// テストする関数
int func1(int x, int y)
{
	return x + y;
}

// テストケース1
TEST(TestCaseName1, TestName1)
{
	EXPECT_EQ(1, func1(1,0));
}

// テストケース2
TEST(TestCaseName2, TestName2)
{
	EXPECT_EQ(1, func1(1,1));
}



