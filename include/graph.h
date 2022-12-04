#ifndef Graph_h
#define Graph_h
#include <vector>
#include <iostream>
using namespace std;

struct Vertex{
    char name;
    int position;
};

class Graph {

    private:
    
    bool isDirected;
    vector <vector <int>>data;// 2d Matrix
    vector <Vertex> vertices;
    int noOfVertex;    
    public:
    bool isEmpty();
    bool isDirected();
    void addVertex(char newVertex);
    void addEdge(char Vertex1, char Vertex2);
    void removeVertex( char VertexToRemove);
    int Vertices();
    int numEdges();
    int indegree(char Vertex);
    int outdegree(char Vertex);
    int degree(char Vertex);
    string neighbours(char Vertex);
    bool neighbour(char Vertex1, char Vertex2);
    bool vertexExist(char vertexTofind);
    int findPostion(char vertex1)
};
#endif
