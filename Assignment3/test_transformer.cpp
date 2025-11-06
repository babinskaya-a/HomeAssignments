/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent3
*/

#include <gtest/gtest.h>
#include "ClassTransformer.h"
#include "ClassWeapon.h"
#include "ClassVehicle.h"

TEST(TransformerTest, GetSet) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Transformer t("Optimus Prime", 1000, 200, true, weapon, &vehicle);

	EXPECT_EQ(t.GetName(), "Optimus Prime");
        EXPECT_EQ(t.GetStrength(), 1000);
        EXPECT_EQ(t.GetSpeed(), 200);
        EXPECT_EQ(t.GetAmmo(), true);
        EXPECT_EQ(t.GetWeapon().GetName(), "laser");
        EXPECT_EQ(t.GetVehicle().GetType(), "jet");
	EXPECT_EQ(t.GetWeapon().GetPower(), 150);
        EXPECT_EQ(t.GetVehicle().GetColor(), "red"); //->


	t.SetName("Optimus");
	t.SetStrength(1500);
	t.SetSpeed(500);
	t.SetAmmo(false);
	t.SetWeapon().SetPower(250);
	Vehicle vehicle_2 ("car", "green");
	t.SetVehicle(&vehicle_2);

        EXPECT_EQ(t.SetName(), "Optimus");
        EXPECT_EQ(t.SetStrength(), 1500);
        EXPECT_EQ(t.SetSpeed(), 500);
        EXPECT_EQ(t.SetAmmo(), false);
        EXPECT_EQ(t.SetWeapon().SetName(), "laser");
        EXPECT_EQ(t.SetVehicle().SetType(), "car");
        EXPECT_EQ(t.SetWeapon().SetPower(), 250);
        EXPECT_EQ(t.SetVehicle().SetColor(), "green"); //->
}

TEST(TransformTest, TransformationStatus) {
	Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Transformer t("Optimus Prime", 1000, 200, true, weapon, &vehicle);
	EXPECT_EQ(t.Transform(), "transformed");
	EXPECT_EQ(t.Fire(), true);
}



