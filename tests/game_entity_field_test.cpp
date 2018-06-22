
#include "GameEntityField.hpp"
#include <iostream>
#include <cstdlib>

int		main(void)
{
	GameEntityField		asteroids1(10);
	GameEntityField		asteroids2(asteroids1);
	GameEntityField		asteroids3(5);
	GameEntityField		asteroids4(3);
	Point				startPt(10, 50);
	GameEntityEnv		asteroid('*', startPt, 1000, 1000, 1000, 1000, 200, 3, "brick", 50, 100, 150, 25);
	GameEntityField		asteroidBelt(5);
	unsigned int		index;
	GameEntityEnv		*field;

	Point				topLeft(0, 0);
	Point				bottomRight(100, 100);
	Rectangle			gameBounds(topLeft, bottomRight);
	
	srand(time(NULL));

	asteroidBelt.fieldOfDuplicates(asteroid);
	asteroidBelt.randomizePositions(gameBounds);
/*
	std::cout << "astr 1:" << std::endl;
	std::cout << asteroids1 << std::endl;
	std::cout << "astr 2:" << std::endl;
	std::cout << asteroids2 << std::endl;
	std::cout << "astr 3:" << std::endl;
	std::cout << asteroids3 << std::endl;
	std::cout << "astr 4:" << std::endl;
	std::cout << asteroids4 << std::endl;
	asteroids3 = asteroids4;
	std::cout << "asteroids3 after asteroids3 = asteroids4" << std::endl;
	std::cout << asteroids3 << std::endl;
*/
	field = asteroidBelt.getField();
	index = 0;
	while (index < asteroidBelt.getSize())
	{
		std::cout << field[index] << std::endl;
		++index;
	}

	return (0);
}
