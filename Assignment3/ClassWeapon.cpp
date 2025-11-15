/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent4
*/

#include "ClassWeapon.h"

//constructor
Weapon::Weapon(const std::string& name, int power):
	name_(name), power_(power) {};

//destructor
Weapon::~Weapon(){};

//getters
std::string Weapon::GetName() {
	return name_;
}

int Weapon::GetPower() {
	return power_;
}

//setters
void Weapon::SetName(const std::string& name) {
	name_ = name;
}

void Weapon::SetPower(int power) {
	power_ = power;
}
