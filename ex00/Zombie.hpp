#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

	private:
		std::string _name;

	public:
		Zombie( std::string zombieName );
		void	announce( void );
		~Zombie( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif
