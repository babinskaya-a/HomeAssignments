/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef DECEPTICON_H
#define DECEPTICON_H

#include "ClassTransformer.h"

class Decepticon : public Transformer {
	public:
		Decepticon(const std::string& name, int strength, int speed,
                bool ammo, const Weapon& weapon, Vehicle* vehicle,
                bool dangerous, int kills); //constructor

		friend std::ostream& operator<<(std::ostream& os, const Decepticon& d);

		//getters
		bool GetDangerous();
		int GetKills();

		//setters
		void SetDangerous(bool dangerous);
		void SetKills(int kills);

		//class method
		std::string Destroy();
		void Transfrom() override;
		void Speak() override;
		void Fire() override;

	private:
		bool dangerous_;
		int kills_;

};

#endif
