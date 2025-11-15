/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassAutobot.h"

//constructor
Autobot::Autobot():
	Transformer(), leader_("not leader"), rescues(0) {};
Autobot::Autobot(const std::string& name):
        Transformer(name), leader_("not leader"), rescues(0) {};
Autobot::Autobot(const std::string& name, int strength):
        Transformer(name, strength), leader_("not leader"), rescues(0) {};
Autobot::Autobot(const std::string& name, int strength, int speed):
	Transformer(name, strength, speed), leader_("not leader"), rescues(0) {};
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo):
	Transformer(name, strength, speed, ammo), leader_("not leader"), rescues(0) {};
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle):
	Transformer(name, strength, speed, ammo, weapon, vehicle), leader_("not leader"), rescues(0) {};
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, const std::string& leader):
	Transformer(name, strength, speed, ammo, weapon, vehicle), leader_(leader), rescues(0) {};
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon,
		Vehicle* vehicle, const std::string& leader, int rescues):
	Transformer(name, strength, speed, ammo, weapon, vehicle), leader_(leader), rescues_(rescues) {};

//output
std::ostream& operator<<(std::ostream& os, const Autobot& a) {
	os << "name:" << a.name_ << ", strength:" << a.strength_ << ", speed:" << a.speed_
	<< ", ammo:" << a.ammo_ << ", weapon:" << a.weapon_ << ", vehicle:" << a.vehicle_
	<< ", leader:" << a.leader_ << ", rescues:" << a.rescues_ << "\n";
	return os;
}

//getters
std::string Autobot::GetLeader() {
	return leader_;
}

int Autobot::GetRescues() {
	return rescues_;
}

//setters
void Autobot::SetLeader(const std::string& leader) {
	leader_ = leader;
}

void Autobot::SetRescues(int rescues) {
	rescues_ = rescues;
}

//class method
std::string Autobot::ProtectHumans() {
	return "humans protected";
}

void Autobot::Transform() {
	std::cout << "Autobot::Transform() from ClassAutobot\n";
}

void Autobot::Speak() {
	syd::cout << "Autobot::Speak() from ClassAutobot\n";
}

void Autobot::Fire() {
	std::cout << "Autobot::Fire() from ClassAutobot\n";
}
