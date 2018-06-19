#include "Point.hpp"

Point::Point(void) : _y(0), _x(0)
{
	return ;
}

Point::Point(unsigned int y, unsigned int x) : _y(y), _x(x)
{
	return ;
}

Point::Point(Point const & src)
{
	*this = src;
	return ;
}

Point::~Point(void)
{
	return ;
}

Point &			Point::operator=(Point const & rhs)
{
	this->_y = rhs.getY();
	this->_x = rhs.getX();
	return (*this);
}

unsigned int 	Point::getY(void) const
{
	return (this->_y);
}

unsigned int 	Point::getX(void) const
{
	return (this->_x);
}

void			Point::setY(unsigned int val)
{
	this->_y = val;
	return ;
}

void			Point::setX(unsigned int val)
{
	this->_x = val;
	return ;
}