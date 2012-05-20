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
		std::cout << "#### SetUp new Multiplier ####" << std::endl;
		mulp_ = new ::Multiplier;
	}

	void TearDown() {
		delete mulp_;
		std::cout << "#### TearDown Multiplier ####" << std::endl;
	}
};

///////////////////////
// テストフィクスチャであるMultiplierTestクラスは、
// TEST_F()毎に異なるインスタンスが生成される。
///////////////////////

// テスト
TEST_F(MultiplierTest, FixtureTest1) {
	this->mulp_->x_ = 1;
	ASSERT_EQ(1, this->mulp_->x_);
	ASSERT_EQ(3, this->mulp_->getx());
}

// テスト
TEST_F(MultiplierTest, FixtureTest2) {
	this->mulp_->x_ = 3;
	ASSERT_EQ(5, mulp_->getx());
	ASSERT_EQ(7, mulp_->getx());
}