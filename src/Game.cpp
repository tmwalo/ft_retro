#include <ncurses.h>
#include <iostream>
#include "Game.hpp"

WINDOW	*wnd;

Game::Game(void)
{
	int		ret;

	ret = this->init();
	if (ret != 0)
		throw std::exception();
	return ;
}

Game::Game(Game const & src)
{
	*this = src;
	return ;
}

Game::~Game(void)
{
	this->close();
	return ;
}

Game &		Game::operator=(Game const & rhs)
{
	(void)rhs;
	return (*this);
}

int			Game::init(void)
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

void		Game::run(void)
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

void		Game::close(void)
{
	endwin();
}
