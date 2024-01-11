#include "Zombie.hpp"

Zombie::Zombie ( void ) : _name("defaultZ") {};

Zombie::Zombie ( std::string zombieName) : _name(zombieName) {};

void Zombie::announce() {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie ( void ) {
	std::cout << "Zombie " << this->_name << " destroyed!" << std::endl;
};
