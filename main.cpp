#include <iostream>
#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "Game.h"

TEST_CASE("Does the game exist", "[score]")
{
    //Arrange
    Game *g = new Game;
    //Act

    //Assert
    REQUIRE(g != NULL);
}

TEST_CASE("Gutter Game Return 0", "[score]")
{
    //Arrange
    Game g;
    int pins = 0;

    //Act
    for (int i = 0; i < 20; i++)
    {
        g.roll(pins);
    }

    //Assert
    REQUIRE(0 == g.scoreGame());
}