
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
	unsigned int	index;

	this->_fieldBounds = src.getFieldBounds();
	this->_size = src.getSize();
	this->_field = new GameEntityEnv[this->_size];
	index  = 0;
	while (index < this->getSize())
	{
		(this->_field)[index] = (src.getField())[index];
		++index;
	}
	return ;
}

GameEntityField::~GameEntityField(void)
{
	delete [] (this->_field);
	return ;
}

GameEntityField &		GameEntityField::operator=(GameEntityField const & rhs)
{
	unsigned int	index;

	if (this != &rhs)
	{
		if (this->_field)
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
	}
	return (*this);
}

void					GameEntityField::fieldOfDuplicates(GameEntityEnv const & src)
{
	unsigned int	index;

	index = 0;
	while (index < this->getSize())
	{
		((this->getField())[index]) = src;
		++index;
	}
	return ;
}

void					GameEntityField::randomizePositions(Rectangle gameBounds)
{
	unsigned int	index;

	index = 0;
	while (index < this->getSize())
	{
		((this->getField())[index]).randomizePos(gameBounds);
		++index;
	}
	return ;
}

void					GameEntityField::randomizeYPositions(Rectangle gameBounds)
{
	unsigned int	index;

	index = 0;
	while (index < this->getSize())
	{
		((this->getField())[index]).randomizeY(gameBounds);
		++index;
	}
	return ;
}

Rectangle 				GameEntityField::getFieldBounds(void) const
{
	return (this->_fieldBounds);
}

GameEntityEnv			*GameEntityField::getField(void) const
{
	return (this->_field);
}

unsigned int			GameEntityField::getSize(void) const
{
	return (this->_size);
}

void					GameEntityField::setFieldBounds(Rectangle fieldBounds)
{
	this->_fieldBounds = fieldBounds;
	return ;
}

void					GameEntityField::update(Rectangle gameBounds)
{
	unsigned int	index;

	index = 0;
	while (index < this->getSize())
	{
		((this->getField())[index]).update(gameBounds);
		++index;
	}
	return ;
}

std::ostream &				operator<<(std::ostream & out, GameEntityField & rhs)
{
	unsigned int	index;

	index = 0;
	while (index < rhs.getSize())
	{
		out << (rhs.getField())[index] << std::endl;
		++index;
	}
	return (out);
}
