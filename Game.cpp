//
// Created by justinschenk on 12/12/2018.
//

#include "Game.h"

void Game::roll(int pins)
{
    int newScore = pins;

    if (spare == true)
    {
        newScore = newScore * 2;
        spare = false;
    }
    else if (rollCount % 2 == 0)
    {
        if ((pins + previousRoll) == 10)
        {
            spare = true;
        }
    }

    score += newScore;
    previousRoll = pins;
    rollCount++;
}

int Game::scoreGame()
{
    return score;
}
