#include <gtest/gtest.h>
#include <string>

#include <codeWars/kyu7/Scaling_Squared_Strings.hpp>

TEST(ScalingSqStringsTest, horizontalScaleStrShouldReturnCorrectValue)
{
	const std::string TEST_INPUT("abcd\nefgh\nijkl\nmnop");
	ASSERT_STREQ(std::string("").c_str(),
			codeWars::kyu7::ScalingSqStrings::horozontalScaleStr("", 1).c_str());
	ASSERT_STREQ(std::string("aaabbbcccddd\neeefffggghhh\niiijjjkkklll\nmmmnnnoooppp").c_str(),
			codeWars::kyu7::ScalingSqStrings::horozontalScaleStr(TEST_INPUT, 3).c_str());
	ASSERT_STREQ(std::string("").c_str(),
			codeWars::kyu7::ScalingSqStrings::horozontalScaleStr(TEST_INPUT, 0).c_str());
	ASSERT_STREQ(std::string("abcd\nefgh\nijkl\nmnop").c_str(),
			codeWars::kyu7::ScalingSqStrings::horozontalScaleStr(TEST_INPUT, 1).c_str());
	ASSERT_STREQ(std::string("aaaaabbbbbcccccddddd\neeeeefffffggggghhhhh\niiiiijjjjjkkkkklllll\nmmmmmnnnnnoooooppppp").c_str(),
			codeWars::kyu7::ScalingSqStrings::horozontalScaleStr(TEST_INPUT, 5).c_str());
}

TEST(ScalingSqStringsTest, verticalScaleStrShouldReturnCorrectValue)
{
	const std::string TEST_INPUT("abcd\nefgh\nijkl\nmnop");
	ASSERT_STREQ(std::string("").c_str(),
			codeWars::kyu7::ScalingSqStrings::verticalScaleStr("", 1).c_str());
	ASSERT_STREQ(std::string("abcd\nabcd\nabcd\nefgh\nefgh\nefgh\nijkl\nijkl\nijkl\nmnop\nmnop\nmnop").c_str(),
			codeWars::kyu7::ScalingSqStrings::verticalScaleStr(TEST_INPUT, 3).c_str());
	ASSERT_STREQ(std::string("abcd\nefgh\nijkl\nmnop").c_str(),
			codeWars::kyu7::ScalingSqStrings::verticalScaleStr(TEST_INPUT, 1).c_str());
}

TEST(ScalingSqStringsTest, scaleShouldReturnCorrectValue)
{
	const std::string TEST_INPUT("abcd\nefgh\nijkl\nmnop");
	ASSERT_STREQ(std::string("").c_str(),
			codeWars::kyu7::ScalingSqStrings::scale("", 1, 3).c_str());
	ASSERT_STREQ(std::string("aabbccdd\naabbccdd\naabbccdd\neeffgghh\neeffgghh\neeffgghh\niijjkkll\niijjkkll\niijjkkll\nmmnnoopp\nmmnnoopp\nmmnnoopp").c_str(),
			codeWars::kyu7::ScalingSqStrings::scale(TEST_INPUT, 2, 3).c_str());
}
