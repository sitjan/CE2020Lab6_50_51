#include <iostream>
#include "graph.h"
using namespace std;

int main()
{
    Graph g1;
    if (g1.isEmpty())
    {
        cout << "The graph is empty" << endl;
    }
    g1.addVertex('A');
    g1.printMatrix();
    if(g1.isDirected()){
        cout<<"The graph is directed."<<endl;
    }else{
        cout<<"The graph is not directed"<<endl;
    }
    if (g1.isEmpty())
    {
        cout << "Teh graph containasdf" << endl;
    }
    else
    {
        cout << "The graph is not empty" << endl;
    }
    g1.printMatrix();
    g1.addVertex('B');
    
    g1.addVertex('C');
    g1.printMatrix();
    g1.addEdge('A', 'C');
    
    g1.addVertex('D');
    
    g1.addEdge('B', 'D');
    g1.removeedge('B', 'D');
    g1.addEdge('A', 'D');
    g1.addEdge('A', 'B');
    g1.addEdge('A', 'A');
    g1.addEdge('B', 'B');
    
    cout << "The number of edges are: " << g1.numEdges() << endl;
    cout << "The number of vertices are: " << g1.Vertices() << endl;
    cout << "The number of vertices are: " << g1.Vertices() << endl;
    cout << "The number of edges are: " << g1.numEdges() << endl;
    g1.printMatrix();
    cout << "InDegree of A " << g1.indegree('A') << endl;
    cout << "OutDegree of A " << g1.outdegree('A') << endl;
    cout << "Total degree of A " << g1.degree('A') << endl;
    string n;
    g1.addEdge('B', 'D');
    n = g1.neighbours('B');
    cout << "The neighbours of B are :: " << n << endl;
    if (g1.neighbour('C', 'D'))
    {
        cout << "C and D are neigbors" << endl;
    }
    else
    {
        cout << "They are not neigbors" << endl;
    }
}