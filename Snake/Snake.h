#pragma once
#include "Entity.h"
#include "Enums.h"
#include "Grid.h"
#include <deque>

struct HeadPos
{
	int x;
	int y;
};

class Snake
{
	private:
		std::deque<Entity*> body;
		HeadPos headPos;
		Grid* grid; //snake controls and knows where it is in the world, so has access to grid and can move around it
		Direction dir;
		bool checkCollision();
		void eat();
		void updateScore();
	public:
		Snake(Grid* grid);
		void moveSnake(Direction dir);
};