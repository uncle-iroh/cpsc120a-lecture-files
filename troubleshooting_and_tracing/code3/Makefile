# Compiler
CXX = g++
CXXFLAGS = -Wall -std=c++17

# Target executable
TARGET = program

# Object files
OBJS = main.o addPhrase.o

# Build target
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile main.cpp
main.o: main.cpp addPhrase.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# Compile addPhrase.cpp
addPhrase.o: addPhrase.cpp addPhrase.h
	$(CXX) $(CXXFLAGS) -c addPhrase.cpp

# Clean up build files
clean:
	rm -f $(TARGET) $(OBJS)
