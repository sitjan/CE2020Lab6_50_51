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
    
    bool isDirectedGraph=false;
    vector <vector <int>>data;// 2d Matrix
    vector <Vertex> vertices;
    int noOfVertex;    
    public:
    bool isEmpty();//checks if the graph is empty
    bool isDirected();//checks if the graph is directed
    void addVertex(char newVertex);//add new vertex
    void addEdge(char Vertex1, char Vertex2);//add new edge
    void removeVertex( char VertexToRemove);
    void removeedge(char vertex1, char vertex2) ;
    int Vertices();
    int numEdges();
    int indegree(char Vertex);
    int outdegree(char Vertex);
    int degree(char Vertex);
    string neighbours(char Vertex);
    bool neighbour(char Vertex1, char Vertex2);
    bool vertexExist(char vertexTofind);
    int findPostion(char vertex1);
    void printMatrix();
};
#endif
