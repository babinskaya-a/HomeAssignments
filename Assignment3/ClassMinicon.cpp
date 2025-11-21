/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "ClassMinicon.h"
#include <iostream>

//constructor
Minicon::Minicon():
		Transformer(),
		size_(50), agility_(30) {};
Minicon::Minicon(const std::string& name):
                Transformer(name),
                size_(50), agility_(30) {};
Minicon::Minicon(const std::string& name, int strength):
                Transformer(name, strength),
                size_(50), agility_(30) {};
Minicon::Minicon(const std::string& name, int strength, int speed):
                Transformer(name, strength, speed),
                size_(50), agility_(30) {};
Minicon::Minicon(const std::string& name, int strength, int speed, bool ammo):
                Transformer(name, strength, speed, ammo),
                size_(50), agility_(30) {};
Minicon::Minicon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle):
                Transformer(name, strength, speed, ammo, weapon, vehicle),
                size_(50), agility_(30) {};
Minicon::Minicon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle, int size):
                Transformer(name, strength, speed, ammo, weapon, vehicle),
                size_(size), agility_(30) {};
Minicon::Minicon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle, int size, int agility):
                Transformer(name, strength, speed, ammo, weapon, vehicle),
                size_(size), agility_(agility) {};

//output
std::ostream& operator<<(std::ostream& os, const Minicon& m) {
	os << "Minicon:"
	<< "name:" << m.GetName()
	<< ", strength:" << m.GetStrength()
	<< ", speed:" << m.GetSpeed()
	<< ", ammo:" << m.GetAmmo()
	<< ", weapon:" << m.GetWeapon()
	<< ", vehicle:" << m.GetVehicle()
	<< ", size:" << m.GetSize()
	<< ", agility:" << m.GetAgility << "\n";
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

void Minicon::Transform() {
	std::cout << "Minicon::Transform() from ClassMinicon";
}

void Minicon::Speak() {
	std::cout << "Minicon::Speak() from ClassMinicon";
}

void Minicon::Fire() {
	std::cout << "Minicon::Fire() from ClassMinicon";
}
