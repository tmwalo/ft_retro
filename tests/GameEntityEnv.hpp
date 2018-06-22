
#ifndef GAMEENTITYENV_H
# define GAMEENTITYENV_H
# include "GameEntityEnv.hpp"
# include "GameEntity.hpp"
# include "Point.hpp"
# include "Rectangle.hpp"

class GameEntityEnv : public GameEntity
{

	public:
		GameEntityEnv(void);
		GameEntityEnv(char displayChar, Point pos, int hitPts, int maxHitPts, int energyPts,
		int maxEnergyPts, int specialAttckCost, int lvl, std::string name, int meleeAttckDmg,
		int rangedAttckDmg, int specialAttckDmg, int armorDmgReduction);
		GameEntityEnv(GameEntityEnv const & src);
		virtual ~GameEntityEnv(void);
		GameEntityEnv &		operator=(GameEntityEnv const & rhs);
		void				update(Rectangle gameBounds);
		void				resetX(Rectangle gameBounds);
		void				randomizeY(Rectangle gameBounds);

};

std::ostream &				operator<<(std::ostream & out, GameEntityEnv & rhs);

#endif
