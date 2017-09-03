#include "gtest/gtest.h"

#include <tuple>
#include <vector>

//File under test
#include <codeWars/kyu8/Find_nth_Digit_of_a_Number.hpp>

namespace {

class Find_nth_Digit_of_a_NumberTest : public testing::TestWithParam<std::tuple<int, int, int>>
{
protected:
	codeWars::kyu8::Find_nth_Digit_of_a_Number mFind_nth_Digit_of_a_Number;
};

std::vector<std::tuple<int, int, int>> generateTestInput()
{
	std::vector<std::tuple<int, int, int>> ret;

	ret.push_back(std::make_tuple(5673, 4, 5));
	ret.push_back(std::make_tuple(129, 2, 2));
	ret.push_back(std::make_tuple(-2825, 3, 8));
	ret.push_back(std::make_tuple(-456, 4, 0));
	ret.push_back(std::make_tuple(0, 20, 0));
	ret.push_back(std::make_tuple(65, 0, -1));
	ret.push_back(std::make_tuple(24, -8, -1));

	return ret;
}

const auto TEST_INPUT = generateTestInput();

TEST_P(Find_nth_Digit_of_a_NumberTest, ParametricTest)
{
	EXPECT_EQ(std::get<2>(GetParam()), mFind_nth_Digit_of_a_Number.findDigit(std::get<0>(GetParam()), std::get<1>(GetParam())));
}

INSTANTIATE_TEST_CASE_P(InstantiationName, Find_nth_Digit_of_a_NumberTest, ::testing::ValuesIn(TEST_INPUT.begin(), TEST_INPUT.end()));

}
