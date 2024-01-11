#include "HumanA.hpp"
#include "HumanB.hpp"

int main () {
	Weapon club_a("REF");
	HumanA bob("Harry Potter", club_a);
	bob.attack();
	club_a.setType("BIGGER REF");
	bob.attack();


	Weapon club_b("POINTER");
	HumanB jim("Jim");
	jim.setWeapon(&club_b);
	jim.attack();
	club_b.setType("BIGGER POINTER");
	jim.attack();
	return 0;
}
