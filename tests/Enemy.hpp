#ifndef ENEMY_H
# define ENEMY_H

# include <iostream>

class Enemy
{
    private:
        static const char   _body = 'X';
        unsigned int        _x;
        unsigned int        _y;
        std::string         _name;

        bool                can_move();
    
    public:
        Enemy();
        ~Enemy();
        Enemy( std::string name );
        Enemy( Enemy const &p1);
        
        Enemy              &operator=( Enemy const &p1);

        void                move(int y, int x, int ch);
        void                shoot();
        int                 get_x() const;
        int                 get_y() const;
        std::string         getname() const;
};

#endif
