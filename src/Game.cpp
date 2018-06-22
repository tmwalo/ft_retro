#include <ncurses.h>
#include <iostream>
#include "Game.hpp"
#include "GameEntity.hpp"
#include "GameEntityEnv.hpp"
#include "Point.hpp"
#include <unistd.h>

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
	Point			startPos(5, 5);
	GameEntity		player('>', startPos, 1000, 1000, 1000, 1000, 200, 3, "lonewave", 50, 100, 150, 25);
	int				inputChar;
	bool			exitRequested;
	int				posY;
	int				posX;
	Point			startPt(10, 50);
	GameEntityEnv	asteroid('*', startPt, 1000, 1000, 1000, 1000, 200, 3, "brick", 50, 100, 150, 25);
	int				maxY;
	int				maxX;

	getmaxyx(wnd, maxY, maxX);
	Point			topLeft(0, 0);
	Point			bottomRight(maxY, maxX);
	Rectangle		gameBounds(topLeft, bottomRight);
	
	while (1)
	{
		inputChar = wgetch(wnd);
		posY = player.getPos().getY();
		posX = player.getPos().getX();

		switch (inputChar) {
		
			case 'q':
				exitRequested = true;
				break ;
		
			case KEY_UP:
			case 'w':
			{
				Point		newPosUp(posY - 1, posX);
				player.setPos(newPosUp);
				break ;
			}
		
			case KEY_DOWN:
			case 's':
			{
				Point		newPosDown(posY + 1, posX);
				player.setPos(newPosDown);
				break ;
			}
		
			case KEY_LEFT:
			case 'a':
			{
				Point		newPosLeft(posY, posX - 1);
				player.setPos(newPosLeft);
				break ;
			}
		
			case KEY_RIGHT:
			case 'd':
			{
				Point		newPosRight(posY, posX + 1);
				player.setPos(newPosRight);
				break ;
			}
			
			default:
				break ;
		
		}

		asteroid.update(gameBounds);

		clear();

		mvaddch(player.getPos().getY(), player.getPos().getX(), player.getDisplayChar());
		mvaddch(asteroid.getPos().getY(), asteroid.getPos().getX(), asteroid.getDisplayChar());

		refresh();

		if (exitRequested)
			break ;

		usleep(10000);
	}
}

void		Game::close(void)
{
	endwin();
}
