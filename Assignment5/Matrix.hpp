/*
* Arina Babinskaya
* st139880@student.spbu.ru
* Assignment5
*/

#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <cstddef>

template<typename T>
class Matrix {
	private:
		size_t rows_;
		size_t cols_;
		std::vector<T> data_;
	public:
		Matrix(size_t rows, size_t cols, const T& value = T())
			: rows_(rows), cols_(cols), data_(rows * cols, value) {}
		~Matrix() = default;

		T& at(size_t r, size_t c) {
			return data_[r*cols_ + c];
		}

		const T& at(size_t r, size_t c) const {
			return data_[r*cols_ + c];
		}

		size_t rows() const { return rows_; }
		size_t cols() const { return cols_; }

		//multiplication by a scalar
		Matrix operator*(const T& scalar) const {
			Matrix result(rows_, cols_);
			for (size_t i = 0; i < data_.size(); ++i) {
				result.data_[i] = data_[i] * scalar;
			}
			return result;
		}

		//summation of matrices
		Matrix operator+(const Matrix& Matrix2) const {
			Matrix result(rows_, cols_);
			for (size_t i = 0; i < data_.size(); ++i) {
				result.data_[i] = data_[i] + Matrix2.data_[i];
			}
			return result;
		}

		//multiplication of matrices
		Matrix operator*(const Matrix& Matrix2) const {
			Matrix result(rows_, Matrix2.cols_, T());
			for (size_t i = 0; i < rows_; ++i) {
				for (size_t j = 0; j < Matrix2.cols_; ++j) {
					T sum = T(0);
					for (size_t k = 0; k < cols_; ++k) {
						sum = sum + at(i, k) * Matrix2.at(k, j);
					}
					result.at(i, j) = sum;
				}
			}
			return result;
		}

		//transposition
		Matrix transpose() const {
			Matrix result(cols_, rows_);
			for (size_t i = 0; i < rows_; ++i) {
				for (size_t j = 0; j < cols_; ++j) {
					result.at(j, i) = at(i, j);
				}
			}
			return result;
		}
};

#endif
