/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent3
*/

#include <gtest/gtest.h>
#include "Decepticon.h"
#include "Weapon.h"
#include "Vehicle.h"

TEST(DecepticonTest, GetSet) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Decepticon d("Optimus Prime", 1000, 200, true, weapon, &vehicle, true, 100);

	EXPECT_TRUE(d.GetDangerous());
	EXPECT_EQ(d.GetKills(), 100);

	d.SetDangerous(false);
	d.SetKills(0);

	EXPECT_FALSE(d.GetDangerous());
	EXPECT_EQ(d.GetKills(), 0);
}



TEST(DecepticonTest, Destraction) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Decepticon d("Optimus Prime", 1000, 200, true, weapon, &vehicle, true, 100);

        EXPECT_EQ(d.Destroy(), "everything destroyed");
}
