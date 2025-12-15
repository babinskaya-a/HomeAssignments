/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment5
*/

#include <gtest/gtest.h>
#include "Matrix.hpp"
#include "Rational.hpp"

TEST(RationalTest, DefaultConstructor)
{
    Rational r;
    EXPECT_EQ(r.num(), 0);
    EXPECT_EQ(r.den(), 1);
}

TEST(RationalTest, Normalization)
{
    Rational r(2, 4);
    EXPECT_EQ(r.num(), 1);
    EXPECT_EQ(r.den(), 2);

    Rational r2(-4, -6);
    EXPECT_EQ(r2.num(), 2);
    EXPECT_EQ(r2.den(), 3);

    Rational r3(3, -9);
    EXPECT_EQ(r3.num(), -1);
    EXPECT_EQ(r3.den(), 3);
}

TEST(RationalTest, Addition)
{
    Rational a(1, 2);
    Rational b(1, 3);
    Rational result = a + b;
    EXPECT_EQ(result, Rational(5, 6));
}

TEST(RationalTest, Multiplication)
{
    Rational a(2, 3);
    Rational b(3, 4);
    Rational result = a * b;
    EXPECT_EQ(result, Rational(1, 2));
}

TEST(RationalTest, ZeroDivision)
{
    Rational r(5, 0);
    EXPECT_EQ(r.num(), 0);
    EXPECT_EQ(r.den(), 1);
}

TEST(RationalTest, Comparison)
{
    Rational a(1, 2);
    Rational b(1, 2);
    Rational c(2, 4);
    Rational d(1, 3);

    EXPECT_TRUE(a == b);
    EXPECT_TRUE(a == c);
    EXPECT_FALSE(a == d);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
