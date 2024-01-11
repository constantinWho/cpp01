#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string _name;
		int			_index;

	public:
		Zombie( void );
		void	announce( void );
		void	setName( std::string name);
		void	setIndex( int index);
		~Zombie( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif
