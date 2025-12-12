/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment5
*/

#include <gtest/gtest.h>
#include "Matrix.hpp"
#include "Rational.hpp"

//tests for integers
TEST(MatrixInt, Summation) {
	Matrix<int> a(2,2,1);
	Matrix<int> b(2,2,2);
	Matrix<int> c = a + b;
	EXPECT_EQ(c.at(0,0), 3);
}

TEST(MatrixInt, MultiplicationByScalar) {
	Matrix<int> a(2,2,3);
	Matrix<int> b = a * 2;
	EXPECT_EQ(b.at(1,1), 6);
}

TEST(MatrixInt, Multiplication) {
	Matrix<int> a(2,2);
	a.at(0,0)=1; a.at(0,1)=2;
	a.at(1,0)=3; a.at(1,1)=4;

	Matrix<int> b=a;
	Matrix<int> c=a*b;

	EXPECT_EQ(c.at(0,0), 7);
	EXPECT_EQ(c.at(1,1), 22);
}

TEST(MatrixInt, Transposition) {
	Matrix<int> a(2,3);
	a.at(0,1)=5;
	Matrix<int> t=a.transpose();
	EXPECT_EQ(t.at(1,0),5);
}

//tests for doubles
TEST(MatrixDouble, Summation) {
        Matrix<double> a(2,2,1.5);
	Matrix<double> b(2,2,2.5);
	Matrix<double> c = a + b;
	EXPECT_DOUBLE_EQ(c.at(0,0), 4.0);
	EXPECT_DOUBLE_EQ(c.at(1,1), 4.0);
}

TEST(MatrixDouble, MultiplicationByScalar) {
        Matrix<double> a(2,2,1.5);
	Matrix<double> b = a * 2.0;
	EXPECT_DOUBLE_EQ(b.at(0,0), 3.0);
	EXPECT_DOUBLE_EQ(b.at(1,1), 3.0);
}

TEST(MatrixDouble, Multiplication) {
	Matrix<double> a(1,2);
	a.at(0,0)=1.5; a.at(0,1)=2.0;

	Matrix<double> b(2,1);
	b.at(0,0)=2.0; b.at(1,0)=3.0;

	Matrix<double> c=a*b;
	EXPECT_DOUBLE_EQ(c.at(0,0), 1.5*2 + 2.0*3);
}

TEST(MatrixDouble, Transposition) {
        Matrix<double> a(2,3,1.0);
	a.at(1,2) = 4.5;
	Matrix<double> t = a.transpose();
	EXPECT_DOUBLE_EQ(t.at(2,1), 4.5);
}

//tests for rational numbers
TEST(RationalTest, Normalization) {
	Rational r(2,4);
	EXPECT_EQ(r.num(), 1);
	EXPECT_EQ(r.den(), 2);
}

TEST(MatrixRational, Summation) {
        Matrix<Rational> a(2,2,Rational(1,2));
	Matrix<Rational> b(2,2,Rational(1,3));
        Matrix<Rational> c = a + b;
        EXPECT_EQ(c.at(0,0), Rational(5,6));
}

TEST(MatrixRational, MultiplicationByScalar) {
        Matrix<Rational> a(2,2,Rational(1,2));
	Matrix<Rational> b = a * Rational(2,3);
	EXPECT_EQ(b.at(0,0), Rational(1,3));
}

TEST(MatrixRational, Multiplication) {
	Rational r1(1,2);
	Rational r2(2,3);

	Matrix<Rational> m(1,1,r1);
	Matrix<Rational> n(1,1,r2);
 	Matrix<Rational> c = m * n;

	EXPECT_EQ(c.at(0,0), Rational(1,3));
}

TEST(MatrixRational, Transposition) {
        Matrix<Rational> a(2,3,Rational(1,2));
	a.at(1,2) = Rational(3,4);
	Matrix<Rational> t = a.transpose();
	EXPECT_EQ(t.at(2,1), Rational(3,4));
}



int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

