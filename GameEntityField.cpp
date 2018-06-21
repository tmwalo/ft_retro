
#include "GameEntityField.hpp"

GameEntityField::GameEntityField(void)
{
	return ;
}

GameEntityField::GameEntityField(unsigned int size) : _size(size)
{
	this->_field = new GameEntityEnv[size];
	return ;
}

GameEntityField::GameEntityField(GameEntityField const & src)
{
	int		index;

	this->_fieldBounds = src.getFieldBounds();
	this->_size = src.getSize();
	this->_field = new GameEntityEnv[this->_size];
	index  = 0;
	while (index < this->getSize())
	{
		(this->_field)[index] = (src.getField())[index];
		++index;
	}
	*this = src;
	return ;
}

GameEntityField::~GameEntityField(void)
{
	delete [] (this->_field);
	return ;
}

GameEntityField &		GameEntityField::operator=(GameEntityField const & rhs)
{
	int		index;

	delete [] (this->_field);
	this->_fieldBounds = rhs.getFieldBounds();
	this->_size = rhs.getSize();
	this->_field = new GameEntityEnv[this->_size];
	index  = 0;
	while (index < this->getSize())
	{
		(this->_field)[index] = (rhs.getField())[index];
		++index;
	}
	return (*this);
}

Rectangle 				GameEntityField::getFieldBounds(void) const
{

	return ;
}

GameEntityEnv			getField(void) const
{
	return (this->_field);
}

unsigned int			getSize(void) const
{
	return (this->_size);
}

void					setFieldBounds(Rectangle fieldBounds)
{
	this->_fieldBounds = fieldBounds;
	return ;
}

void					update(void)
{
	
	return ;
}
