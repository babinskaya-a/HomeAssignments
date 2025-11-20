CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror - Wpedantic -I./ -pthread
LIBS = -lgtest -lgtest_main

PROJECT = test_check

SRCS = main.cpp ClassTransformer.cpp ClassAutobot.cpp ClassDecepticon.cpp ClassMinicon.cpp ClassWeapon.cpp ClassVehicle.cpp
TEST_SRCS = test_transformer.cpp test_autobot.cpp test_decepticon.cpp test_minicon.cpp ClassTransformer.cpp ClassAutobot.cpp ClassDecepticon.cpp ClassMinicon.cpp ClassWeapon.cpp ClassVehicle.cpp
HEADERS = ClassTransformer.h ClassAutobot.h ClassDecepticon.h ClassMinicon.h ClassWeapon.h ClassVehicle.h

OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

example: $(OBJS)
	$(CXX) $(CXXFLAGS) -o example $(OBJS)

test: $(TEST_OBJS)
	$(CXX) $(CXXFLAGS) -o test_check $(TEST_OBJS) $(LIBS)

%.o %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f *.o $(TEST_OBJS) $(OBJS) test_check example

.PHONY: example clean test

