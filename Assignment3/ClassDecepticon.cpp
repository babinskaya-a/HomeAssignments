/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassDecepticon.h"

//constructors
Decepticon::Decepticon(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, bool dangerous, int kills):
	Transformer(name, strength, speed, ammo, weapon, vehicle), dangerous_(dangerous), kills_(kills) {};

//output
std::ostream& operator<<(std::ostream& os, const Decepticon& d) {
	os << "name:" << d.name_ << ", strength:" << d.strength_ << ", speed:" << d.speed_
	<< ", ammo:" << d.ammo_ << ", weapon:" << d.weapon_ << ", vehicle:" << d.vehicle_
	<< ", dangerous:" << d.dangerous_ << ", kills:" << d.kills_ << "\n";
	return os;
}

//getters
bool Decepticon::GetDangerous() {
	return dangerous_;
}

int Decepticon::GetKills() {
	return kills_;
}

//setters
void Decepticon::SetDangerous(bool dangerous) {
	dangerous_ = dangerous;
}

void Decepticon::SetKills(int kills) {
	kills_ = kills;
}

//class method
std::string Decepticon::Destroy() {
	return "everything destroyed";
}

void Decepticon::Transfrom() {
	std::cout << "Decepticon::Transform() from ClassDecepticon";
}

void Decepticon::Speak() {
	std::cout << "Decepticon::Speak() from ClassDecepticon";
}

void Decepticon::Fire() {
	std::cout << "Decepticon::Fire() from ClassDecepticon";
}



