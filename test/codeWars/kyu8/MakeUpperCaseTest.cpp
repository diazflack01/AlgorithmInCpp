#include "gtest/gtest.h"
#include <utility>
#include <string>

//File under test
#include <codeWars/kyu8/MakeUpperCase.hpp>

struct MakeUpperCaseTest : public ::testing::TestWithParam<std::pair<std::string, std::string>>
{};

TEST_P(MakeUpperCaseTest, Blah)
{
	EXPECT_STREQ(GetParam().second.c_str(),
			codeWars::kyu8::MakeUpperCase::makeUpperCase(GetParam().first).c_str());
}
const std::vector<std::pair<std::string, std::string>> TEST_INPUT = {
		{"meeny", "MEENY"}, {"miny", "MINY"}, {"mode", "MODE"}, {"1234", "1234"}, {"hello", "HELLO"}, {"pek123", "PEK123"}};
INSTANTIATE_TEST_CASE_P(InstantiationName, MakeUpperCaseTest, ::testing::ValuesIn(TEST_INPUT.begin(), TEST_INPUT.end()));

