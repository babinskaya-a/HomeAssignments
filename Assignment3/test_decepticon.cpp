/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent3
*/

#include <gtest/gtest.h>
#include "ClassDecepticon.h"
#include "ClassWeapon.h"
#include "ClassVehicle.h"

TEST(DecepticonTest, GetSet) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Decepticon d("Optimus Prime", 1000, 200, true, weapon, &vehicle, true, 100);

	EXPECT_EQ(d.GetDangerous(), true);
	EXPECT_EQ(d.GetKills(), 100);

	d.SetDangerous(false);
	d.SetKills(0);

	EXPECT_EQ(d.GetDangerous(), false);
	EXPECT_EQ(d.GetKills(), 0);
}



TEST(DecepticonTest, Destraction) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Optimus Prime", 1000, 200, true, weapon, &vehicle, true, 100);

        EXPECT_EQ(d.Destroy(), "everything destroyed");
}
