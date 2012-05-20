#include "stdafx.h"
#include "Multiplier.h"
#include <gtest/gtest.h>
#include <sstream>

// テストフィクスチャ
class MultiplierTest : public ::testing::Test {
public:

	Multiplier *mulp_;

	MultiplierTest() {}
	~MultiplierTest() {}

	void SetUp() {
		std::cout << "#### get new Multiplier ####" << std::endl;
		mulp_ = new ::Multiplier;
	}

	void TearDown() {
		delete mulp_;
		std::cout << "#### delete Multiplier ####" << std::endl;
	}
};

// テスト
TEST_F(MultiplierTest, FixtureTest1) {
	this->mulp_->x_ = 1;
	ASSERT_EQ(1, this->mulp_->x_);
	ASSERT_EQ(3, this->mulp_->getx());
}

// テスト
TEST_F(MultiplierTest, FixtureTest2) {
	ASSERT_EQ(5, mulp_->getx());
}