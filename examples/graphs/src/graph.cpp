#include "graph.hpp"

void Graph::addVertex(const string& vertex) {
    if (adjacency_list.find(vertex) == adjacency_list.end()) {
        adjacency_list[vertex] = vector<string>();
    }
}

void Graph::addEdge(const string& vertex1, const string& vertex2) {
    adjacency_list[vertex1].push_back(vertex2);
    adjacency_list[vertex2].push_back(vertex1);  // Grafo não direcionado
}

void Graph::display() const {
    for (const auto& pair : adjacency_list) {
        cout << pair.first << ": ";
        for (const auto& neighbor : pair.second) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
}

void Graph::exportToDot(const string& filename) const {
    ofstream file(filename);
    file << "graph G {" << endl;
    for (const auto& pair : adjacency_list) {
        for (const auto& neighbor : pair.second) {
            file << "    \"" << pair.first << "\" -- \"" << neighbor << "\";" << endl;
        }
    }
    file << "}" << endl;
    file.close();
}

void Graph::visualize(const string& filename) const {
    exportToDot(filename);
    string command = "dot -Tpng " + filename + " -o " + filename + ".png";
    system(command.c_str());
    cout << "Graph visualization saved as " << filename << ".png" << endl;
}

bool Graph::isIncident(const string& vertex, const string& edge1, const string& edge2) const {
    return (vertex == edge1 || vertex == edge2);
}