#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB( void );
		HumanB( std::string name);
		void attack( void );
		void setWeapon( Weapon *weapon);
		~HumanB();
};

#endif
