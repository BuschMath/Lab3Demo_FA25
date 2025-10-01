#include <iostream>
#include <fstream>
#include <cmath>

float popStdDev(float f_num1_, float f_num2_, float f_num3_, float f_num4_, float f_mean_);

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

	int number3;
	std::cin >> number3;
	std::cout << "The number read from the console is: " << number3 << std::endl;

	int number4;
	std::cin >> number4;
	std::cout << "The second number read from the console is: " << number4 << std::endl;

	// 1. Create an ofstream object to write to a file
	std::ofstream outFile;

	// 2. Open the file
	outFile.open("outMeanStd.dat");

	// 3. Write number to file
	outFile << "The first number is: " << number << std::endl;

	outFile.close();

	return 0;
}

float popStdDev(float f_num1_, float f_num2_, float f_num3_, float f_num4_, float f_mean_)
{
	return (pow(f_num1_ - f_mean_, 2) + pow(f_num2_ - f_mean_, 2) + pow(f_num3_ - f_mean_, 2) + 
		pow(f_num4_ - f_mean_, 2)) / 4;
}