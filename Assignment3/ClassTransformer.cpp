/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassTransformer.h"

Transformer::Transformer(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon, Vehicle* vehicle):
	name_(name),
	strength_(strength),
	speed_(speed),
	ammo_(ammo),
	weapon_(weapon),
	vehicle_(vehicle) {};

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



//class methods
std::string Transformer::Transform() {
	return "transformed";
}

void Transformer::Fire() {
	ammo_--;
	return true;
}
