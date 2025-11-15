/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment4
*/

#include "ClassTransformer.h"
#include "ClassAutobot.h"
#include "ClassDecepticon.h"
#include "ClassMinicon.h"
#include <iostream>
#include <vector>

int main() {
	Weapon weapon("blaster", 100);
	Vehicle vehicle("car", "red");

	Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	Decepticon d("Megatron", 900, 200, true, weapon, &vehicle, true, 90);
	Minicon m("Fixit", 100, 50, false, weapon, &vehicle, 40, 20);

	std::vector<Transformer*> transformers = {&a, &d, &m};

	for (Transformer* t : transformers) {
		std::cout << *t << std::endl;
		std::cout << t.Transform();
		std::cout << t.Speak();
		std::cout << t.Fire();
	}
	return 0;
}
