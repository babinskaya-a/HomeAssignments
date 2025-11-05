/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "Weapon.h"
#include "Vehicle.h"


class Transformer {
        public:
                Transformer(const std::string& name, int strength, int speed, bool ammo, const Weapon& weapon, Vehicle* vehicle); //constructor
                virtual ~Transformer(); //destructor

               //getters
                std::string GetName();
		int GetStrength();
		int GetSpeed();
		bool GetAmmo();

		//setters
		void SetName(const std::srting& name);
		void SetStrength(int strength);
		void SetSpeed(int speed);
		void SetAmmo(bool ammo);
		// ? void SetWeapon();

		//class methods
		std::string Transform();
		void Fire();

        privite:
                std::string name_;
                int strength_;
                int speed_;
                bool ammo_;

                Weapon weapon_; //composition
                Vehicle* vehicle_; //association

};
#endif






