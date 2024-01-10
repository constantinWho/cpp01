#include "Zombie.hpp"

int main()
{
	Zombie* zombiePtr = newZombie("FRED");
	zombiePtr->announce();
	delete zombiePtr;

	randomChump("Julius");

	return 0;
}
