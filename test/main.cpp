#include "gtest/gtest.h"

#include <codeWars/kyu8/MakeUpperCaseTest.cpp>
#include <codeWars/kyu8/Find_nth_Digit_of_a_NumberTest.cpp>
#include <codeWars/kyu8/Finish_Guess_the_Number_GameTest.cpp>
#include <codeWars/kyu8/How_much_i_love_youTest.cpp>
#include <codeWars/kyu8/Evil_or_OdiousTest.cpp>

#include <codeWars/kyu7/All_InclusiveTest.cpp>
#include <codeWars/kyu7/Scaling_Squared_StringsTest.cpp>
#include <codeWars/kyu7/Composing_squared_stringsTest.cpp>
#include <codeWars/kyu7/Sum_of_two_lowest_positive_integersTest.cpp>
#include <codeWars/kyu7/Maximum_Length_DifferenceTest.cpp>

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
