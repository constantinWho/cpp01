#include "Zombie.hpp"

int main()
{
	Zombie* stack = newZombie("stack");
	stack->announce();
	delete stack;

	randomChump("heap");
	return 0;
}
