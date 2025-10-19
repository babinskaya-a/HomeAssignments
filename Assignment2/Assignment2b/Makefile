CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra
PROJECT = assignment2b
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(PROJECT)

$(PROJECT): $(OBJS)
	$(CXX) $(CXXFLSGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(PROJECT)
	./$(PROJECT)

clean:
	rm -f $(PROJECT) $(OBJS)

.PHONY: all run clean
