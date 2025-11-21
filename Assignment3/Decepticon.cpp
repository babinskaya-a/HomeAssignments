/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "Decepticon.h"
#include <iostream>


//constructor
Decepticon::Decepticon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle,
                bool dangerous, int kills):
        Transformer(name, strength, speed, ammo, weapon, vehicle),
        dangerous_(dangerous), kills_(kills) {};

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






