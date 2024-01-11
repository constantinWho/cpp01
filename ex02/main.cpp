#include <iostream>
#include <string>

int main() {
	std::string zombie = "HI THIS IS BRAIN";
	std::string* stringPTR = &zombie;
	std::string& stringREF = zombie;

	std::cout << "Memory address of the string variable: " << &zombie << std::endl;
	std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
	std::cout << "Value of the string variable: " << zombie << std::endl;
	std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
	return 0;
}
