#include "GameEntity.hpp"
#include <iostream>

int		main(void)
{
	GameEntity		player1(100, 100, 100, 100, 20, 1, "spykos", 30, 10, 50, 5);
	GameEntity		player2(100, 100, 100, 100, 20, 1, "delicious", 30, 10, 50, 5);
	GameEntity		player3(player1);
	GameEntity		enemy(50, 50, 50, 50, 20, 1, "enemy of progress", 20, 8, 25, 7);
	GameEntity		asteroid1(0, 0, 0, 0, 20, 1, "space rock", 40, 0, 0, 10);
	GameEntity		asteroid2(0, 0, 0, 0, 9000, 9000, "choc thunder", 9000, 0, 0, 9000);

	std::cout << player1 << std::endl;
	std::cout << player2 << std::endl;
	std::cout << "player3(player1)" << std::endl;
	std::cout << player3 << std::endl;
	std::cout << enemy << std::endl;
	std::cout << asteroid1 << std::endl;
	std::cout << asteroid2 << std::endl;
	std::cout << "space rock = choc thunder" << std::endl;
	asteroid1 = asteroid2;
	std::cout << asteroid1 << std::endl;

	return (0);
}
