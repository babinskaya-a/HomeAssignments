/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "Minicon.h"

//constructor
Minicon::Minicon(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle,
		int size, int agility):
		Transformer(name, strength, speed, ammo, weapon, vehicle),
		size_(size), agility_(agility) {};

//getters
int Minicon::GetSize() {
	return size_;
}

int Minicon::GetAgility() {
	return agility_;
}

//setters
void Minicon::SetSize(int size) {
	size_ = size;
}

void Minicon::SetAgility(int agility) {
	agility_ = agility;
}

//class method
std::string Minicon::HelpAutobot() {
	return "help has been provided";
}
