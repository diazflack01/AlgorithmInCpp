#include "Finish_Guess_the_Number_Game.hpp"

#include <exception>

namespace codeWars {
namespace kyu8 {

Guesser::Guesser(int number, int lives)
	: mNumber(number)
	, mLives(lives)
{}

bool Guesser::guess(int n)
{
	if (mLives <= 0)
	{
		throw std::exception();
	}
	else
	{
		return (mLives-- > 0 && n == mNumber) ? true : false;
	}
}

}
}

