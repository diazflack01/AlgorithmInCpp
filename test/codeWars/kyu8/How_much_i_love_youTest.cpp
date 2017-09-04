#include <gtest/gtest.h>
#include <tuple>

#include <codeWars/kyu8/How_much_i_love_you.hpp>

class NumOfPetalsForPhrase : public ::testing::TestWithParam<std::tuple<std::string, unsigned>>
{};

TEST_P(NumOfPetalsForPhrase, ParametricTest)
{
	EXPECT_STREQ(std::get<0>(GetParam()).c_str(), codeWars::kyu8::how_much_i_love_you(std::get<1>(GetParam())).c_str());
}

std::vector<std::tuple<std::string, unsigned>> NUM_PETALS_PHRASE_LIST = {
		std::make_tuple("I love you", 7), std::make_tuple("a lot", 3), std::make_tuple("not at all", 6),
		std::make_tuple("I love you", 1), std::make_tuple("I love you", 283), std::make_tuple("not at all", 186)
};
INSTANTIATE_TEST_CASE_P(How_much_i_love_youTest, NumOfPetalsForPhrase, ::testing::ValuesIn(NUM_PETALS_PHRASE_LIST.begin(), NUM_PETALS_PHRASE_LIST.end()));
