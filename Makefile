CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -Wshadow -Wconversion -Werror -MMD -MP
CPPFLAGS = -I include
SRCS = $(wildcard src/*.cpp)
OBJS = $(SRCS:src/%.cpp=build/%.o)
DEPS = $(SRCS:src/%.cpp=build/%.d)

practice: $(OBJS)
	$(CXX) $^ -o $@

build/%.o: src/%.cpp | build
	$(CXX) $(CXXFLAGS) $(CPPFLAGS) -c $< -o $@

build:
	mkdir -p build

.PHONY: clean
clean:
	rm -rf build practice 

-include $(DEPS)
