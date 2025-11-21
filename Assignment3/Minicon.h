/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef MINICON_H
#define MINICON_H

#include "Transformer.h"

class Minicon : public Transformer{
	public:
		Minicon(const std::string& name, int strength, int speed,
                bool ammo, const Weapon& weapon, Vehicle* vehicle,
                int size, int agility); //constructor

		//getter
		int GetSize();
		int GetAgility();

		//setter
		void SetSize(int size);
		void SetAgility(int agility);

		//class method
		std::string HelpAutobot();

	private:
		int size_;
		int agility_;
};

#endif
