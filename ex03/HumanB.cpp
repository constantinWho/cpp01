#include "HumanB.hpp"

HumanB::HumanB( void ) : _name("default"), _weapon(NULL) {};

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {};

void	HumanB::setWeapon(Weapon *weapon) {
	this->_weapon = weapon;
};

void	HumanB::attack( void ) {
	std::cout << this->_name << " attacks with their "
			<< this->_weapon->getType() << std::endl;
}

HumanB::~HumanB( void ) {};
