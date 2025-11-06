/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

class Vehicle {
	public:
		Vehicle(const std::string& type, const std::string& color); //constructor
		~Vehicle(); //destructor

		//getters
		std::string GetType();
		std::string GetColor();

		//setters
		void SetType(const std::string& type);
		void SetColor(const std::string& color);

	private:
		std::string type_;
		std::string color_;
};

#endif
