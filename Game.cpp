//
// Created by justinschenk on 12/12/2018.
//

#include "Game.h"

void Game::roll(int pins)
{
    rolls[rollCount] = pins;
    rollCount++;
}

int Game::scoreGame()
{
    int score = 0;
    int rollNum = 0;

    for(int frame = 0; frame < 10; frame++)
    {
        if (rolls[rollNum] == 10)
        {
            score += 10 + rolls[rollNum + 1] + rolls[rollNum + 2];
            rollNum++;
        }
        else
        {
            if (isSpare(rollNum))
            {
                score += 10 + rolls[rollNum + 2];
            }
            else
            {
                score += rolls[rollNum] + rolls[rollNum + 1];
            }

            rollNum += 2;
        }
    }

    return score;
}

bool Game::isSpare(int frameIndex)
{
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10;
}
