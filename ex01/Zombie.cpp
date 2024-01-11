#include "Zombie.hpp"

Zombie::Zombie ( void ) : _name("default") {};

void	Zombie::setName (std::string name) {
	this->_name = name;
}

void	Zombie::setIndex (int index) {
	this->_index = index;
}

void	Zombie::announce() {
	std::cout << this->_name << this->_index << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie ( void ) {
	std::cout << "Zombie " << this->_name << this->_index << " destroyed!" << std::endl;
};
