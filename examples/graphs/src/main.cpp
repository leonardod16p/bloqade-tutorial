#include "graph.hpp"

int main() {
    Graph g;
    g.addVertex("A");
    g.addVertex("B");
    g.addVertex("C");
    g.addEdge("A", "B");
    g.addEdge("B", "C");
    g.addEdge("C", "A");

    cout << "Graph structure:" << endl;
    g.display();

    cout << "\nIncident edge example:" << endl;
    cout << "Edge (A, B) is incident to A: " << g.isIncident("A", "A", "B") << endl;
    cout << "Edge (A, B) is incident to C: " << g.isIncident("C", "A", "B") << endl;

    g.visualize("graph");

    return 0;
}
