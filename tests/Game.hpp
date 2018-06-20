
#ifndef GAME_H
# define GAME_H

class Game
{

	private:
		Game(Game const & src);
		Game &		operator=(Game const & rhs);


	public:
		Game(void);
		~Game(void);
		int			init(void);
		void		run(void);
		void		close(void);

};

#endif
