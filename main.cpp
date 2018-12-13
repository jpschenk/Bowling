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

TEST_CASE("Single pin Game Return 20", "[score]")
{
    //Arrange
    Game g;
    int pins = 1;

    //Act
    for (int i = 0; i < 20; i++)
    {
        g.roll(pins);
    }

    //Assert
    REQUIRE(20 == g.scoreGame());
}

TEST_CASE("1 Spare and Gutters", "[score]")
{
    //Arrange
    Game g;
    int pins = 0;

    //Act
    g.roll(5);
    g.roll(5);
    g.roll(3);

    for (int i = 0; i < 17; i++)
    {
        g.roll(pins);
    }

    //Assert
    REQUIRE(16 == g.scoreGame());
}

TEST_CASE("1 Strike and Gutters", "[score]")
{
    //Arrange
    Game g;
    int pins = 0;

    //Act
    g.roll(10);
    g.roll(3);
    g.roll(4);

    for (int i = 0; i < 16; i++)
    {
        g.roll(pins);
    }

    //Assert
    REQUIRE(24 == g.scoreGame());
}

TEST_CASE("Perfect Game", "[score]")
{
    //Arrange
    Game g;
    int pins = 10;

    //Act
    for (int i = 0; i < 12; i++)
    {
        g.roll(pins);
    }

    //Assert
    REQUIRE(300 == g.scoreGame());
}

TEST_CASE("Spare Strike", "[score]")
{
    //Arrange
    Game g;
    g.roll(10);

    g.roll(9);
    g.roll(1);

    g.roll(10);

    g.roll(7);
    g.roll(3);

    g.roll(10);

    g.roll(5);
    g.roll(5);

    g.roll(10);

    g.roll(9);
    g.roll(1);

    g.roll(10);

    g.roll(9);
    g.roll(1);

    g.roll(10);
    //Assert
    REQUIRE(200 == g.scoreGame());
}



