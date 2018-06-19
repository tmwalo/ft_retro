
#ifndef GAMEENTITY_H
# define GAMEENTITY_H

class GameEntity
{

	private:
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
		~GameEntity(void);
		GameEntity &		operator=(GameEntity const & rhs);
		void				meleeAttack(std::string const & target);
		void				rangedAttack(std::string const & target);
		void				specialAttack(std::string const & target);
		void				takeDamage(unsigned int amount);
		void				beRepaired(unsigned int amount);
		int					getHitPts(void) const;
		int					getMaxHitPts(void) const;
		int					getEnergyPts(void) const;
		int					getMaxEnergyPts(void) const;
		int					getSpecialAttckCost(void) const;
		int					getLvl(void) const;
		std::string			getName(void) const;
		int					getMeleeAttckDmg(void) const;
		int					getRangedAttckDmg(void) const;
		int					getArmorDmgReduction(void) const;
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

#endif
