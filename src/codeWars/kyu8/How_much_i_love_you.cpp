#include "How_much_i_love_you.hpp"

#include <map>

namespace codeWars {
namespace kyu8 {


std::string how_much_i_love_you(int nb_petals)
{
	const std::map<unsigned, std::string> PHRASE_LIST = { {1, "I love you"}, {2, "a little"}, {3, "a lot"},
			{4, "passionately"}, {5, "madly"}, {6, "not at all"} };

	if (0 < nb_petals && 7 > nb_petals)
	{
		return PHRASE_LIST.at(nb_petals);
	}
	else if (7 <= nb_petals)
	{
		const auto POS = nb_petals % 6;
		return (POS == 0) ? PHRASE_LIST.at(6) : PHRASE_LIST.at(POS);
	}
	else
	{
		return std::string();
	}
}

}
}
