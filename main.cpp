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