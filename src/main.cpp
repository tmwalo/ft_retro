#include "Game.hpp"
#include <iostream>

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	try
	{
		Game	game;
	
		game.run();
	}
	catch (std::exception e)
	{
		std::cout << "Game initialisation failed" << std::endl;
	}
	return (0);
}
