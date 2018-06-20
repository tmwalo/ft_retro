
#ifndef GAMEENTITYFIELD_H
# define GAMEENTITYFIELD_H

class GameEntityField
{

	private:


	public:
		GameEntityField(void);
		GameEntityField(GameEntityField const & src);
		virtual ~GameEntityField(void);
		GameEntityField &		operator=(GameEntityField const & rhs);

};

#endif
