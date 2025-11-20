CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror - Wpedantic -I./ -pthread
ARFLAGS = rcs
LIBS = -lgtest -lgtest_main -lpthread

PROJECT = test_check
LIBPROJECT = lib$(PROJECT).a
TESTPROJECT = test-$(PROJECT)

SRCS = ClassTransformer.cpp ClassAutobot.cpp ClassDecepticon.cpp ClassMinicon.cpp ClassWeapon.cpp ClassVehicle.cpp
TEST_SRCS = test_transformer.cpp test_autobot.cpp test_decepticon.cpp test_minicon.cpp
EXAMPLE_SRC = main.cpp

OBJS = $(SRCS:.cpp=.o)
TEST_OBJS = $(TEST_SRCS:.cpp=.o)
EXAMPLE_OBJS = $(EXAMPLE_SRC:.cpp=.o)

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

