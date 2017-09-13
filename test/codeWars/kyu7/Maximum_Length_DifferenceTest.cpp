#include <gtest/gtest.h>
#include <vector>
#include <string>

#include <codeWars/kyu7/Maximum_Length_Difference.hpp>

TEST(Maximum_Length_DifferenceTest, shouldReturnMaxDifferenceOfTwoStringsFromList)
{
	std::vector<std::string> S1 = {"abcd", "1234567", "1"};
	std::vector<std::string> S2 = {"1234567890", "1234567890"};
	const auto diff = codeWars::kyu7::MaxDiffLength::mxdiflg(S1, S2);
	ASSERT_EQ(9, diff);
}
