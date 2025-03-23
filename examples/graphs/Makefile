CXX = g++
CXXFLAGS = -Wall -std=c++17
INCLUDE = -Iinclude
SRC = src/main.cpp src/graph.cpp
TARGET = graph_tutorial

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $@ $^

clean:
	rm -f $(TARGET) graph.dot graph.png
