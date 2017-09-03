#pragma once

namespace codeWars {
namespace kyu8 {

class Guesser
{
public:
    Guesser(int number, int lives);
    Guesser(const Guesser&) = delete;
    ~Guesser() = default;

    bool guess(int n);

private:
    int mNumber;
	int mLives;
};

}
}
