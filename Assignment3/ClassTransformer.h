/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef TRANSFORMER_H
#define TRANSFORMER_H

#include <string>
#include "ClassWeapon.h"
#include "ClassVehicle.h"
#include <iostream>


class Transformer {

	friend class Autobot;
	friend class Decepticon;
	friend class Minicon;

        public:
                Transformer(const std::string& name, int strength, int speed,
		bool ammo, const Weapon& weapon, Vehicle* vehicle); //constructor
                virtual ~Transformer(); //destructor

		friend std::ostream& operator<<(std::ostream& os, const Transformer& t); //output

               //getters
                std::string GetName();
		int GetStrength();
		int GetSpeed();
		bool GetAmmo();
		Weapon& GetWeapon();
		Vehicle* GetVehicle();

		//setters
		void SetName(const std::string& name);
		void SetStrength(int strength);
		void SetSpeed(int speed);
		void SetAmmo(bool ammo);
		void SetWeapon(const Weapon& weapon);
		void SetVehicle(Vehicle* vehicle);

		//class methods
		virtual void Transform() = 0; //puerly virtual method
		virtual void Fire();
		virtual void Speak();

        private:
                std::string name_;
                int strength_;
                int speed_;
                bool ammo_;

                Weapon weapon_; //composition
                Vehicle* vehicle_; //association

};
#endif






