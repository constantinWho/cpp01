#include <fstream>
#include <iostream>
#include <string>

void	replaceInFile(std::string& filename, std::string& s1, std::string& s2) {

	std::ifstream inFile(filename.c_str());
	if (!inFile)
	{
		std::cerr << "Error: Failed to open the file."<< std::endl;
		return ;
	}

	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile) {
		std::cerr << "Error: Failed to open the replace file." << std::endl;
		return ;
	}

	std::string line;
	while (std::getline(inFile, line)) {
		size_t pos;
		while ((pos = line.find(s1)) != std::string::npos) {
			line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
		}
		outFile << line << std::endl;
	}

	inFile.close();
	outFile.close();
}

int	main(int ac, char** av) {

	if (ac != 4) {
		std::cerr << "Error: Missing 3 Arguments." << std::endl;
		return 1;
	}

	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);

	replaceInFile(filename, s1, s2);

	return 0;
}
