#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <time.h> 

void wait(float time);

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
			std::cout << "\n\n End of Questioning.  Press any key to exit the program.";
			break;
		} else if (output == "shortAnswer") {
			qType = 1;
			output = "Short Answer ";
		} else if (output == "multipleChoice") {
			qType = 2;
			output = "Multiple Choice ";
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
			output = "\n W)";
		} else if (output == "X)") {
			output = "\n X)";
		} else if (output == "Y)") {
			output = "\n Y)";
		} else if (output == "Z)") {
			output = "\n Z)";
		}

		for (int i = 0; i < output.length(); i++) {
			std::cout << output[i];
			wait(50);
		}
		std::cout << " ";
	}

	fileStream.close();
	_getch();
	return 0;
}

void wait(float time) {
// Stroing start time 
clock_t start_time = clock();

// looping till required time is not acheived 
while (clock() < start_time + time);
}