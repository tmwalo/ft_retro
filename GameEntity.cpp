
#include "GameEntity.hpp"

GameEntity::GameEntity(void)
{
	return ;
}

GameEntity::GameEntity(int hitPts, int maxHitPts, int energyPts, int maxEnergyPts, int lvl, std::string name,
						meleeAttckDmg, rangedAttckDmg, specialAttckDmg, armorDmgReduction) :
										_hitPts(),
										_maxHitPts(),
										_energyPts(),
										_maxEnergyPts(),
										_lvl(),
										_name(name),
										_meleeAttckDmg(),
										_rangedAttckDmg(),
										_specialAttckDmg(),
										_armorDmgReduction()
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
	this->_hitPts = rhs.getHitPts();
	this->_maxHitPts = rhs.getMaxHitPts();
	this->_energyPts = rhs.getEnergyPts();
	this->_maxEnergyPts = rhs.getMaxEnergyPts();
	this->_lvl = rhs.getLvl();
	this->_name = rhs.getName();
	this->_meleeAttckDmg = rhs.getMeleeAttckDmg();
	this->_rangedAttckDmg = rhs.getRangedAttckDmg();
	this->_specialAttckDmg = rhs.getSpecialAttckDmg();
	this->_armorDmgReduction = rhs.getArmorDmgReduction();
	return (*this);
}

void			GameEntity::meleeAttack(std::string const & target)
{
	return ;
}

void			GameEntity::rangedAttack(std::string const & target)
{
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

int				GameEntity::getArmorDmgReduction(void) const
{
	return (this->_armorDmgReduction);
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
