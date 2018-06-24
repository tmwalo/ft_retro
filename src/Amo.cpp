
#include "Amo.hpp"

Amo::Amo(void) :
		_displayChar('-'),
		_attckDmg(100),
		_isFired(false)
{
	Point		origin(0, 0);
	Point		size(1, 1);
	Rectangle	bounds(origin, size);

	this->_pos = origin;
	this->_bounds = bounds;
	return ;
}

Amo::Amo(char displayChar, Point pos, Rectangle bounds, unsigned int attckDmg, bool isFired) :
		_displayChar(displayChar),
		_pos(pos),
		_bounds(bounds),
		_attckDmg(attckDmg),
		_isFired(isFired)
{
	return ;
}

Amo::Amo(Amo const & src)
{
	*this = src;
	return ;
}

Amo::~Amo(void)
{
	return ;
}

Amo &		Amo::operator=(Amo const & rhs)
{
	this->_displayChar = rhs.getDisplayChar();
	this->_pos = rhs.getPos();
	this->_bounds = rhs.getBounds();
	this->_attckDmg = rhs.getAttckDmg();
	this->_isFired = rhs.getIsFired();
	return (*this);
}
char			Amo::getDisplayChar(void) const
{
	return (this->_displayChar);
}

Point			Amo::getPos(void) const
{
	return (this->_pos);
}

Rectangle		Amo::getBounds(void) const
{
	return (this->_bounds);
}

unsigned int	Amo::getAttckDmg(void) const
{
	return (this->_attckDmg);
}

bool			Amo::getIsFired(void) const
{
	return (this->_isFired);
}

void			Amo::setDisplayChar(char val)
{
	this->_displayChar = val;
	return ;
}

void			Amo::setPos(Point val)
{
	this->_pos = val;
	return ;
}

void			Amo::setBounds(Rectangle val)
{
	this->_bounds = val;
	return ;
}

void			Amo::setAttckDmg(unsigned int val)
{
	this->_attckDmg = val;
	return ;
}

void			Amo::setIsFired(bool val)
{
	this->_isFired = val;
	return ;
}

std::ostream &		operator<<(std::ostream & out, Amo & rhs)
{
	out << "display char: " << rhs.getDisplayChar() << std::endl;
	out << "position: " << rhs.getPos() << std::endl;
	out << "bounds: ";
	out << "topLeft - " << rhs.getBounds().getTopLeftCoords() << ", ";
	out << "bottomRight - " << rhs.getBounds().getBottomRightCoords() << std::endl;
	out << "special attack dmg: " << rhs.getAttckDmg() << std::endl;
	out << "isFired: " << rhs.getIsFired() << std::endl;
	return (out);
}
