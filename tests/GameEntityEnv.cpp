
#include "GameEntityEnv.hpp"
#include <cstdlib>

GameEntityEnv::GameEntityEnv(void)
{
	return ;
}

GameEntityEnv::GameEntityEnv(char displayChar, Point pos, int hitPts, int maxHitPts, int energyPts,
						int maxEnergyPts, int specialAttckCost, int lvl, std::string name,
						int meleeAttckDmg, int rangedAttckDmg, int specialAttckDmg,
						int armorDmgReduction) :
						GameEntity(displayChar, pos, hitPts, maxHitPts, energyPts,
						maxEnergyPts, specialAttckCost, lvl, name, meleeAttckDmg,
						rangedAttckDmg, specialAttckDmg, armorDmgReduction)
{
	return ;
}

GameEntityEnv::GameEntityEnv(GameEntityEnv const & src) : GameEntity(src)
{
	*this = src;
	return ;
}

GameEntityEnv::~GameEntityEnv(void)
{
	return ;
}

GameEntityEnv &		GameEntityEnv::operator=(GameEntityEnv const & rhs)
{
	this->setDisplayChar(rhs.getDisplayChar());
	this->setPos(rhs.getPos());
	this->setHitPts(rhs.getHitPts());
	this->setMaxHitPts(rhs.getMaxHitPts());
	this->setEnergyPts(rhs.getEnergyPts());
	this->setMaxEnergyPts(rhs.getMaxEnergyPts());
	this->setSpecialAttckCost(rhs.getSpecialAttckCost());
	this->setLvl(rhs.getLvl());
	this->setName(rhs.getName());
	this->setMeleeAttckDmg(rhs.getMeleeAttckDmg());
	this->setRangedAttckDmg(rhs.getRangedAttckDmg());
	this->setSpecialAttckDmg(rhs.getSpecialAttckDmg());
	this->setArmorDmgReduction(rhs.getArmorDmgReduction());
	return (*this);
}

void				GameEntityEnv::update(Rectangle gameBounds)
{
	int				posY;
	int				posX;
	unsigned int	minX;

	posY = (this->getPos()).getY();
	posX = (this->getPos()).getX();
	minX = gameBounds.getTopLeftCoords().getX();
	if (posX == (int)minX)
	{
		this->resetX(gameBounds);
		this->randomizeY(gameBounds);
	}
	else
	{
		Point	newPosLeft(posY, posX - 1);
		this->setPos(newPosLeft);
	}
	return ;
}

void				GameEntityEnv::resetX(Rectangle gameBounds)
{
	unsigned int	minX;
	unsigned int	maxX;
	int				posY;
	int				posX;

	minX = gameBounds.getTopLeftCoords().getX();
	maxX = gameBounds.getBottomRightCoords().getX();
	posY = (this->getPos()).getY();
	posX = (this->getPos()).getX();
	if (posX == (int)minX)
	{
		Point	newPosX(posY, maxX);
		this->setPos(newPosX);
	}
	return ;

}

void				GameEntityEnv::randomizeY(Rectangle gameBounds)
{
	unsigned int	minY;
	unsigned int	maxY;
	int				randY;
	int				posX;

	minY = gameBounds.getTopLeftCoords().getY();
	maxY = gameBounds.getBottomRightCoords().getY();
	randY = (rand() % maxY) + minY;
	posX = (this->getPos()).getX();
	Point	newPosY(randY, posX);
	this->setPos(newPosY);
	return ;
}

void				GameEntityEnv::randomizePos(Rectangle gameBounds)
{
	unsigned int	minY;
	unsigned int	maxY;
	unsigned int	minX;
	unsigned int	maxX;
	int				randY;
	int				randX;

	minY = gameBounds.getTopLeftCoords().getY();
	maxY = gameBounds.getBottomRightCoords().getY();
	minX = gameBounds.getTopLeftCoords().getX();
	maxX = gameBounds.getBottomRightCoords().getX();
	randY = (rand() % maxY) + minY;
	randX = (rand() % maxX) + minX;
	Point	newPos(randY, randX);
	this->setPos(newPos);
	return ;
}

void				GameEntityEnv::detectAmoCollisions(GameEntity & enemy, Rectangle gameBounds)
{
	unsigned int	index;

	index = 0;
	while (index < enemy.getAmoSize())
	{
		if (this->getPos() == ((enemy.getAmo())[index]).getPos())
		{
			this->resetX(gameBounds);
			this->randomizeY(gameBounds);
		}
		++index;
	}
}

std::ostream &		operator<<(std::ostream & out, GameEntityEnv & rhs)
{
	out << "display char: " << rhs.getDisplayChar() << std::endl;
	out << "name: " << rhs.getName() << std::endl;
	out << "position: " << rhs.getPos() << std::endl;
	out << "hit points: " << rhs.getHitPts() << std::endl;
	out << "max hit points: " << rhs.getMaxHitPts() << std::endl;
	out << "energy points: " << rhs.getEnergyPts() << std::endl;
	out << "max energy points: " << rhs.getMaxEnergyPts() << std::endl;
	out << "special attack cost: " << rhs.getSpecialAttckCost() << std::endl;
	out << "level: " << rhs.getLvl() << std::endl;
	out << "melee attack dmg: " << rhs.getMeleeAttckDmg() << std::endl;
	out << "ranged attack dmg: " << rhs.getRangedAttckDmg() << std::endl;
	out << "special attack dmg: " << rhs.getSpecialAttckDmg() << std::endl;
	out << "armor dmg reduction: " << rhs.getArmorDmgReduction() << std::endl;
	return (out);
}
