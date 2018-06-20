
#ifndef GAMEENTITY_H
# define GAMEENTITY_H
# include <iostream>
# include "Point.hpp"

class GameEntity
{

	private:
		char						_displayChar;
		Point						_pos;
		int 						_hitPts;
		int							_maxHitPts;
		int							_energyPts;
		int							_maxEnergyPts;
		int							_specialAttckCost;
		int							_lvl;
		std::string					_name;
		int							_meleeAttckDmg;
		int							_rangedAttckDmg;
		int							_specialAttckDmg;
		int							_armorDmgReduction;
		GameEntity(void);

	public:
		GameEntity(GameEntity const & src);
		GameEntity(char displayChar, Point pos, int hitPts, int maxHitPts, int energyPts,
		int maxEnergyPts, int specialAttckCost, int lvl, std::string name, int meleeAttckDmg,
		int rangedAttckDmg, int specialAttckDmg, int armorDmgReduction);
		~GameEntity(void);
		GameEntity &		operator=(GameEntity const & rhs);
		void				meleeAttack(GameEntity const & target);
		void				rangedAttack(GameEntity const & target);
		void				specialAttack(GameEntity const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		char				getDisplayChar(void) const;
		Point				getPos(void) const;
		int					getHitPts(void) const;
		int					getMaxHitPts(void) const;
		int					getEnergyPts(void) const;
		int					getMaxEnergyPts(void) const;
		int					getSpecialAttckCost(void) const;
		int					getLvl(void) const;
		std::string			getName(void) const;
		int					getMeleeAttckDmg(void) const;
		int					getRangedAttckDmg(void) const;
		int					getSpecialAttckDmg(void) const;
		int					getArmorDmgReduction(void) const;
		void				setDisplayChar(char val);
		void				setPos(Point val);
		void				setHitPts(int val);
		void				setMaxHitPts(int val);
		void				setEnergyPts(int val);
		void				setMaxEnergyPts(int val);
		void				setSpecialAttckCost(int val);
		void				setLvl(int val);
		void				setName(std::string val);
		void				setMeleeAttckDmg(int val);
		void				setRangedAttckDmg(int val);
		void				setSpecialAttckDmg(int val);
		void				setArmorDmgReduction(int val);

};

std::ostream &				operator<<(std::ostream & out, GameEntity & rhs);

#endif
