CXX = g++
CXXFLAGS = -std=c++17 -Wall -I. -fPIC
ARFLAGS = rcs
LIBS = -lgtest -lgtest_main -lpthread

PROJECT = test_check
LIBPROJECT = lib$(PROJECT).a
TESTPROJECT = test-$(PROJECT)

SRCS = ClassTransformer.cpp ClassAutobot.cpp ClassDecepticon.cpp ClassMinicon.cpp ClassWeapon.cpp ClassVehicle.cpp
TEST_SRCS = test_transformer.cpp

OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)

all: $(TESTPROJECT)

$(LIBPROJECT): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

$(TESTPROJECT): $(TEST_OBJS) $(LIBPROJECT)
	$(CXX) -o $@ $^ $(CXXFLAGS) -L. -l:$(LIBPROJECT) $(LIBS)

test: $(TESTPROJECT)
	./$(TESTPROJECT)

clean:
	rm -f *.o $(PROJECT) $(TESTPROJECT) $(LIBPROJECT)

.PHONY: all clean test

