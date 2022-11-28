#include "gtest/gtest.h"

extern "C" {
#include "../calculator/calculator.h"
}

class TestCaseName : public ::testing::Test {
protected:
	void SetUp() override {}
	void TearDown() override {}
};

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, TestName2) {
	EXPECT_EQ(7, calculator_add(5,2));
}
