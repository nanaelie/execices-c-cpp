EXEC = carnet

CXX = g++

CXXFLAGS = -Wall -Wextra -O2 -std=c++11 -I include/

SRC = src/main.cpp src/gestion_contacts.cpp
OBJ = $(SRC:.cpp=.o)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJ)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)

