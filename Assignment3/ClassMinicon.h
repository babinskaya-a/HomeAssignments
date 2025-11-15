/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#ifndef MINICON_H
#define MINICON_H

#include "ClassTransformer.h"

class Minicon : public Transformer{
	public:
		Minicon(const std::string& name, int strength, int speed,
                bool ammo, const Weapon& weapon, Vehicle* vehicle,
                int size, int agility); //constructor

		friend std::ostream& operator<<(std::ostream& os, const Minicon& m); //output

		//getter
		int GetSize();
		int GetAgility();

		//setter
		void SetSize(int size);
		void SetAgility(int agility);

		//class method
		std::string HelpAutobot();
		void Transform() override;
		void Speak() override;
		void Fire() override;

	private:
		int size_;
		int agility_;
};

#endif
