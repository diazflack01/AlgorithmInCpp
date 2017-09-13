#include <gtest/gtest.h>
#include <string>

#include <codeWars/kyu7/Composing_squared_strings.hpp>

TEST(ComposeSqStringsTest, composeShouldReturnCorrectValue)
{
	std::string S1 = "byGt\nhTts\nRTFF\nCnnI";
	std::string S2 = "jIRl\nViBu\nrWOb\nNkTB";
	ASSERT_STREQ(codeWars::kyu7::ComposeSqStrings::compose(S1, S2).c_str(), std::string("bNkTB\nhTrWO\nRTFVi\nCnnIj").c_str());
}
