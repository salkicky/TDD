// gtestsample01.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <gtest/gtest.h>


//int _tmain(int argc, _TCHAR* argv[])
//{
//  ::testing::InitGoogleTest(&argc, argv);
//  return RUN_ALL_TESTS();
//}


// �e�X�g����֐�
int func1(int x, int y)
{
	return x + y;
}

// �e�X�g�P�[�X1
TEST(TestCaseName1, TestName1)
{
	EXPECT_EQ(1, func1(1,0));
}

// �e�X�g�P�[�X2
TEST(TestCaseName2, TestName2)
{
	EXPECT_EQ(1, func1(1,1));
}



