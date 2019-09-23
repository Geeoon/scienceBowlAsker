#include <iostream>
#include <fstream>
#include <string>

bool findSBAFile(std::string path);
std::string blank;
std::string filePath;
std::ofstream sbaFile;

int main() {
	std::cout << "Science Bowl Asker" << std::endl;
	std::cin >> filePath;
	std::cin.ignore();

	if (!findSBAFile(filePath)) {
		std::cout << "Count not find sba file at location!";
		std::cin.get();
		return 0;
	}
	


	return 0;
}

bool findSBAFile(std::string path) {
	sbaFile.open(path);
	
}