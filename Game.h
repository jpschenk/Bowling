//
// Created by justinschenk on 12/12/2018.
//

#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H
#include <array>

class Game {
    int rollCount = 0;
    std::array<int, 21> rolls;

public:
    void roll(int pins);
    int scoreGame();
    bool isSpare(int frameIndex);
};


#endif //BOWLING_GAME_H
