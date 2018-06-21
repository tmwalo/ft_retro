
#include "GameEntityEnv.hpp"

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

void				GameEntityEnv::update(void)
{
	int		posY;
	int		posX;

	posY = (this->getPos()).getY();
	posX = (this->getPos()).getX();

	Point	newPosLeft(posY, posX - 1);
	
	this->setPos(newPosLeft);
	
	return ;
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
