/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
	public:
		Weapon(const std::string& name, int power); //constructor
		~Weapon(); //destructor

		//getters
		std::string GetName();
		int GetPower();

		//setters
		void SetName(const std::string& name);
		void SetPower(int power);

	private:
		std::string name_;
		int power_;
};
#endif
