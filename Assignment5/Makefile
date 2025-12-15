CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -O2
LDFLAGS = -lgtest -lgtest_main -pthread
TESTS = test_matrix test_rational

all: $(TESTS)

test_matrix: test_matrix.cpp Matrix.hpp Rational.hpp Rational.cpp
	$(CXX) $(CXXFLAGS) test_matrix.cpp Rational.cpp -o $@ $(LDFLAGS)

test_rational: test_rational.cpp Rational.hpp Rational.cpp
	$(CXX) $(CXXFLAGS) test_rational.cpp Rational.cpp -o $@ $(LDFLAGS)

test: $(TESTS)
	./test_rational
	./test_matrix

clean:
	rm -f $(TESTS)

.PHONY: all test clean
