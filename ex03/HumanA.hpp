#include <iostream>
#include <string>
#include "Weapon.hpp"


class HumanA {
	private:
		Weapon&		_type;
		std::string	_name;
	public:
		HumanA( std::string name, Weapon &_type);
		void attack( void );
		~HumanA();
};


// *ptr ptr: 0xkjfdshf *ptr: value
// &ref ref; value 
