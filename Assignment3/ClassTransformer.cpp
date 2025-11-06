/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassTransformer.h"

//constructor
Transformer::Transformer(const std::string& name, int strength, int speed,
		bool ammo, const Weapon& weapon, Vehicle* vehicle):
		name_(name), strength_(strength), speed_(speed),
		ammo_(ammo), weapon_(weapon), vehicle_(vehicle) {};

Transformer::~Transformer() {};

//getters
std::string Transformer::GetName() {
	return name_;
}

int Transformer::GetStrength() {
	return strength_;
}

int Transformer::GetSpeed() {
        return speed_;
}

bool Transformer::GetAmmo() {
        return ammo_;
}

Weapon& Transformer::GetWeapon() {
	return weapon_;
}

Vehicle* Tramsformer::GetVehicle() {
	return vehicle_;
}

//setters
void Transformer::SetName(const std::string& name){
	name_ = name;
}

void Transformer::SetStrength(int strength){
        strength_ = strength;
}

void Transformer::SetSpeed(int speed){
        speed_ = speed;
}

void Transformer::SetAmmo(bool ammo){
        ammo_ = ammo;
}

void Transformer::SetWeapon(const Weapon& weapon) {
	weapon_ = weapon;
}

void Transformer::SetVehicle(Vehicle* vehicle) {
	vehicle_ = vehicle;
}

//class methods
std::string Transformer::Transform() {
	return "transformed";
}

void Transformer::Fire() {
	ammo_--;
	return true;
}
