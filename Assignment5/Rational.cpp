/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment5
*/

#include "Rational.hpp"
#include <cstdint>

int64_t Rational::gcd(int64_t a, int64_t b)
{
    while (b != 0)
    {
        int64_t t = a % b;
        a = b;
        b = t;
    }
    if (a >= 0) return a;
    else return -a;
}

void Rational::normalize()
{
    int64_t g = gcd(num_, den_);
    num_ /= g;
    den_ /=g;
    if (den_ < 0)
    {
        num_ = -num_;
        den_ = -den_;
    }
}

Rational::Rational(int64_t num, int64_t den) : num_(num), den_(den)
{
    if (den_ == 0)
    {
        num_ = 0;
        den_ = 1;
        return;
    }

    normalize();
}

Rational Rational::operator+(const Rational& other) const
{
    return Rational(num_ * other.den_ + other.num_ * den_, den_ * other.den_);
}

Rational Rational::operator*(const Rational& other) const
{
    return Rational(num_ * other.num_, den_ * other.den_);
}

int64_t Rational::num() const
{
    return num_;
}

int64_t Rational::den() const
{
    return den_;
}

bool Rational::operator==(const Rational& other) const
{
    return num_ == other.num_ && den_ == other.den_;
}

