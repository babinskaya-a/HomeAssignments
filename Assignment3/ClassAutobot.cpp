/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassAutobot.h"

//constructor
Autobot::Autobot(const std::string& name, int strength, int speed, bool ammo,
		const Weapon& weapon, Vehicle* vehicle,
		const std::string& leader, int rescues):
	Transformer(name, strength, speed, ammo, weapon, vehicle),
	leader_(leader), rescues_(rescues) {};

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

