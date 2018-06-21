
#include "GameEntityField.hpp"
#include <iostream>

int		main(void)
{
	GameEntityField		asteroids1(10);
	GameEntityField		asteroids2(asteroids1);
	GameEntityField		asteroids3(5);
	GameEntityField		asteroids4(3);

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

	return (0);
}
