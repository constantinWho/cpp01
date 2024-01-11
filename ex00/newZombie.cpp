#include "Zombie.hpp"

Zombie* newZombie( void ) {
	return new Zombie("default");
}

Zombie*	newZombie(std::string name) {
	return new Zombie(name);
}
