#include "Find_nth_Digit_of_a_Number.hpp"

#include <cmath>
#include <cstdlib>
#include <string>
#include <iostream>

namespace codeWars {
namespace kyu8 {

void Find_nth_Digit_of_a_Number::parseNumber(int num)
{
	while(num >= 10)
	{
		mDigits.push_back((num % 10));
		num /= 10;
	}
	mDigits.push_back(num);
}

int Find_nth_Digit_of_a_Number::findDigit(int num, int nth)
{
	if (0 >= nth)
	{
		return -1;
	}

	if(0 > num)
	{
		num = std::abs(num);
	}

	parseNumber(num);
	return (mDigits.size() < static_cast<unsigned>(nth)) ? 0 : mDigits.at(nth - 1);
}

}
}
