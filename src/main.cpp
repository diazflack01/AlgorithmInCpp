#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

#include "codeWars/kyu8/MakeUpperCase.hpp"

int main()
{
	std::cout << codeWars::kyu8::MakeUpperCase::makeUpperCase("hello") << std::endl;
	std::cout << codeWars::kyu8::MakeUpperCase::makeUpperCase("hello123") << std::endl;
	return 0;
}
