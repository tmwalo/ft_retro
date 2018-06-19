#include <ncurses.h>
#include <iostream>
#include "game.hpp"

WINDOW	*wnd;

int		init(void)
{
	wnd = initscr();
	cbreak();
	noecho();
	clear();
	refresh();
	keypad(wnd, true);
	nodelay(wnd, true);
	curs_set(0);
	attron(A_BOLD);
	box(wnd, 0, 0);
	attroff(A_BOLD);

	return (0);
}

void	run(void)
{
	std::string		text;

	move(5, 5);
	text = "Hello World\n";
	for (size_t index = 0; index < text.size(); ++index)
	{
		addch(text[index]);
	}
	refresh();
	while (1);
}

void	close(void)
{
	endwin();
}
