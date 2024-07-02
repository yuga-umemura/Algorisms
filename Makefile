CXX = g++
CXXFLAGS = -Wall -std=c++17
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
TARGETS = $(SRC:.cpp=)

all: $(TARGETS)

$(TARGETS): %: %.o
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGETS)
	@echo "Usage: make run FILE=<filename>"
	@echo "Example: make run FILE=linear_search"

run_file:
	@$(CXX) $(CXXFLAGS) -o $(FILE) $(FILE).cpp
	@./$(FILE)

clean:
	rm -f $(OBJ) $(TARGETS)
