#pragma once

#include <vector>

namespace codeWars {
namespace kyu8 {

class Find_nth_Digit_of_a_Number
{
public:
	Find_nth_Digit_of_a_Number() = default;
	~Find_nth_Digit_of_a_Number() = default;
	Find_nth_Digit_of_a_Number(const Find_nth_Digit_of_a_Number&) = delete;
	int findDigit(int num, int nth);

private:
	void parseNumber(int num);
	std::vector<int> mDigits;
};

}
}
