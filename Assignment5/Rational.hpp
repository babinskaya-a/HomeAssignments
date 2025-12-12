/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment5
*/

#ifndef RATIONAL_HPP
#define RATIONAL_HPP

#include <cstdint>

class Rational {
	private;
		int64_t num_; //numirator
		int64_t den_; //denominator

		static int64_t  gcd(int64_t a, int64_t b) {
			while (b != 0) {
				int64_t t = a % b;
				a = b;
				b = t;
			}
			if (a >= 0) return a;
			else return -a;
		}

		void normalize() {
			int64_t g = gcd(num_, den_);
			num_ /= g;
			den_ /=g;
			if (den_ < 0) {
				num_ = -num_;
				den_ = -den_;
			}
		}

	public:
		Rational(int64_t num = 0, int64_t den = 1) : num_(num), den_(den) {
			normalize();
		}

		Rational operator+(const Rational& other) const {
			return Rational(num_ * other.den_ + other.num_ * den_, den_ * other.den_);
		}

		Rational operator*(const Rational& other) const {
			return Rational(num_ * other.num_, den_ * other.den_);
		}

		int64_t num() const { return num_; }
		int64_t den() const { return den_; }

		bool operator==(const Rational& other) const {
			return num_ == other.num_ && den_ == other.den_;
		}
};

#endif
