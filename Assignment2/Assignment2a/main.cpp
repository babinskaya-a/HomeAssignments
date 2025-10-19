/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment 2a
*/

#include <iostream>
#include <fstream>
#include <filesystem>

int main() {
	// open the file
	std::ifstream infile;
	infile.open("source.pdf", std::ios::binary|std::ios::in);

	// find file's size
	size_t sizef = std::filesystem::file_size("source.pdf");
	std::cout << "File's size is " << sizef << std::endl;

	// make space for file
	char* buffer = new char[sizef];

	// read file
	infile.read(buffer, sizef);
	infile.close();

	// reverse file
	for (size_t i = 0; i < sizef / 2; i++) {
		char a = buffer[i];
		buffer[i] = buffer[sizef - i - 1];
		buffer[sizef - i - 1] = a;
	}

	// add reversed file to new one
	std::ofstream outfile;
	outfile.open("reversed.pdf", std::ios::binary|std::ios::out);
	outfile.write(buffer, sizef);
	outfile.close();

	// clear memory
	delete[] buffer;

	return 0;
}
