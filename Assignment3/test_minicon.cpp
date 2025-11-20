/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignmnent4
*/

#include <gtest/gtest.h>
#include "ClassMinicon.h"
#include "ClassWeapon.h"
#include "ClassVehicle.h"

//getters tests
TEST(MiniconTest, GetSizeTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.GetSize(), 60);
}

TEST(MiniconTest, GetAgilityTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.GetAgility(), 100);
}


//setters tests
TEST(MiniconTest, SetSizeTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        m.SetSize(70);
        EXPECT_EQ(m.GetSize(), 70);
}

TEST(MiniconTest, SetSizeTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        m.SetAgility(120);
        EXPECT_EQ(m.GetAgility(), 120);
}

//class methods tests
TEST(MiniconTest, MethodTransforTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.Transform(), "Minicon::Transform() from ClassMinicon\n");
}

TEST(MiniconTest, MethodSpeakTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.Speak(), "Minicon::Speak() from ClassMinicon\n");
}

TEST(MiniconTest, MethodFireTest) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
        EXPECT_EQ(m.Fire(), "Minicon::Fire() from ClassMinicon\n");
}

TEST(MiniconTest, Helping) {
	Weapon weapon("laser", 150);
	Vehicle vehicle("jet", "red");
	Minicon m("Fixit", 1000, 200, true, weapon, &vehicle, 60, 100);
	EXPECT_EQ(m.HelpAutobot(), "help has been provided");
}

//constructor tests

TEST(AutobotConstructorTest, ConstructorTestEmpty) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a();
        EXPECT_EQ(a.GetName(), "Unknown");
        EXPECT_EQ(a.GetStrength(), 0);
        EXPECT_EQ(a.GetSpeed(), 0);
        EXPECT_FALSE(a.GetAmmo());
        EXPECT_EQ(a.GetWeapon().GetName(), "laser");
        EXPECT_EQ(a.GetVehicle()->GetType(), "jet");
        EXPECT_EQ(a.GetWeapon().GetPower(), 150);
        EXPECT_EQ(a.GetVehicle()->GetColor(), "red");
        EXPECT_EQ(a.GetLeader(), "not leader");
        EXPECT_EG(a.GetRescues(), 0);
}

TEST(AutobotConstructorTest, ConstructorTestWithoutOneParameter) {
        Weapon weapon("laser", 150);
        Vehicle vehicle("jet", "red");
        Autobot a("Optimus Prime", 1000, 200, true, weapon, &vehicle, "leader");
        EXPECT_EQ(a.GetName(), "Optimus Prime");
        EXPECT_EQ(a.GetStrength(), 1000);
        EXPECT_EQ(a.GetSpeed(), 200);
        EXPECT_TRUE(a.GetAmmo());
        EXPECT_EQ(a.GetWeapon().GetName(), "laser");
