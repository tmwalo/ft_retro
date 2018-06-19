class GameEntityField
{

	private:
		unsigned int	_size;
		Enemy			_field[this->_size];
		Rectangle		_game_bounds;

	public:
		GameEntityField(void);
		GameEntityField(int);
		GameEntityField(GameFieldEntity const & src);
		~GameEntityField(void);
		GameEntityField const &		operator=(GameEntityField const & rhs);

};
