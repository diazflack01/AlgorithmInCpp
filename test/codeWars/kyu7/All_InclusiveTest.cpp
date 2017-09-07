#include <gtest/gtest.h>
#include <string>
#include <algorithm>

#include <codeWars/kyu7/All_Inclusive.hpp>

//TODO KELPOGI: Create more comprehensive tests

TEST(All_InclusiveTest, getRotatedStringShouldReturnCorrectValues)
{
	std::string INPUT = "abcd";
	codeWars::kyu7::Rotations rotations;

	ASSERT_STREQ(std::string("abcd").c_str(), rotations.getRotatedString(INPUT, 0).c_str());
	ASSERT_STREQ(std::string("bcda").c_str(), rotations.getRotatedString(INPUT, 1).c_str());
	ASSERT_STREQ(std::string("cdab").c_str(), rotations.getRotatedString(INPUT, 2).c_str());
	ASSERT_STREQ(std::string("dabc").c_str(), rotations.getRotatedString(INPUT, 3).c_str());
}

TEST(All_InclusiveTest, containAllRotsShouldReturnFalse)
{
	codeWars::kyu7::Rotations rotations;
	std::string S = "RXjYABh";
	std::vector<std::string> G = {"TzYxlgfnhf", "yqVAuoLjMLy", "BhRXjYA", "YABhRXj", "hRXjYAB", "jYABhRX", "XjYABhR", "ABhRXjY"};

	ASSERT_FALSE(rotations.containAllRots(S, G));
}
