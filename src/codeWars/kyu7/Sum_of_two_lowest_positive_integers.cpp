#include "Sum_of_two_lowest_positive_integers.hpp"

#include <algorithm>
#include <vector>

namespace codeWars {
namespace kyu7 {

long sumTwoSmallestNumbers(std::vector<int> numbers)
{
	std::sort(numbers.begin(), numbers.end());
	std::remove_if(numbers.begin(), numbers.end(), [](const int i){ return (0 >= i) ? true : false; });
	//When adding two different integral primitive types, the one with bigger size is the ending type. So for this case it's `long`
    return static_cast<long>(numbers.at(0)) + numbers.at(1);
}

}
}
