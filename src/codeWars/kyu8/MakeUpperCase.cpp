#include "codeWars/kyu8/MakeUpperCase.hpp"

#include <cctype>
#include <algorithm>

namespace codeWars {
namespace kyu8 {

std::string MakeUpperCase::makeUpperCase (const std::string& input_str)
{
	std::string ret(input_str.size(), 'a');
	auto unaryOp = [](const char& a)->char{ return (isupper(a)) ? a : toupper(a); };
	std::transform(input_str.begin(), input_str.end(), ret.begin(), unaryOp);
	return ret;
}

}
}
