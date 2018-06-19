#include "Enemy.hpp"
#include "bullet.hpp"
#include <ncurses.h>

Enemy::Enemy()
{
    this->_name = "Enemy";
    this->_x = 0;
    this->_y = LINES / 2;
}
Enemy::~Enemy()
{
    return ;
}
Enemy::Enemy( std::string name )
{
    this->_name = name;
}
Enemy::Enemy( Enemy const &p1)
{
    *this = p1;
}

Enemy &Enemy::operator=( Enemy const &p1)
{
    this->_name = p1.getname();
    return (*this);
}

void    Enemy::move(int y, int x, int ch)
{
    switch (ch)
    {
        case KEY_UP:
            if (y > (LINES / 10))
                this->_y--;
            break;
        case KEY_DOWN:
            if (y < (LINES - (LINES / 10)))
                this->_y++;
            break;
        case KEY_LEFT:
            if (x != 5)
                this->_x--;
            break;
        case KEY_RIGHT:
            if (x < (COLS - 5))
                this->_x++;
            break;  
        case ' ':
            shoot();
            break;
    }
    mvaddch(_y, _x, _body);
    refresh();
}

void    Enemy::shoot()
{
    bullet bullet(this->_x, this->_y);

    bullet.update();
}

int     Enemy::get_x() const
{
    return this->_x;
}

int     Enemy::get_y() const
{
    return this->_y;
}

std::string Enemy::getname() const
{
    return this->_name;
}
