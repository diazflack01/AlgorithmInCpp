#include <gtest/gtest.h>

#include <codeWars/kyu8/Evil_or_Odious.hpp>

TEST(Evil_or_OdiousTest, shouldReturnIsEvilWhenBinaryOnesCountEven)
{
	const std::string EXPECTED("It's Evil!");
	ASSERT_STREQ(EXPECTED.c_str(), codeWars::kyu8::evil(0b11).c_str());
	ASSERT_STREQ(EXPECTED.c_str(), codeWars::kyu8::evil(0b1111).c_str());
	ASSERT_STREQ(EXPECTED.c_str(), codeWars::kyu8::evil(0b111111).c_str());
}

TEST(Evil_or_OdiousTest, shouldReturnIsOdiusWhenBinaryOnesOddEven)
{
	const std::string EXPECTED("It's Odious!");
	ASSERT_STREQ(EXPECTED.c_str(), codeWars::kyu8::evil(0b1).c_str());
	ASSERT_STREQ(EXPECTED.c_str(), codeWars::kyu8::evil(0b111).c_str());
	ASSERT_STREQ(EXPECTED.c_str(), codeWars::kyu8::evil(0b11111).c_str());
}
