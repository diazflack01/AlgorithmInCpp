#include "Finish_Guess_the_Number_Game.hpp"

namespace codeWars {
namespace kyu8 {

Guesser::Guesser(int number, int lives)
	: mNumber(number)
	, mLives(lives)
{}

bool Guesser::guess(int n)
{
	while (mLives-- > 0)
	{
		if (n == mNumber)
		{
			return true;
		}
	}
	return false;
}

}
}

