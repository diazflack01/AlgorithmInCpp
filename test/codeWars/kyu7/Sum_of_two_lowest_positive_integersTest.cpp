#include <gtest/gtest.h>

#include <tuple>
#include <vector>

#include <codeWars/kyu7/Sum_of_two_lowest_positive_integers.hpp>

std::vector<std::tuple<long, std::vector<int>>> NUMBER_LIST = {
		std::make_tuple(2, std::vector<int>{5, 2, 3, 5, -1, -2, 0, 1, 1}), std::make_tuple(3, std::vector<int>{1, 3, 55, 99, 66, 2})
};

class sumTwoSmallestNumbers : public ::testing::TestWithParam<std::tuple<long, std::vector<int>>>
{};

TEST_P(sumTwoSmallestNumbers, parametricTest)
{
	EXPECT_EQ(std::get<0>(GetParam()), codeWars::kyu7::sumTwoSmallestNumbers(std::get<1>(GetParam())));
}

INSTANTIATE_TEST_CASE_P(Sum_of_two_lowest_positive_integersTest, sumTwoSmallestNumbers, ::testing::ValuesIn(NUMBER_LIST.begin(), NUMBER_LIST.end()));
