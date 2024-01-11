#include "Harl.hpp"

Harl::Harl( void ) {};

void	Harl::_debug( void ) {
	std::cout << "DEBUG:\nI love having extra bacon for my"
				<< "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n";
}

void	Harl::_info( void ) {
	std::cout << "INFO:\nI cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::_warning( void ) {
	std::cout << "WARNING:\nI think I deserve to have some extra bacon for free. "
				<< "I’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::_error( void ) {
	std::cout << "ERROR:\nThis is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain( std::string level ) {
	void (Harl::*comment[4]) () = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levels[4] = {"DEBUG","INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level == levels[i])
			(this->*comment[i])();
	}
}

Harl::~Harl( void ) {};

