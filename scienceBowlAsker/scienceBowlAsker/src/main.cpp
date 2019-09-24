#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
int main() {
	char filePath[9999];
	char word[50];
	std::string output;
	std::ifstream fileStream;
	int qType;
	int worth;
	std::cout << "Science Bowl Asker" << std::endl << "SBA file path: ";
	std::cin.getline(filePath, 9999);
	fileStream.open(filePath);
	if (!fileStream.is_open()) {
		std::cout << "Invalid Path";
		exit(EXIT_FAILURE);
	}

	while (fileStream.good()) {
		fileStream >> word;
		output = word;
		if (output == "SBA-END") {
			std::cout << "\n\n End of Questioning";
			break;
		} else if (output == "shortAnswer") {
			qType = 1;
			output = "Short Answer  ";
		} else if (output == "multipleChoice") {
			qType = 2;
			output = "Multiple Choice  ";
		} else if (output == "TOSS-UP") {
			worth = 4;
			output = "\n\n TOSS-UP \n";
		} else if (output == "BONUS") {
			worth = 10;
			output = "\n\n BONUS \n";
		} else if (output == "ANSWER:") {
			output = "\n ANSWER: ";
			_getch();
		} else if (output == "W)") {
			output = "\nW) ";
		} else if (output == "X)") {
			output = "\nX) ";
		} else if (output == "Y)") {
			output = "\nY)";
		} else if (output == "Z)") {
			output = "\nZ)";
		}
		std::cout << output << " ";
	}

	fileStream.close();
	_getch();
	return 0;
}