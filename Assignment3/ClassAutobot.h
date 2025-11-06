/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment3
*/

#ifndef AUTOBOT_H
#define AUTOBOT_H

#include <ClassTransformer.h>

class Autobot() : public Transformer {
	public:
		Autobot(const std::string& name, int strength, int speed,
		bool ammo, const Weapon& weapon, Vehicle* vehicle,
		const std::string& leader, int rescues); //constructor

		//getters
		std::string GetLeader();
		int GetRescues();

		//setters
		void SetLeader(const std::string& leader);
		void SetRescues(int rescues);

		//class method
		std::string ProtectHumans();
};

#endif
