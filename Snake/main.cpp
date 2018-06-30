// SnakeGame.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Game.h"

using namespace SnakeGame;

sf::RenderWindow sfWindow(sf::VideoMode(600, 600), "Snake");
Game game(sfWindow);

int main()
{
	game.gameLoop();
	return 0;
}