/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment5
*/

#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <cstdint>

class Rational
{
private:
    int64_t num_; //numirator
    int64_t den_; //denominator

    int64_t  gcd(int64_t a, int64_t b);
    void normalize();

public:
    Rational(int64_t num = 0, int64_t den = 1);

    Rational operator+(const Rational& other) const;
    Rational operator*(const Rational& other) const;

    int64_t num() const;
    int64_t den() const;

    bool operator==(const Rational& other) const;
};

#endif
