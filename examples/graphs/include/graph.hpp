#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <unordered_map>
#include <vector>
#include <fstream>

using namespace std;

class Graph {
public:
    unordered_map<string, vector<string>> adjacency_list;

    void addVertex(const string& vertex);
    void addEdge(const string& vertex1, const string& vertex2);
    void display() const;
    void exportToDot(const string& filename) const;
    void visualize(const string& filename) const;
    bool isIncident(const string& vertex, const string& edge1, const string& edge2) const;
};

#endif
