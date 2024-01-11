#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _type(weapon), _name(name) {};

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_type.getType() << std::endl;
}

HumanA::~HumanA( void ) {};
