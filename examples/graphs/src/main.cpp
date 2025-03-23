#include "graph.hpp"

/*
2. If an edge connects to a vertex we say the edge is incident to the vertex and
say the vertex is an endpoint of the edge.
*/

void incidentDefinition(void){
    Graph g;
    g.addVertex("A");
    g.addVertex("B");
    g.addEdge("A", "B");
    
    cout << "Graph structure:" << endl;
    g.display();

    cout << "\nIncident edge example:" << endl;
    cout << "Edge (A, B) is incident to A: " << g.isIncident("A", "A", "B") << endl;
    g.visualize("graph");
}

/*
5. Two vertices that are joined by an edge are called adjacent vertices
*/

void adjacentVerticesDefinition(const string& vertex1, const string& vertex2){

    //pegar o nome de cada um dos vertices e verificar se cada um deles esta na lista de adjacencia
    //a definicao tera um efeito colateral de sim ou n

    for(int i = 0; i < adjacency_list[vertex1].size(); i++){
    //retorna um vetor com os vertices adjacentes
        if (adjacency_list[vertex1][i] == vertex2){
            cout << vertex1 << " and " << vertex2 << "are adjacent" << endl;
            break;
        }
        cout << adjacency_list[vertex1][i];
    }
    cout << vertex1 << " and " << vertex2 << "are not" << endl;
}

/*
3. If an edge has only one endpoint then it is called a loop edge
*/

void loopEdgeDefinition(edge){



    for(int i = 0; i < adjacency_list[vertex1].size(); i++){
        //retorna um vetor com os vertices adjacentes
        if (adjacency_list[vertex1][i] != vertex2){
            cout << adjacency_list[vertex1][i];
            cout << "There exist more than one endpoint associated to the edge" << endl;
            break;
        }
    }
    cout << "The edge is a loop edge." << endl;
}

/*
4. If two or more edges have the same endpoints then they are called multiple
or parallel edges
*/

void parallelEdgesDefinition(){
}



/*
6. A pendant vertex is a vertex that is connected to exactly one other vertex
by a single edge.
*/

void pedantVertexDefinition(){
}

/*
7. A walk in a graph is a sequence of alternating vertices and edges v1e1v2e2 . . . vnenvn+1
with n ≥ 0. If v1 = v_n+1 then the walk is closed. The length of the walk is the number of
edges in the walk. A walk of length zero is a trivial walk
*/

void walkDefinition(){
}

int main() {
    return 0;
}
