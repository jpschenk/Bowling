//
// Created by justinschenk on 12/12/2018.
//

#ifndef BOWLING_GAME_H
#define BOWLING_GAME_H


class Game {
    int score = 0;
    int rollCount = 0;
    int previousRoll = 0;
    bool spare = false;

public:
    void roll(int pins);

    int scoreGame();
};


#endif //BOWLING_GAME_H
