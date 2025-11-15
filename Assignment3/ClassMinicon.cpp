/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "ClassMinicon.h"

//constructor
Minicon::Minicon(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle,
		int size, int agility):
		Transformer(name, strength, speed, ammo, weapon, vehicle),
		size_(size), agility_(agility) {};

//output
std::ostream& operator<<(std::ostream& os, const Minicon& m) {
	os << "name:" << m.name_ << ", strength:" << m.strength_ << ", speed:" << m.speed_
	<< ", ammo:" << m.ammo_ << ", weapon:" << m.weapon_ << ", vehicle:" << m.vehicle_
	<< ", size:" << m.size_ << ", agility:" << m.agility_ << "\n";
	return os;
}

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

void Minicon::Transfrom() {
	std::cout << "Minicon::Transform() from ClassMinicon";
}

void Minicon::Speak() {
	std::cout << "Minicon::Speak() from ClassMinicon";
}

void Minicon::Fire() {
	std::cout << "Minicon::Fire() from ClassMinicon";
}
