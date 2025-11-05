/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassVehicle.h"

Vehicle::Vehicle(const std::string& type, const std::string& color): type_(type), color_(color) {};
Vehicle::~Vehicle() {};

//getters
std::string Vehicle::GetType() {
	return type_;
}

std::string Vehicle::GetColor() {
	return color_
}

//setters
void Vechile::SetType(const std::string& type) {
	type_ = type;
}

void Vechile::SetColor(const std::string& color) {
        color_ = color;
}
