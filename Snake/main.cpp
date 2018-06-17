// Snake.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Entity.h"
#include "Game.h"
#include "Grid.h"
#include <vector>


void init()
{
	std::vector<std::vector<Entity*>> entities;
	Grid grid(entities);
}

int main()
{
	init();



    return 0;
}

