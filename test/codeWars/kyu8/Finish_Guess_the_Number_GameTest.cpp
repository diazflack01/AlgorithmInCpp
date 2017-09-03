#include "gtest/gtest.h"
#include <memory>

#include <codeWars/kyu8/Finish_Guess_the_Number_Game.hpp>

TEST(Finish_Guess_the_Number_GameTest, trueCases)
{
	std::unique_ptr<codeWars::kyu8::Guesser> guesser = std::make_unique<codeWars::kyu8::Guesser>(3, 2);
	ASSERT_TRUE(guesser->guess(3));
	guesser.reset(new codeWars::kyu8::Guesser(1,1));
	ASSERT_TRUE(guesser->guess(1));
}

TEST(Finish_Guess_the_Number_GameTest, falseCases)
{
	std::unique_ptr<codeWars::kyu8::Guesser> guesser = std::make_unique<codeWars::kyu8::Guesser>(3, 2);
	ASSERT_FALSE(guesser->guess(1));
	ASSERT_FALSE(guesser->guess(1));
	ASSERT_FALSE(guesser->guess(1));
	ASSERT_FALSE(guesser->guess(1));
	guesser.reset(new codeWars::kyu8::Guesser(1,1));
	ASSERT_FALSE(guesser->guess(2));
	ASSERT_FALSE(guesser->guess(1));
	guesser.reset(new codeWars::kyu8::Guesser(1,0));
	ASSERT_FALSE(guesser->guess(1));
}
