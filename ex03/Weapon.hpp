#include <iostream>
#include <string>

class Weapon {
	private:
		std::string _type;
	public:
		Weapon( void );
		Weapon( std::string type );
		std::string getType( void ) const;
		void setType( std::string );
		~Weapon( void );
};


