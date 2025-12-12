CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Wpedantic -O2
LDFLAGS = -lgtest -lgtest_main -pthread
TESTS = test_matrix

all: $(TESTS)

$(TESTS): test.cpp Matrix.hpp Rational.hpp
	$(CXX) $(CXXFLAGS) test.cpp -o $@ $(LDFLAGS)

test: $(TESTS)
	./$(TESTS)

clean:
	rm -f $(TESTS)

.PHONY: all test clean
