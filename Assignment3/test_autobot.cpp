/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent3
*/

#include <gtest/gtest.h>
#include "ClassAutobot.h"
#include "ClassWeapon.h"
#include "ClassVehicle.h"


//getters tests
TEST(AutobotTest, GetLeaderTest) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	EXPECT_EQ(a.GetLeader(), "leader");
}

TEST(AutobotTest, GetRescuesTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.GetRescues(), 100);
}


//setters tests
TEST(AutobotTest, SetLeaderTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	a.SetLeader("not leader");
        EXPECT_EQ(a.GetLeader(), "not leader");
}

TEST(AutobotTest, SetRescuesTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	a.SetRescues(200);
        EXPECT_EQ(a.GetRescues(), 200);
}

//class methods tests
TEST(AutobotTest, MethodTransforTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.Transform(), "Autobot::Transform() from ClassAutobot\n");
}

TEST(AutobotTest, MethodSpeakTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.Speak(), "Autobot::Speak() from ClassAutobot\n");
}

TEST(AutobotTest, MethodFireTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
        EXPECT_EQ(a.Fire(), "Autobot::Fire() from ClassAutobot\n");
}

TEST(AutobotTest, HumanProtection) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader", 100);
	EXPECT_EQ(a.ProtectHumans(), "humans protected");
}


//constructor tests
TEST(MiniconConstructorTest, ConstructorTestEmpty) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon();
        EXPECT_EQ(m.GetName(), "Unknown");
	EXPECT_EQ(m.GetStrength(), 0);
	EXPECT_EQ(m.GetSpeed(), 0);
	EXPECT_FALSE(m.GetAmmo());
	EXPECT_EQ(m.GetWeapon().GetName(), "laser");
	EXPECT_EQ(m.GetVehicle()->GetType(), "jet");
	EXPECT_EQ(m.GetWeapon().GetPower(), 150);
	EXPECT_EQ(m.GetVehicle()->GetColor(), "red");
	EXPECT_EQ(m.GetSize(), 50);
	EXPECT_EG(m.GetAgility(), 30);
}

TEST(MiniconConstructorTest, ConstructorTestWithoutOneParameter) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60);
        EXPECT_EQ(m.GetName(), "Fixit");
        EXPECT_EQ(m.GetStrength(), 1000);
        EXPECT_EQ(m.GetSpeed(), 200);
        EXPECT_TRUE(m.GetAmmo());
        EXPECT_EQ(m.GetWeapon().GetName(), "laser");
        EXPECT_EQ(m.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(m.GetWeapon().GetPower(), 150);
        EXPECT_EQ(m.GetVehicle()->GetColor(), "red");
        EXPECT_EQ(m.GetSize(), 60);
        EXPECT_EG(m.GetAgility(), 30);
}

TEST(MiniconConstructorTest, ConstructorTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Miniocon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.GetName(), "Fixit");
        EXPECT_EQ(m.GetStrength(), 1000);
        EXPECT_EQ(m.GetSpeed(), 200);
        EXPECT_TRUE(m.GetAmmo());
        EXPECT_EQ(m.GetWeapon().GetName(), "laser");
        EXPECT_EQ(m.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(m.GetWeapon().GetPower(), 150);
        EXPECT_EQ(m.GetVehicle()->GetColor(), "red");
        EXPECT_EQ(m.GetSize(), 60);
        EXPECT_EG(m.GetAgility(), 100);
}
