#include "game.hpp"

int		main(int argc, char **argv)
{
	int		init_status;

	(void)argc;
	(void)argv;
	init_status = init();
	if (init_status == 0)
		run();
	close();

	return (0);
}
