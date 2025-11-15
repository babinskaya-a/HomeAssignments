/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassTransformer.h"

//constructors
Transformer::Transformer():
		name_("Unknown"), strength_(0), speed_(0),ammo_(false),
		weapon_("laser"), vehicle_("car") {};
Transformer::Transformer(const std::string& name):
		name_(name), strength_(0), speed_(0), ammo_(false),
		weapon_("laser"), vehicle_("car") {};
Transformer::Transformer(const std::string& name, int strength):
		name_(name), strength_(strength), speed_(0), ammo_(false),
		weapon_("laser"), vehicle_("car") {};
Transformer::Transformer(const std::string& name, int strength, int speed):
                name_(name), strength_(strength), speed_(speed),
                ammo_(false), weapon_("laser"), vehicle_("car") {};
Transformer::Transformer(const std::string& name, int strength, int speed, bool ammo):
		name_(name), strength_(strength), speed_(speed), ammo_(ammo),
		weapon_("laser"), vehicle_("car") {};
Transformer::Transformer(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle):
		name_(name), strength_(strength), speed_(speed), ammo_(ammo),
		weapon_(weapon), vehicle_(vehicle) {};

//destrudtor
Transformer::~Transformer() {};

//output
std::ostream& operator<<(std::ostream& os, const Transformer& t) {
	os << "name:" << t.name_ << ", strength:" << t.strength_ << ", speed:" << t.speed_
	<< ", ammo:" << t.ammo_ << ", weapon:" << t.weapon_ << ", vehicle:" << t.vehicle_ << "\n";
	return os;
}

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

Vehicle* Transformer::GetVehicle() {
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
void Transformer::Fire() override {
	std::cout << "Transformer::Fire() from ClassTransformer\n";
}

void Transformer::Speak() override {
	std::cout << "Transfomer::Speak() from ClassTransformer\n";
}

