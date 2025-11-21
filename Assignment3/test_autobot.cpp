/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent3
*/

#include <gtest/gtest.h>
#include "Autobot.h"
#include "Weapon.h"
#include "Vehicle.h"

TEST(AutobotTest, GetSet) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);

	EXPECT_EQ(a.GetLeader(), "leader");
	EXPECT_EQ(a.GetRescues(), 100);

	a.SetLeader("not leader");
	a.SetRescues(200);

	EXPECT_EQ(a.GetLeader(), "not leader");
	EXPECT_EQ(a.GetRescues(), 200);

}

TEST(AutobotTest, HumanProtection) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);

	EXPECT_EQ(a.ProtectHumans(), "humans protected");
}
