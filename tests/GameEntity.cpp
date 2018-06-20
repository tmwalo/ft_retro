
#include "GameEntity.hpp"
#include <iostream>
#include "Point.hpp"

GameEntity::GameEntity(void)
{
	return ;
}

GameEntity::GameEntity(char displayChar, Point pos, int hitPts, int maxHitPts, int energyPts,
						int maxEnergyPts, int specialAttckCost, int lvl, std::string name,
						int meleeAttckDmg, int rangedAttckDmg, int specialAttckDmg,
						int armorDmgReduction) :
										_displayChar(displayChar),
										_pos(pos),
										_hitPts(hitPts),
										_maxHitPts(maxHitPts),
										_energyPts(energyPts),
										_maxEnergyPts(maxEnergyPts),
										_specialAttckCost(specialAttckCost),
										_lvl(lvl),
										_name(name),
										_meleeAttckDmg(meleeAttckDmg),
										_rangedAttckDmg(rangedAttckDmg),
										_specialAttckDmg(specialAttckDmg),
										_armorDmgReduction(armorDmgReduction)
{
	return ;
}

GameEntity::GameEntity(GameEntity const & src)
{
	*this = src;
	return ;
}

GameEntity::~GameEntity(void)
{
	return ;
}

GameEntity &		GameEntity::operator=(GameEntity const & rhs)
{
	this->_displayChar = rhs.getDisplayChar();
	this->_pos = rhs.getPos();
	this->_hitPts = rhs.getHitPts();
	this->_maxHitPts = rhs.getMaxHitPts();
	this->_energyPts = rhs.getEnergyPts();
	this->_maxEnergyPts = rhs.getMaxEnergyPts();
	this->_specialAttckCost = rhs.getSpecialAttckCost();
	this->_lvl = rhs.getLvl();
	this->_name = rhs.getName();
	this->_meleeAttckDmg = rhs.getMeleeAttckDmg();
	this->_rangedAttckDmg = rhs.getRangedAttckDmg();
	this->_specialAttckDmg = rhs.getSpecialAttckDmg();
	this->_armorDmgReduction = rhs.getArmorDmgReduction();
	return (*this);
}

void			GameEntity::meleeAttack(GameEntity const & target)
{
	(void)target;
	return ;
}

void			GameEntity::rangedAttack(GameEntity const & target)
{
	(void)target;
	return ;
}

void			GameEntity::specialAttack(GameEntity const & target)
{
	(void)target;
	return ;
}

void			GameEntity::takeDamage(unsigned int amount)
{
	int		effectiveDmg;
	int		newHitPts;

	effectiveDmg = amount - this->getArmorDmgReduction();
	if (effectiveDmg > this->getHitPts())
		newHitPts = 0;
	else
		newHitPts = this->getHitPts() - effectiveDmg;
	this->setHitPts(newHitPts);
	return ;
}

void			GameEntity::beRepaired(unsigned int amount)
{
	int		newHitPts;
	int		hpPlusHeal;

	hpPlusHeal = this->getHitPts() + amount;
	if (hpPlusHeal < this->getMaxHitPts())
		newHitPts = hpPlusHeal;
	else
		newHitPts = this->getMaxHitPts();
	this->setHitPts(newHitPts);
	return ;
}

char			GameEntity::getDisplayChar(void) const
{
	return (this->_displayChar);
}

Point 			GameEntity::getPos(void) const
{
	return (this->_pos);
}

int				GameEntity::getHitPts(void) const
{
	return (this->_hitPts);
}

int				GameEntity::getMaxHitPts(void) const
{
	return (this->_maxHitPts);
}

int				GameEntity::getEnergyPts(void) const
{
	return (this->_energyPts);
}

int				GameEntity::getMaxEnergyPts(void) const
{
	return (this->_maxEnergyPts);
}

int				GameEntity::getSpecialAttckCost(void) const
{
	return (this->_specialAttckCost);
}

int				GameEntity::getLvl(void) const
{
	return (this->_lvl);
}

std::string		GameEntity::getName(void) const
{
	return (this->_name);
}

int				GameEntity::getMeleeAttckDmg(void) const
{
	return (this->_meleeAttckDmg);
}

int				GameEntity::getRangedAttckDmg(void) const
{
	return (this->_rangedAttckDmg);
}

int				GameEntity::getSpecialAttckDmg(void) const
{
	return (this->_specialAttckDmg);
}

int				GameEntity::getArmorDmgReduction(void) const
{
	return (this->_armorDmgReduction);
}

void			GameEntity::setDisplayChar(char val)
{
	this->_displayChar = val;
}

void			GameEntity::setPos(Point val)
{
	this->_pos = val;
}

void			GameEntity::setHitPts(int val)
{
	this->_hitPts = val;
}

void			GameEntity::setMaxHitPts(int val)
{
	this->_maxHitPts = val;
}

void			GameEntity::setEnergyPts(int val)
{
	this->_energyPts = val;
}

void			GameEntity::setMaxEnergyPts(int val)
{
	this->_maxEnergyPts = val;
}

void			GameEntity::setSpecialAttckCost(int val)
{
	this->_specialAttckCost = val;
}

void			GameEntity::setLvl(int val)
{
	this->_lvl = val;
}

void			GameEntity::setName(std::string val)
{
	this->_name = val;
}

void			GameEntity::setMeleeAttckDmg(int val)
{
	this->_meleeAttckDmg = val;
}

void			GameEntity::setRangedAttckDmg(int val)
{
	this->_rangedAttckDmg = val;
}

void			GameEntity::setSpecialAttckDmg(int val)
{
	this->_specialAttckDmg = val;
}

void			GameEntity::setArmorDmgReduction(int val)
{
	this->_armorDmgReduction = val;
}

std::ostream &		operator<<(std::ostream & out, GameEntity & rhs)
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
