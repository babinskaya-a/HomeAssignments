/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent3
*/

#include <gtest/gtest.h>
#include "ClassMinicon.h"
#include "ClassWeapon.h"
#include "ClassVehicle.h"

TEST(MiniconTest, GetSet) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Minicon m("Optimus Prime", 1000, 200, true, weapon, &vehicle, 50, 100);

	EXPECT_EQ(m.GetSize(), 50);
	EXPECT_EQ(m.GetAgility(), 100);

	m.SetSize(40);
	m.SetAgility(130);

	EXPECT_EQ(m.GetSize(), 40);
	EXPECT_EQ(m.GetAgility(), 130);
}


TEST(MiniconTest, Helping) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Minicon m("Optimus Prime", 1000, 200, true, weapon, &vehicle, 50, 100);

	EXPECT_EQ(m.HelpAutobot(), "help has been provided");
}
