#include "Weapon.hpp"

Weapon::Weapon ( void ) {
	setType( "default");
}

Weapon::Weapon( std::string type ) {
	setType( type );
};

Weapon::~Weapon( void ) {};

void	Weapon::setType( std::string type ) {
	this->_type = type;
}

std::string	Weapon::getType( void ) const {
	return this->_type;
}
