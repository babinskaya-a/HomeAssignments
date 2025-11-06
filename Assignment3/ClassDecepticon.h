/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include <string>

class Decepticon() {
	public:
		Decepticon(const std::string& name, int strength, int speed,
                bool ammo, const Weapon& weapon, Vehicle* vehicle,
                bool dangerous, int kills); //constructor

		//getters
		bool GetDangerous();
		int GetKills();

		//setters
		void SetDangerous(bool dangerous);
		void SetKills(int kills);

		//class method
		std::string Destroy();

	private:
		bool dangerous_
		int kills_

};

#endif
