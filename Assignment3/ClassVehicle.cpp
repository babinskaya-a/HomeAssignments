/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassVehicle.h"

//constructor
Vehicle::Vehicle(const std::string& type, const std::string& color):
		type_(type), color_(color) {};

//destructor
Vehicle::~Vehicle() {};

//getters
std::string Vehicle::GetType() {
	return type_;
}

std::string Vehicle::GetColor() {
	return color_;
}

//setters
void Vehicle::SetType(const std::string& type) {
	type_ = type;
}

void Vehicle::SetColor(const std::string& color) {
        color_ = color;
}
