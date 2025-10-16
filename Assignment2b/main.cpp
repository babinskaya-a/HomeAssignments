/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment2b
*/

#include <iostream>
#include <sstream>
#include <string>

int main() {
	std::string s;
	std::getline(std::cin, s);
	std::stringstream ss(s); //make flow with our input

	int maxs = 100;
	double* stack = new double[maxs]; // creat stack with tyoe double because with division
	int top = -1; // pointer for the top of our stack (firstly it is empty)

	std::string item;
	while (ss >> item){
		if (std::isdigit(item[0])){
			stack[++top] = std::stod(item);
		} else {
			double a = stack[top--];
			double b = stack[top--];
			double result;

			if (item == "+") {
				 result = a + b;
		        } else if (item == "-") {
				result = a - b;
			} else if (item == "*") {
				result = a * b;
			} else if (item == "/") {
				if (b == 0) {
					std::cout << "Can't divide by zero" << std::endl;
					delete[] stack;
					return 1;
				}
				result = a / b;
			}
			stack[++top] = result;
		}
	}

	std::cout << "Result is " << stack[top] << std::endl;
	delete[] stack;
	return 0;

}

