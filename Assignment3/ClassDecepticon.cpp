/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#include "ClassDecepticon.h"

Decepticon::Decepticon(const std::string& name, int strength, int speed, bool ammo,
                const Weapon& weapon, Vehicle* vehicle,
                bool dangerous, int kills):
        Transformer(name:"Decepticon", strength, speed, ammo, weapon, vehicle),
        dangerous_(dangerous), kills_(kills) {};

//getters
bool GetDangerous() {
	return dangerous_;
}

int GetKills() {
	return kills_;
}

//setters
void SetDangerous(bool dangerous) {
	dangerous_ = dangerous;
}

void SetKills(int kills) {
	kills_ = kills;
}

//class method
std::srting Destroy(){
	return "Everything destroyed";
}

