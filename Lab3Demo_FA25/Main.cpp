#include <iostream>
#include <fstream>

int main() 
{
	// 1. Create an ifstream object to read from a file
	std::ifstream inFile;
	
	// 2. Open the file
	inFile.open("inMeanStd.dat");

	int number;

	// 3. Read number from file
	inFile >> number;

	// 4. Print the number to the console
	std::cout << "The number read from the file is: " << number << std::endl;

	int number2;
	inFile >> number2;
	std::cout << "The second number read from the file is: " << number2 << std::endl;

	// 5. Close the file
	inFile.close();

	return 0;
}