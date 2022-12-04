#include "graph.h"
#include <iostream>
using namespace std;
bool Graph :: isEmpty() {
    return data.size()==0?true:false;
    }
bool Graph:: isDirected(){
    return isDirected;
}

void Graph:: addVertex(char newVertex){
    Vertex vertex;
    vertex.name = newVertex;
    vertex.position = vertices.size();
    noOfVertex +=1;

}

bool Graph :: vertexExist (char vertexTofind){
    for (int i=0 ; i<vertices.size(); i++){
        if (vertexTofind == vertices[i].name)
        {
            return true;
            break;
        }
        else {
            return false;
        }
    }
}

void Graph:: addEdge(char Vertex1, char Vertex2){
    if(vertexExist(Vertex1)&& vertexExist(Vertex2)){
        
    }
    else{
        cout <<"The vertices of the edge donot exist."<<endl;
    }
}