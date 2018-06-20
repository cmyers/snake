// Snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Entity.h"
#include "Game.h"
#include "Grid.h"
#include "Snake.h"
#include <vector>


Game loadEntities()
{
	Grid* grid = new Grid(50, 25);
	Snake snake(grid);

	snake.moveSnake(Direction::LEFT);
	snake.moveSnake(Direction::LEFT);
	snake.moveSnake(Direction::DOWN);
	snake.moveSnake(Direction::DOWN);

	return Game(grid);
}

void init()
{
	Game game = loadEntities();
	game.gameLoop();
}

int main()
{
	init();
    return 0;
}

