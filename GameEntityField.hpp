
#ifndef GAMEENTITYFIELD_H
# define GAMEENTITYFIELD_H

class GameEntityField
{

	private:
		Rectangle			_fieldBounds;
		GameEntityEnv		*_field;
		unsigned int		_size;
		GameEntityField(void);

	public:
		GameEntityField(unsigned int size);
		GameEntityField(GameEntityField const & src);
		virtual ~GameEntityField(void);
		GameEntityField &		operator=(GameEntityField const & rhs);
		Rectangle				getFieldBounds(void) const;
		GameEntityEnv			getField(void) const;
		unsigned int			getSize(void) const;
		void					setFieldBounds(Rectangle fieldBounds);
		void					update(void);

};

#endif
